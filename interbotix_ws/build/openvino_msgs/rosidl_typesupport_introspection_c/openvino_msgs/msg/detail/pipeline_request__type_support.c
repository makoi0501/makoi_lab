// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openvino_msgs:msg/PipelineRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openvino_msgs/msg/detail/pipeline_request__rosidl_typesupport_introspection_c.h"
#include "openvino_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openvino_msgs/msg/detail/pipeline_request__functions.h"
#include "openvino_msgs/msg/detail/pipeline_request__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cmd`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openvino_msgs__msg__PipelineRequest__init(message_memory);
}

void openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_fini_function(void * message_memory)
{
  openvino_msgs__msg__PipelineRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__PipelineRequest, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__PipelineRequest, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__PipelineRequest, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_members = {
  "openvino_msgs__msg",  // message namespace
  "PipelineRequest",  // message name
  3,  // number of fields
  sizeof(openvino_msgs__msg__PipelineRequest),
  openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_member_array,  // message members
  openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_type_support_handle = {
  0,
  &openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, msg, PipelineRequest)() {
  openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_type_support_handle.typesupport_identifier) {
    openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &openvino_msgs__msg__PipelineRequest__rosidl_typesupport_introspection_c__PipelineRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
