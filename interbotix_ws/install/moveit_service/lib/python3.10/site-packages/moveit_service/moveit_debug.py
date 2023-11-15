from interbotix_moveit_interface_msgs.srv import MoveItPlan
from rclpy.node import Node
import rclpy

class MoveItDebug(Node):
    def __init__(self):
        super().__init__('moveit_debug')
        self.service = self.create_service(MoveItPlan, 'moveit_plan',self.debug)

    def debug(self, request, response):
        time.sleep(10)
        self.get_logger().info({request.command})
        response.msg.data = 'ok' 
        return 