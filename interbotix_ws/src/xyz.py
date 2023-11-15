#!/usr/bin/env python
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Float32
from numpy import sin, cos, tan
from operator import itemgetter
import std_msgs.msg
import time
import csv
from interbotix_xs_modules.arm import InterbotixManipulatorXS
from sensor_msgs.msg import Image
from std_msgs.msg import Float32MultiArray
from cv_bridge import CvBridge, CvBridgeError
import cv2
import rospy
import numpy as np

    
def main():
    x=0.25
    y=0
    z=0.2
    pitch=1.5
    arufa=0.04
    theta=np.pi/18
    turn=0
    roll=0
    bot = InterbotixManipulatorXS("vx300s", "arm")
    yaw=0
    # 在这里初始化机械臂，具体代码取决于使用的机械臂控制库或硬件接口

    while True:
        # 获取键盘输入
        key = input("请输入按键 (w: 上移, s: 下移, a: 左移, d: 右移, t:旋转, q: 退出): ")

        # 调整机械臂的位置
        if key == "b":
            bot.arm.set_ee_pose_components(x=0.25, y=0, z=0.2,roll=0, pitch=1.5 , yaw=0,moving_time=3)
            bot.gripper.close()
        if key == "a":
            # 向上移动
            # 假设移动步长为0.01
            y=y+arufa
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)
            print(x,y,z)
        elif key == "d":
            # 向下移动
            y=y-arufa
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)
            print(x,y,z)
        elif key == "w":
            # 向左移动
            x=x+arufa
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)
            print(x,y,z)
        elif key == "s":
            # 向右移动
            x=x-arufa
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)
            print(x,y,z)
        elif key == "r":
            # 向右移动
            z=z+arufa
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch, moving_time=2)
            print(x,y,z)
        elif key == "f":
            # 向右移动
            z=z-arufa
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch, moving_time=2)
        elif key == "t":
            roll=roll+theta
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch, moving_time=2)
            print(roll)
        elif key == "g":
            roll=roll-theta
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)
            print(roll)
        elif key == "y":
            pitch=pitch+theta
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)
            print(pitch)
        elif key == "h":
            pitch=pitch-theta
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)         
            print(pitch)
        elif key == "u":
            yaw=yaw+theta
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch, yaw,moving_time=2)
            print(yaw)
        elif key == "j":
            yaw=yaw-theta
            bot.arm.set_ee_pose_components(x, y, z, roll, pitch,yaw, moving_time=2)        
            print(yaw)
        elif key == "o":
            bot.gripper.open()
        elif key == "c":
            bot.gripper.close()
        elif key == "q":
            # 退出循环
            break
        else:
            print("无效的输入，请重新输入。")

if __name__ == "__main__":
    main()
