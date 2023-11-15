#!/usr/bin/env python3

from concurrent.futures import thread
from distutils.util import execute
import signal
import sys
from threading import Thread

from geometry_msgs.msg import Pose, Quaternion
from interbotix_moveit_interface_msgs.srv import MoveItPlan

import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_srvs.srv import Empty
from tf_transformations import quaternion_from_euler

class MoveItService(Node):

    def __init__(self):
        super().__init__('moveit_order')
        self.moveit_planner = self.create_client(MoveItPlan, 'moveit_plan')
        while not self.moveit_planner.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service is not available. waiting...')
        self.command = MoveItPlan.Request()
        self.command.cmd = int(input('cmd :'))
        

    def send_request(self):
        pose = Pose()
        roll = 0
        pitch = 0
        yaw = 0
        pose.position.x = float(input('x :'))
        pose.position.y = float(input('y :'))
        pose.position.z = float(input('z :'))

        qx, qy, qz, qw = quaternion_from_euler(roll, pitch, yaw)
        pose.orientation = Quaternion(x=qx, y=qy, z=qz, w=qw)
        self.get_logger().info((
                'Desired end-effector pose: '
                f'x[m]: {pose.position.x:.2f}, y[m]: {pose.position.y:.2f}, '
                f'z[m] {pose.position.z:.2f}, roll[rad]: {roll:.2f}, '
                f'pitch[rad]: {pitch:.2f}, yaw[rad]: {yaw:.2f}.'
        ))
        self.command.ee_pose = pose
        self.future = self.moveit_planner.call_async(self.command)
        


def main(args=None):
    rclpy.init(args=args)
    node = MoveItService()
    node.send_request()
    
    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().info(f'Service was failed. {e}')
            else:
                node.get_logger().info(f'\n Request: {node.command}-> Response: {response}')
                break
    rclpy.shutdown()

