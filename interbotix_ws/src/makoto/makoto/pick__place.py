from interbotix_xs_modules.xs_robot.arm import InterbotixManipulatorXS
import numpy as np


def main():
    bot = InterbotixManipulatorXS(
        robot_model='vx300s',
        group_name='arm',
        gripper_name='gripper'
    )
    bot.arm.go_to_home_pose()
    bot.arm.set_ee_pose_components(x=0.4, y=-0.1, z=0.23, pitch=1.57)
    bot.gripper.release()
    bot.arm.set_ee_cartesian_trajectory(z=-0.1)
    bot.gripper.grasp()
    bot.arm.set_ee_cartesian_trajectory(z=0.1)
    bot.arm.set_ee_pose_components(x=0, y=-0.5, z=0.23,)
    bot.arm.set_ee_cartesian_trajectory(z=-0.1)
    bot.gripper.release()
    bot.arm.go_to_home_pose()
    bot.arm.go_to_sleep_pose()

    bot.shutdown()

if __name__ == '__main__':
    main()
