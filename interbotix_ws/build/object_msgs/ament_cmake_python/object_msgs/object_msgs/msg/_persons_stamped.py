# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_msgs:msg/PersonsStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PersonsStamped(type):
    """Metaclass of message 'PersonsStamped'."""

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
                'object_msgs.msg.PersonsStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__persons_stamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__persons_stamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__persons_stamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__persons_stamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__persons_stamped

            from object_msgs.msg import AgeGender
            if AgeGender.__class__._TYPE_SUPPORT is None:
                AgeGender.__class__.__import_type_support__()

            from object_msgs.msg import Emotion
            if Emotion.__class__._TYPE_SUPPORT is None:
                Emotion.__class__.__import_type_support__()

            from object_msgs.msg import HeadPose
            if HeadPose.__class__._TYPE_SUPPORT is None:
                HeadPose.__class__.__import_type_support__()

            from object_msgs.msg import ObjectInBox
            if ObjectInBox.__class__._TYPE_SUPPORT is None:
                ObjectInBox.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PersonsStamped(metaclass=Metaclass_PersonsStamped):
    """Message class 'PersonsStamped'."""

    __slots__ = [
        '_header',
        '_faces',
        '_emotions',
        '_agegenders',
        '_headposes',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'faces': 'sequence<object_msgs/ObjectInBox>',
        'emotions': 'sequence<object_msgs/Emotion>',
        'agegenders': 'sequence<object_msgs/AgeGender>',
        'headposes': 'sequence<object_msgs/HeadPose>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'ObjectInBox')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'Emotion')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'AgeGender')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['object_msgs', 'msg'], 'HeadPose')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.faces = kwargs.get('faces', [])
        self.emotions = kwargs.get('emotions', [])
        self.agegenders = kwargs.get('agegenders', [])
        self.headposes = kwargs.get('headposes', [])

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
        if self.header != other.header:
            return False
        if self.faces != other.faces:
            return False
        if self.emotions != other.emotions:
            return False
        if self.agegenders != other.agegenders:
            return False
        if self.headposes != other.headposes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def faces(self):
        """Message field 'faces'."""
        return self._faces

    @faces.setter
    def faces(self, value):
        if __debug__:
            from object_msgs.msg import ObjectInBox
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ObjectInBox) for v in value) and
                 True), \
                "The 'faces' field must be a set or sequence and each value of type 'ObjectInBox'"
        self._faces = value

    @builtins.property
    def emotions(self):
        """Message field 'emotions'."""
        return self._emotions

    @emotions.setter
    def emotions(self, value):
        if __debug__:
            from object_msgs.msg import Emotion
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Emotion) for v in value) and
                 True), \
                "The 'emotions' field must be a set or sequence and each value of type 'Emotion'"
        self._emotions = value

    @builtins.property
    def agegenders(self):
        """Message field 'agegenders'."""
        return self._agegenders

    @agegenders.setter
    def agegenders(self, value):
        if __debug__:
            from object_msgs.msg import AgeGender
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, AgeGender) for v in value) and
                 True), \
                "The 'agegenders' field must be a set or sequence and each value of type 'AgeGender'"
        self._agegenders = value

    @builtins.property
    def headposes(self):
        """Message field 'headposes'."""
        return self._headposes

    @headposes.setter
    def headposes(self, value):
        if __debug__:
            from object_msgs.msg import HeadPose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, HeadPose) for v in value) and
                 True), \
                "The 'headposes' field must be a set or sequence and each value of type 'HeadPose'"
        self._headposes = value