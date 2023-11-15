from concurrent.futures import thread
from distutils.util import execute
import signal
import sys
import time
from threading import Thread
from moveit_service.interbotix_gripper import gripper_controll

from geometry_msgs.msg import Pose, Quaternion
from interbotix_moveit_interface_msgs.srv import MoveItPlan
from original_interface.srv import TargetPos
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
        self.target_cli = self.create_client(TargetPos, 'target_pos')
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

    def target_service_caller(self,target_cli):
        req = TargetPos.Request()
        req.target_num = 0

        while not self.target_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('target service is not available. waiting...')

        self.future = self.target_cli.call_async(req)
        rclpy.spin_until_future_complete(self,self.future)
        target_result = self.future.result()

        flag = target_result.success
        if flag:
            self.get_logger().info('target call successful '
                                   f'x[m]: {target_result.targetx:.2f},'
                                   f'y[m]: {target_result.targety:.2f},'
                                   f'z[m]: {target_result.targetz:.2f}'
                                   )
        else:
            self.get_logger().info('target call not successful')

        return target_result




    def pick(self):
        #pick operation
        target_result = self.target_service_caller(self.target_cli)
        target_roll = 0
        target_pitch = 1.57
        target_yaw = 0
        target_x = target_result.targetx
        target_y = target_result.targety 
        target_z_pre = target_result.targetz +0.1
        self.plan_send_request(self.moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z_pre) 
        time.sleep(8.0)
        target_z = target_result.targetz
        self.plan_send_request(self.moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z)


        
        
    def place(self):    
        #place operation
        target_roll = 0
        target_pitch = 1.57
        target_yaw = 0
        target_x = 0.4
        target_y = -0.2
        target_z_pre = 0.13 + 0.1
        self.plan_send_request(self.moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z_pre)
        time.sleep(5.0)
        target_z = 0.13
        self.plan_send_request(self.moveit_planner, target_roll, target_pitch, target_yaw, target_x, target_y, target_z) 




        


def main():
    # rclpy.init()
    bot = InterbotixManipulatorXS(
        robot_model='vx300',
        group_name='arm',
        gripper_name='gripper'
    )

    node = MoveItService()

    bot.arm.set_ee_pose_components(x= 0.25,y=0,z=0.4,pitch=1.57)
    bot.gripper.release(2.0)
    time.sleep(4.0)
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
    bot.arm.set_ee_pose_components(x= 0.25,y=0,z=0.4,pitch=1.57)
    bot.arm.go_to_sleep_pose(moving_time=1.5)
    

    bot.shutdown()
    # rclpy.shutdown()

if __name__ == "__main__":
    main()

