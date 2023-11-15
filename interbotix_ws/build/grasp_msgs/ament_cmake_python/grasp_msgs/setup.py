from setuptools import find_packages
from setuptools import setup

setup(
    name='grasp_msgs',
    version='0.5.0',
    packages=find_packages(
        include=('grasp_msgs', 'grasp_msgs.*')),
)
