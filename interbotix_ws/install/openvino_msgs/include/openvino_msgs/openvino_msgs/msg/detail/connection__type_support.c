// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openvino_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openvino_msgs/msg/detail/connection__rosidl_typesupport_introspection_c.h"
#include "openvino_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openvino_msgs/msg/detail/connection__functions.h"
#include "openvino_msgs/msg/detail/connection__struct.h"


// Include directives for member types
// Member `input`
// Member `output`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openvino_msgs__msg__Connection__init(message_memory);
}

void openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_fini_function(void * message_memory)
{
  openvino_msgs__msg__Connection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_member_array[2] = {
  {
    "input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__Connection, input),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__Connection, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_members = {
  "openvino_msgs__msg",  // message namespace
  "Connection",  // message name
  2,  // number of fields
  sizeof(openvino_msgs__msg__Connection),
  openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_member_array,  // message members
  openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_init_function,  // function to initialize message memory (memory has to be allocated)
  openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_type_support_handle = {
  0,
  &openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, msg, Connection)() {
  if (!openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_type_support_handle.typesupport_identifier) {
    openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &openvino_msgs__msg__Connection__rosidl_typesupport_introspection_c__Connection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
