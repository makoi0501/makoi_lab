# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_msgs:srv/AgeGenderSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AgeGenderSrv_Request(type):
    """Metaclass of message 'AgeGenderSrv_Request'."""

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
                'object_msgs.srv.AgeGenderSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__age_gender_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__age_gender_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__age_gender_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__age_gender_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__age_gender_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AgeGenderSrv_Request(metaclass=Metaclass_AgeGenderSrv_Request):
    """Message class 'AgeGenderSrv_Request'."""

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


class Metaclass_AgeGenderSrv_Response(type):
    """Metaclass of message 'AgeGenderSrv_Response'."""

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
                'object_msgs.srv.AgeGenderSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__age_gender_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__age_gender_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__age_gender_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__age_gender_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__age_gender_srv__response

            from object_msgs.msg import AgeGenderStamped
            if AgeGenderStamped.__class__._TYPE_SUPPORT is None:
                AgeGenderStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AgeGenderSrv_Response(metaclass=Metaclass_AgeGenderSrv_Response):
    """Message class 'AgeGenderSrv_Response'."""

    __slots__ = [
        '_age_gender',
    ]

    _fields_and_field_types = {
        'age_gender': 'object_msgs/AgeGenderStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'AgeGenderStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_msgs.msg import AgeGenderStamped
        self.age_gender = kwargs.get('age_gender', AgeGenderStamped())

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
        if self.age_gender != other.age_gender:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def age_gender(self):
        """Message field 'age_gender'."""
        return self._age_gender

    @age_gender.setter
    def age_gender(self, value):
        if __debug__:
            from object_msgs.msg import AgeGenderStamped
            assert \
                isinstance(value, AgeGenderStamped), \
                "The 'age_gender' field must be a sub message of type 'AgeGenderStamped'"
        self._age_gender = value


class Metaclass_AgeGenderSrv(type):
    """Metaclass of service 'AgeGenderSrv'."""

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
                'object_msgs.srv.AgeGenderSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__age_gender_srv

            from object_msgs.srv import _age_gender_srv
            if _age_gender_srv.Metaclass_AgeGenderSrv_Request._TYPE_SUPPORT is None:
                _age_gender_srv.Metaclass_AgeGenderSrv_Request.__import_type_support__()
            if _age_gender_srv.Metaclass_AgeGenderSrv_Response._TYPE_SUPPORT is None:
                _age_gender_srv.Metaclass_AgeGenderSrv_Response.__import_type_support__()


class AgeGenderSrv(metaclass=Metaclass_AgeGenderSrv):
    from object_msgs.srv._age_gender_srv import AgeGenderSrv_Request as Request
    from object_msgs.srv._age_gender_srv import AgeGenderSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
