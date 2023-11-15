# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_msgs:srv/HeadPoseSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeadPoseSrv_Request(type):
    """Metaclass of message 'HeadPoseSrv_Request'."""

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
                'object_msgs.srv.HeadPoseSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__head_pose_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__head_pose_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__head_pose_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__head_pose_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__head_pose_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadPoseSrv_Request(metaclass=Metaclass_HeadPoseSrv_Request):
    """Message class 'HeadPoseSrv_Request'."""

    __slots__ = [
        '_image_path',
    ]

    _fields_and_field_types = {
        'image_path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.image_path = kwargs.get('image_path', str())

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
        if self.image_path != other.image_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image_path(self):
        """Message field 'image_path'."""
        return self._image_path

    @image_path.setter
    def image_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'image_path' field must be of type 'str'"
        self._image_path = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HeadPoseSrv_Response(type):
    """Metaclass of message 'HeadPoseSrv_Response'."""

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
                'object_msgs.srv.HeadPoseSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__head_pose_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__head_pose_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__head_pose_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__head_pose_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__head_pose_srv__response

            from object_msgs.msg import HeadPoseStamped
            if HeadPoseStamped.__class__._TYPE_SUPPORT is None:
                HeadPoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadPoseSrv_Response(metaclass=Metaclass_HeadPoseSrv_Response):
    """Message class 'HeadPoseSrv_Response'."""

    __slots__ = [
        '_headpose',
    ]

    _fields_and_field_types = {
        'headpose': 'object_msgs/HeadPoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'HeadPoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_msgs.msg import HeadPoseStamped
        self.headpose = kwargs.get('headpose', HeadPoseStamped())

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
        if self.headpose != other.headpose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def headpose(self):
        """Message field 'headpose'."""
        return self._headpose

    @headpose.setter
    def headpose(self, value):
        if __debug__:
            from object_msgs.msg import HeadPoseStamped
            assert \
                isinstance(value, HeadPoseStamped), \
                "The 'headpose' field must be a sub message of type 'HeadPoseStamped'"
        self._headpose = value


class Metaclass_HeadPoseSrv(type):
    """Metaclass of service 'HeadPoseSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('object_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_msgs.srv.HeadPoseSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__head_pose_srv

            from object_msgs.srv import _head_pose_srv
            if _head_pose_srv.Metaclass_HeadPoseSrv_Request._TYPE_SUPPORT is None:
                _head_pose_srv.Metaclass_HeadPoseSrv_Request.__import_type_support__()
            if _head_pose_srv.Metaclass_HeadPoseSrv_Response._TYPE_SUPPORT is None:
                _head_pose_srv.Metaclass_HeadPoseSrv_Response.__import_type_support__()


class HeadPoseSrv(metaclass=Metaclass_HeadPoseSrv):
    from object_msgs.srv._head_pose_srv import HeadPoseSrv_Request as Request
    from object_msgs.srv._head_pose_srv import HeadPoseSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
