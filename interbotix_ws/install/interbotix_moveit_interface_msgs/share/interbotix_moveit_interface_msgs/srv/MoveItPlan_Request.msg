# Send commands to the moveit_plan server
#
# Enum values that define the commands available for the server. Note that all
# ee_poses (defined in the 'ee_arm_link' frame) are relative to the 'world' frame.
# There are 5 options:
#   0) CMD_NONE - Command has not been set yet or has been cleared
#   1) CMD_PLAN_POSE - Desired ee_pose which is made up of a position and orientation element
#   2) CMD_PLAN_POSITION - Desired ee_position which is made up of a position element only; orientation is not constrained
#   3) CMD_PLAN_ORIENTATION - Desired ee_orientation which is made up of an orientation element only; position is not constrained
#   4) CMD_EXECUTE - Once a plan is available, this command executes the planned trajectory on the gazebo or physical robot
int8 CMD_NONE = 0
int8 CMD_PLAN_POSE = 1
int8 CMD_PLAN_POSITION = 2
int8 CMD_PLAN_ORIENTATION = 3
int8 CMD_EXECUTE = 4
int8 cmd

# desired ee_pose, position, or orientation
geometry_msgs/Pose ee_pose
