// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openvino_msgs:msg/Pipeline.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openvino_msgs/msg/detail/pipeline__rosidl_typesupport_introspection_c.h"
#include "openvino_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openvino_msgs/msg/detail/pipeline__functions.h"
#include "openvino_msgs/msg/detail/pipeline__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `running_status`
#include "rosidl_runtime_c/string_functions.h"
// Member `connections`
#include "openvino_msgs/msg/connection.h"
// Member `connections`
#include "openvino_msgs/msg/detail/connection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openvino_msgs__msg__Pipeline__init(message_memory);
}

void openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_fini_function(void * message_memory)
{
  openvino_msgs__msg__Pipeline__fini(message_memory);
}

size_t openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__size_function__Pipeline__connections(
  const void * untyped_member)
{
  const openvino_msgs__msg__Connection__Sequence * member =
    (const openvino_msgs__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__get_const_function__Pipeline__connections(
  const void * untyped_member, size_t index)
{
  const openvino_msgs__msg__Connection__Sequence * member =
    (const openvino_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__get_function__Pipeline__connections(
  void * untyped_member, size_t index)
{
  openvino_msgs__msg__Connection__Sequence * member =
    (openvino_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__fetch_function__Pipeline__connections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const openvino_msgs__msg__Connection * item =
    ((const openvino_msgs__msg__Connection *)
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__get_const_function__Pipeline__connections(untyped_member, index));
  openvino_msgs__msg__Connection * value =
    (openvino_msgs__msg__Connection *)(untyped_value);
  *value = *item;
}

void openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__assign_function__Pipeline__connections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  openvino_msgs__msg__Connection * item =
    ((openvino_msgs__msg__Connection *)
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__get_function__Pipeline__connections(untyped_member, index));
  const openvino_msgs__msg__Connection * value =
    (const openvino_msgs__msg__Connection *)(untyped_value);
  *item = *value;
}

bool openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__resize_function__Pipeline__connections(
  void * untyped_member, size_t size)
{
  openvino_msgs__msg__Connection__Sequence * member =
    (openvino_msgs__msg__Connection__Sequence *)(untyped_member);
  openvino_msgs__msg__Connection__Sequence__fini(member);
  return openvino_msgs__msg__Connection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__Pipeline, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__Pipeline, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__Pipeline, connections),  // bytes offset in struct
    NULL,  // default value
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__size_function__Pipeline__connections,  // size() function pointer
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__get_const_function__Pipeline__connections,  // get_const(index) function pointer
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__get_function__Pipeline__connections,  // get(index) function pointer
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__fetch_function__Pipeline__connections,  // fetch(index, &value) function pointer
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__assign_function__Pipeline__connections,  // assign(index, value) function pointer
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__resize_function__Pipeline__connections  // resize(index) function pointer
  },
  {
    "running_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__msg__Pipeline, running_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_members = {
  "openvino_msgs__msg",  // message namespace
  "Pipeline",  // message name
  4,  // number of fields
  sizeof(openvino_msgs__msg__Pipeline),
  openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_member_array,  // message members
  openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_init_function,  // function to initialize message memory (memory has to be allocated)
  openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_type_support_handle = {
  0,
  &openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, msg, Pipeline)() {
  openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, msg, Connection)();
  if (!openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_type_support_handle.typesupport_identifier) {
    openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &openvino_msgs__msg__Pipeline__rosidl_typesupport_introspection_c__Pipeline_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
