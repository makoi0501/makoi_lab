# Set Operating Modes
#
# To get familiar with the various operating modes, go to...
# http://emanual.robotis.com/docs/en/software/dynamixel/dynamixel_workbench/
# ...click on a motor model, and scroll down to the 'Operating Mode' section.
#
# There are 6 valid operating modes. They are...
#   "position" - allows up to 1 complete joint revolution (perfect for arm joints); units are in radians
#   "ext_position" - allows up to 512 joint revolutions; units are in radians
#   "velocity" - allows infinite number of rotations (perfect for wheeled robots); units are in rad/s
#   "current" - allows infinite number of rotations (perfect for grippers); units are in milliamps
#   "current_based_position" - allows up to 512 joint revolutions; units are in radians
#   "pwm" - allows infinite number of rotations (perfect for grippers); units are in PWM
#
# Note that the interbotix_xs_sdk offers one other 'pseudo' operating mode that can be useful in controlling Interbotix Grippers - called "linear_position".
# Behind the scenes, it uses the "position" operating mode mentioned above. The main difference is that with this mode, a desired linear distance [m]
# between the two gripper fingers can be commanded. In the "position" mode though, only the angular position of the motor can be commanded.
#
# There are 2 valid profile types - either 'time' or 'velocity'. Depending on which is chosen, the following parameters behave differently.
#
# 1) profile_velocity: acts as a pass-through to the Profile_Velocity register and operates in one of two ways. If
#    'profile_type' is set to 'velocity', this parameter describes the max velocity limit for the specified joint(s);
#    for example, if doing 'position' control, setting this to '131' would be equivalent to a limit of 3.14 rad/s; if
#    'profile_type' is set to 'time', this parameter sets the time span (in milliseconds) that it should take for the
#    specified joint(s) to move; to have an 'infinite' max limit, set to '0'.
#
# 2) profile_acceleration: acts as a pass-through to the Profile_Acceleration register and operates in one of two ways. If
#    'profile_type' is set to 'velocity', this parameter describes the max acceleration limit for the specified joint(s);
#    for example, if doing 'position' or 'velocity' control, setting this to '15' would be equivalent to a limit of 5.6 rad/s^2;
#    if 'profile_type' is set to 'time', this parameter sets the time span (in milliseconds) that it should take for the
#    specified joint(s) to accelerate; to have an 'infinite' max limit, set to '0'.

string cmd_type                     # set to 'group' if commanding a joint group or 'single' if commanding a single joint
string name                         # name of the group if commanding a joint group or joint if commanding a single joint
string mode                         # desired operating mode as described above
string profile_type                 # desired 'profile' type - either 'time' or 'velocity' as described above
int32 profile_velocity              # desired velocity profile as explained above - only used in 'position' or the 'ext_position' control modes
int32 profile_acceleration          # desired acceleration profile as explained above - used in all modes except for 'current' and 'pwm' control
