from setuptools import find_packages
from setuptools import setup

setup(
    name='openvino_msgs',
    version='0.9.0',
    packages=find_packages(
        include=('openvino_msgs', 'openvino_msgs.*')),
)
