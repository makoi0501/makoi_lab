# Set PID gains
#
# To get familiar with the various PID gains, go to...
# http://emanual.robotis.com/docs/en/software/dynamixel/dynamixel_workbench/
# ...click on a motor model, and scroll down to the 'PID' section.

string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint
string name              # name of the group if commanding a joint group or joint if commanding a single joint
int32 kp_pos             # acts as a pass-through to the Position_P_Gain register
int32 ki_pos             # acts as a pass-through to the Position_I_Gain register
int32 kd_pos             # acts as a pass-through to the Position_D_Gain register
int32 k1                 # acts as a pass-through to the Feedforward_1st_Gain register
int32 k2                 # acts as a pass-through to the Feedforward_2nd_Gain register
int32 kp_vel             # acts as a pass-through to the Velocity_P_Gain register
int32 ki_vel             # acts as a pass-through to the Velocity_I_Gain register
