import sys
import rclpy
from rclpy.node import Node
from rclpy.utilities import remove_ros_args
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener 
from original_interface.srv import TargetPos
import time

class TargetListener(Node):

    def __init__(self, args):
        super().__init__('target_listener')
        self.target_frame = 'target'
        if len(args) >= 2:
            self.target_frame = args[1]
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.server = self.create_service(TargetPos, 'target_pos', self.target_callback)

    def target_callback(self,request,responce):
        source_frame = 'world'
        if request.target_num == 0:
            try:
                when = rclpy.time.Time()
                trans = self.tf_buffer.lookup_transform(
                    self.target_frame, source_frame, when
                )
            except TransformException as ex:
                self.get_logger().info(str(ex))
                return
            
            responce.targetx = trans.transform.translation.y
            responce.targety = trans.transform.translation.x +0.015
            responce.targetz = trans.transform.translation.z -0.02
            responce.success = True
            return responce
        
def main():
    rclpy.init()
    service = TargetListener(remove_ros_args(args=sys.argv))
    rclpy.spin(service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()