from setuptools import find_packages
from setuptools import setup

setup(
    name='original_interface',
    version='0.0.0',
    packages=find_packages(
        include=('original_interface', 'original_interface.*')),
)
