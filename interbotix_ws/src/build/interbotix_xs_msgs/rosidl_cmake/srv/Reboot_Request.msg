# Reboot motors
#
# Note that if a dual-joint is selected, both motors will be rebooted. Also note
# that motors will NOT hold position during the reboot process. Additionally, only
# EEPROM registers will retain their values, but RAM registers will not. See details
# at https://emanual.robotis.com/docs/en/dxl/x/xm430-w350/#area-eeprom-ram

string cmd_type          # set to 'group' if commanding a joint group or 'single' if commanding a single joint
string name              # name of the group if commanding a joint group or joint if commanding a single joint
bool enable              # whether to torque the selected joints on after reboot
bool smart_reboot        # set to true to only reboot motors in a specified group that are in an error state
                         # (as opposed to a blanket reboot of all motors in said group)
