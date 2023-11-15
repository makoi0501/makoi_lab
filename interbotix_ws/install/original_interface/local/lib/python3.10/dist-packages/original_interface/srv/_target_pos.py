# generated from rosidl_generator_py/resource/_idl.py.em
# with input from original_interface:srv/TargetPos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TargetPos_Request(type):
    """Metaclass of message 'TargetPos_Request'."""

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
            module = import_type_support('original_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'original_interface.srv.TargetPos_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__target_pos__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__target_pos__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__target_pos__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__target_pos__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__target_pos__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TargetPos_Request(metaclass=Metaclass_TargetPos_Request):
    """Message class 'TargetPos_Request'."""

    __slots__ = [
        '_target_num',
    ]

    _fields_and_field_types = {
        'target_num': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_num = kwargs.get('target_num', int())

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
        if self.target_num != other.target_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_num(self):
        """Message field 'target_num'."""
        return self._target_num

    @target_num.setter
    def target_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_num' field must be an integer in [-2147483648, 2147483647]"
        self._target_num = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_TargetPos_Response(type):
    """Metaclass of message 'TargetPos_Response'."""

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
            module = import_type_support('original_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'original_interface.srv.TargetPos_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__target_pos__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__target_pos__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__target_pos__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__target_pos__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__target_pos__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TargetPos_Response(metaclass=Metaclass_TargetPos_Response):
    """Message class 'TargetPos_Response'."""

    __slots__ = [
        '_targetx',
        '_targety',
        '_targetz',
        '_success',
    ]

    _fields_and_field_types = {
        'targetx': 'double',
        'targety': 'double',
        'targetz': 'double',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.targetx = kwargs.get('targetx', float())
        self.targety = kwargs.get('targety', float())
        self.targetz = kwargs.get('targetz', float())
        self.success = kwargs.get('success', bool())

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
        if self.targetx != other.targetx:
            return False
        if self.targety != other.targety:
            return False
        if self.targetz != other.targetz:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def targetx(self):
        """Message field 'targetx'."""
        return self._targetx

    @targetx.setter
    def targetx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'targetx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'targetx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._targetx = value

    @builtins.property
    def targety(self):
        """Message field 'targety'."""
        return self._targety

    @targety.setter
    def targety(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'targety' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'targety' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._targety = value

    @builtins.property
    def targetz(self):
        """Message field 'targetz'."""
        return self._targetz

    @targetz.setter
    def targetz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'targetz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'targetz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._targetz = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_TargetPos(type):
    """Metaclass of service 'TargetPos'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('original_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'original_interface.srv.TargetPos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__target_pos

            from original_interface.srv import _target_pos
            if _target_pos.Metaclass_TargetPos_Request._TYPE_SUPPORT is None:
                _target_pos.Metaclass_TargetPos_Request.__import_type_support__()
            if _target_pos.Metaclass_TargetPos_Response._TYPE_SUPPORT is None:
                _target_pos.Metaclass_TargetPos_Response.__import_type_support__()


class TargetPos(metaclass=Metaclass_TargetPos):
    from original_interface.srv._target_pos import TargetPos_Request as Request
    from original_interface.srv._target_pos import TargetPos_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
