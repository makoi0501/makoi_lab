#!/usr/bin/env python3

from concurrent.futures import thread
import rclpy
from rclpy.duration import Duration
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from rclpy.node import Node
from interbotix_xs_msgs.msg import JointSingleCommand


import time
import threading



class gripper_controll(Node):
    def __init__(self):
        super().__init__('gripper_controll')
        self.joint_names = [
            'left_finger'
        ]
        self.publisher_gripper = self.create_publisher(
            JointSingleCommand,
            'vx300s/commands/joint_single', 10
        )

    def publish_gripper(self,effort):
        msg = JointSingleCommand()
        msg.name = 'gripper'
        msg.cmd = effort
        self.publisher_gripper.publish(msg)

def main():
    rclpy.init()
    gripper = gripper_controll()
    effort = float(input('effort:'))
    gripper.publish_gripper(effort)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
    
    
