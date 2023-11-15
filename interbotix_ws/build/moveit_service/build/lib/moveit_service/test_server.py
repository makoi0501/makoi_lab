import rclpy
from rclpy.node import Node
from original_interface.srv import TargetPos
import time


class test_server(Node):
    def __init__(self):
        super().__init__('test_sever')
        self.server = self.create_service(TargetPos, 'target_pos', self.callback)

    def callback(self,request,responce):
        if request.target_num == 0:
            responce.targetx = 0.4#float(input('x:'))
            responce.targety = 0.2#float(input('y:'))
            responce.targetz = 0.13#float(input('z:'))
            responce.success = True
            return responce
        
def main():
    rclpy.init()
    service = test_server()
    rclpy.spin(service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()