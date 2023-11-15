from setuptools import find_packages
from setuptools import setup

setup(
    name='moveit_msgs',
    version='0.5.0',
    packages=find_packages(
        include=('moveit_msgs', 'moveit_msgs.*')),
)
