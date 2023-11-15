# generated from rosidl_generator_py/resource/_idl.py.em
# with input from openvino_msgs:srv/PipelineSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PipelineSrv_Request(type):
    """Metaclass of message 'PipelineSrv_Request'."""

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
            module = import_type_support('openvino_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'openvino_msgs.srv.PipelineSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pipeline_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pipeline_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pipeline_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pipeline_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pipeline_srv__request

            from openvino_msgs.msg import PipelineRequest
            if PipelineRequest.__class__._TYPE_SUPPORT is None:
                PipelineRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PipelineSrv_Request(metaclass=Metaclass_PipelineSrv_Request):
    """Message class 'PipelineSrv_Request'."""

    __slots__ = [
        '_pipeline_request',
    ]

    _fields_and_field_types = {
        'pipeline_request': 'openvino_msgs/PipelineRequest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['openvino_msgs', 'msg'], 'PipelineRequest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from openvino_msgs.msg import PipelineRequest
        self.pipeline_request = kwargs.get('pipeline_request', PipelineRequest())

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
        if self.pipeline_request != other.pipeline_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pipeline_request(self):
        """Message field 'pipeline_request'."""
        return self._pipeline_request

    @pipeline_request.setter
    def pipeline_request(self, value):
        if __debug__:
            from openvino_msgs.msg import PipelineRequest
            assert \
                isinstance(value, PipelineRequest), \
                "The 'pipeline_request' field must be a sub message of type 'PipelineRequest'"
        self._pipeline_request = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PipelineSrv_Response(type):
    """Metaclass of message 'PipelineSrv_Response'."""

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
            module = import_type_support('openvino_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'openvino_msgs.srv.PipelineSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pipeline_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pipeline_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pipeline_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pipeline_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pipeline_srv__response

            from openvino_msgs.msg import Pipeline
            if Pipeline.__class__._TYPE_SUPPORT is None:
                Pipeline.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PipelineSrv_Response(metaclass=Metaclass_PipelineSrv_Response):
    """Message class 'PipelineSrv_Response'."""

    __slots__ = [
        '_pipelines',
    ]

    _fields_and_field_types = {
        'pipelines': 'sequence<openvino_msgs/Pipeline>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['openvino_msgs', 'msg'], 'Pipeline')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pipelines = kwargs.get('pipelines', [])

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
        if self.pipelines != other.pipelines:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pipelines(self):
        """Message field 'pipelines'."""
        return self._pipelines

    @pipelines.setter
    def pipelines(self, value):
        if __debug__:
            from openvino_msgs.msg import Pipeline
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
                 all(isinstance(v, Pipeline) for v in value) and
                 True), \
                "The 'pipelines' field must be a set or sequence and each value of type 'Pipeline'"
        self._pipelines = value


class Metaclass_PipelineSrv(type):
    """Metaclass of service 'PipelineSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('openvino_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'openvino_msgs.srv.PipelineSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pipeline_srv

            from openvino_msgs.srv import _pipeline_srv
            if _pipeline_srv.Metaclass_PipelineSrv_Request._TYPE_SUPPORT is None:
                _pipeline_srv.Metaclass_PipelineSrv_Request.__import_type_support__()
            if _pipeline_srv.Metaclass_PipelineSrv_Response._TYPE_SUPPORT is None:
                _pipeline_srv.Metaclass_PipelineSrv_Response.__import_type_support__()


class PipelineSrv(metaclass=Metaclass_PipelineSrv):
    from openvino_msgs.srv._pipeline_srv import PipelineSrv_Request as Request
    from openvino_msgs.srv._pipeline_srv import PipelineSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
