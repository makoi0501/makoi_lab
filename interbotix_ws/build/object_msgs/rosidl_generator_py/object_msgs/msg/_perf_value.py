# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_msgs:msg/PerfValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerfValue(type):
    """Metaclass of message 'PerfValue'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('object_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_msgs.msg.PerfValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__perf_value
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__perf_value
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__perf_value
            cls._TYPE_SUPPORT = module.type_support_msg__msg__perf_value
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__perf_value

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerfValue(metaclass=Metaclass_PerfValue):
    """Message class 'PerfValue'."""

    __slots__ = [
        '_average',
        '_min',
        '_max',
        '_std_dev',
        '_window',
    ]

    _fields_and_field_types = {
        'average': 'double',
        'min': 'double',
        'max': 'double',
        'std_dev': 'double',
        'window': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.average = kwargs.get('average', float())
        self.min = kwargs.get('min', float())
        self.max = kwargs.get('max', float())
        self.std_dev = kwargs.get('std_dev', float())
        self.window = kwargs.get('window', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.average != other.average:
            return False
        if self.min != other.min:
            return False
        if self.max != other.max:
            return False
        if self.std_dev != other.std_dev:
            return False
        if self.window != other.window:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def average(self):
        """Message field 'average'."""
        return self._average

    @average.setter
    def average(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'average' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._average = value

    @builtins.property  # noqa: A003
    def min(self):  # noqa: A003
        """Message field 'min'."""
        return self._min

    @min.setter  # noqa: A003
    def min(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min = value

    @builtins.property  # noqa: A003
    def max(self):  # noqa: A003
        """Message field 'max'."""
        return self._max

    @max.setter  # noqa: A003
    def max(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max = value

    @builtins.property
    def std_dev(self):
        """Message field 'std_dev'."""
        return self._std_dev

    @std_dev.setter
    def std_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'std_dev' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._std_dev = value

    @builtins.property
    def window(self):
        """Message field 'window'."""
        return self._window

    @window.setter
    def window(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'window' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'window' field must be an integer in [-32768, 32767]"
        self._window = value
