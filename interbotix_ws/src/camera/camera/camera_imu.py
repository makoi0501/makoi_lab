# import sys
# import math

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
# from tf2_ros import TransformBroadcaster
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
# from sensor_msgs.msg import Imu

class CameraBroadcaster(Node):
    def __init__(self):
        super().__init__('camera_broadcaster')
        transform_stamped = TransformStamped()
        transform_stamped.header.stamp = self.get_clock().now().to_msg()
        transform_stamped.header.frame_id = 'world'
        transform_stamped.child_frame_id = 'camera_link'
        transform_stamped.transform.translation.x = 1.5
        transform_stamped.transform.translation.y = -1.9
        transform_stamped.transform.translation.z = 1.1
        transform_stamped.transform.rotation.x = 0.4533
        transform_stamped.transform.rotation.y =  0.7848
        transform_stamped.transform.rotation.z =  0.3660
        transform_stamped.transform.rotation.w = 0.2114
        broadcaster = StaticTransformBroadcaster(self)
        broadcaster.sendTransform(transform_stamped)   

def main():
    rclpy.init()
    node = CameraBroadcaster()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()



if __name__ == '__main__':
    main()
