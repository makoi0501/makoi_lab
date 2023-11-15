from setuptools import setup

package_name = 'moveit_service'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='inouemakoto',
    maintainer_email='inouemakoto@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'moveit_order = moveit_service.moveit_order:main',
            'interbotix_gripper = moveit_service.interbotix_gripper:main',
            'test_server = moveit_service.test_server:main',
            'camera_imu = moveit_service.camera_imu:main',
            'target_server = moveit_service.target_server:main'
           
        ],
    },
)
