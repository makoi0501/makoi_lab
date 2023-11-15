# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_msgs:srv/ClassifyObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClassifyObject_Request(type):
    """Metaclass of message 'ClassifyObject_Request'."""

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
                'object_msgs.srv.ClassifyObject_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__classify_object__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__classify_object__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__classify_object__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__classify_object__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__classify_object__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClassifyObject_Request(metaclass=Metaclass_ClassifyObject_Request):
    """Message class 'ClassifyObject_Request'."""

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


class Metaclass_ClassifyObject_Response(type):
    """Metaclass of message 'ClassifyObject_Response'."""

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
                'object_msgs.srv.ClassifyObject_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__classify_object__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__classify_object__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__classify_object__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__classify_object__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__classify_object__response

            from object_msgs.msg import Objects
            if Objects.__class__._TYPE_SUPPORT is None:
                Objects.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClassifyObject_Response(metaclass=Metaclass_ClassifyObject_Response):
    """Message class 'ClassifyObject_Response'."""

    __slots__ = [
        '_objects',
    ]

    _fields_and_field_types = {
        'objects': 'object_msgs/Objects',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'Objects'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_msgs.msg import Objects
        self.objects = kwargs.get('objects', Objects())

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
        if self.objects != other.objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if __debug__:
            from object_msgs.msg import Objects
            assert \
                isinstance(value, Objects), \
                "The 'objects' field must be a sub message of type 'Objects'"
        self._objects = value


class Metaclass_ClassifyObject(type):
    """Metaclass of service 'ClassifyObject'."""

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
                'object_msgs.srv.ClassifyObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__classify_object

            from object_msgs.srv import _classify_object
            if _classify_object.Metaclass_ClassifyObject_Request._TYPE_SUPPORT is None:
                _classify_object.Metaclass_ClassifyObject_Request.__import_type_support__()
            if _classify_object.Metaclass_ClassifyObject_Response._TYPE_SUPPORT is None:
                _classify_object.Metaclass_ClassifyObject_Response.__import_type_support__()


class ClassifyObject(metaclass=Metaclass_ClassifyObject):
    from object_msgs.srv._classify_object import ClassifyObject_Request as Request
    from object_msgs.srv._classify_object import ClassifyObject_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
