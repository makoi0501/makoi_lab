from setuptools import find_packages
from setuptools import setup

setup(
    name='object_msgs',
    version='0.4.0',
    packages=find_packages(
        include=('object_msgs', 'object_msgs.*')),
)
