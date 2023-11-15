# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_msgs:msg/ObjectInBox3D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectInBox3D(type):
    """Metaclass of message 'ObjectInBox3D'."""

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
                'object_msgs.msg.ObjectInBox3D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_in_box3_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_in_box3_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_in_box3_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_in_box3_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_in_box3_d

            from geometry_msgs.msg import Point32
            if Point32.__class__._TYPE_SUPPORT is None:
                Point32.__class__.__import_type_support__()

            from object_msgs.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectInBox3D(metaclass=Metaclass_ObjectInBox3D):
    """Message class 'ObjectInBox3D'."""

    __slots__ = [
        '_object',
        '_roi',
        '_min',
        '_max',
    ]

    _fields_and_field_types = {
        'object': 'object_msgs/Object',
        'roi': 'sensor_msgs/RegionOfInterest',
        'min': 'geometry_msgs/Point32',
        'max': 'geometry_msgs/Point32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_msgs.msg import Object
        self.object = kwargs.get('object', Object())
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())
        from geometry_msgs.msg import Point32
        self.min = kwargs.get('min', Point32())
        from geometry_msgs.msg import Point32
        self.max = kwargs.get('max', Point32())

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
        if self.object != other.object:
            return False
        if self.roi != other.roi:
            return False
        if self.min != other.min:
            return False
        if self.max != other.max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            from object_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object' field must be a sub message of type 'Object'"
        self._object = value

    @builtins.property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value

    @builtins.property  # noqa: A003
    def min(self):  # noqa: A003
        """Message field 'min'."""
        return self._min

    @min.setter  # noqa: A003
    def min(self, value):  # noqa: A003
        if __debug__:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'min' field must be a sub message of type 'Point32'"
        self._min = value

    @builtins.property  # noqa: A003
    def max(self):  # noqa: A003
        """Message field 'max'."""
        return self._max

    @max.setter  # noqa: A003
    def max(self, value):  # noqa: A003
        if __debug__:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'max' field must be a sub message of type 'Point32'"
        self._max = value
