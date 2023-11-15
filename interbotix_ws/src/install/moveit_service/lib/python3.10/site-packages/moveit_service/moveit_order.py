from concurrent.futures import thread
from distutils.util import execute
import signal
import sys
import time
from threading import Thread
from moveit_service.interbotix_gripper import gripper_controll

from geometry_msgs.msg import Pose, Quaternion
from interbotix_moveit_interface_msgs.srv import MoveItPlan
from interbotix_xs_modules.xs_robot.arm import InterbotixManipulatorXS

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

        


    def plan_send_request(self, moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z):
        self.command.cmd = 1
        pose = Pose()
        roll = target_roll
        pitch = target_pitch
        yaw = target_yaw
        pose.position.x = target_x
        pose.position.y = target_y
        pose.position.z = target_z

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
        rclpy.spin_until_future_complete(self, self.future)
        response = self.future.result()

        plan_result = response.success
        if plan_result:
            self.command.cmd = 4
            self.future = self.moveit_planner.call_async(self.command)
            self.get_logger().info('plan was successed')
        else :
            self.get_logger().info('plan was failed')


    def pick(self):
        #pick operation
        target_roll = float(input('roll :'))
        target_pitch = float(input('pitch :'))
        target_yaw = float(input('yaw :'))
        target_x = float(input('x :'))
        target_y = float(input('y :'))
        target_z = float(input('z :'))
        effort_open = 0.115
        self.plan_send_request(self.moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z)       
        
        
    def place(self):    
        #place operation
        target_roll = float(input('roll :'))
        target_pitch = float(input('pitch :'))
        target_yaw = float(input('yaw :'))
        target_x = float(input('x :'))
        target_y = float(input('y :'))
        target_z = float(input('z :'))
        effort_close = 0.039
        self.plan_send_request(self.moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z)


        


def main():
    # rclpy.init()
    bot = InterbotixManipulatorXS(
        robot_model='vx300s',
        group_name='arm',
        gripper_name='gripper'
    )

    node = MoveItService()

    bot.arm.go_to_home_pose(moving_time=1.5)
    bot.gripper.release(2.0)
    node.pick()
    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().info(f'Service was failed. {e}')
            else:
                node.get_logger().info(f'\n Response: {response.msg.data}')
                break
    time.sleep(2.0)
    bot.gripper.grasp(2.0)
    node.place()
    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().info(f'Service was failed. {e}')
            else:
                node.get_logger().info(f'\n Response: {response.msg.data}')
                break
    time.sleep(2.0)
    bot.gripper.release(2.0)
    bot.arm.go_to_home_pose()
    bot.arm.go_to_sleep_pose(moving_time=1.5)
    

    bot.shutdown()
    # rclpy.shutdown()

if __name__ == "__main__":
    main()

