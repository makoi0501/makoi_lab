// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasp_msgs/msg/detail/grasp_config_list__rosidl_typesupport_introspection_c.h"
#include "grasp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasp_msgs/msg/detail/grasp_config_list__functions.h"
#include "grasp_msgs/msg/detail/grasp_config_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `grasps`
#include "grasp_msgs/msg/grasp_config.h"
// Member `grasps`
#include "grasp_msgs/msg/detail/grasp_config__rosidl_typesupport_introspection_c.h"
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasp_msgs__msg__GraspConfigList__init(message_memory);
}

void grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_fini_function(void * message_memory)
{
  grasp_msgs__msg__GraspConfigList__fini(message_memory);
}

size_t grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__size_function__GraspConfigList__grasps(
  const void * untyped_member)
{
  const grasp_msgs__msg__GraspConfig__Sequence * member =
    (const grasp_msgs__msg__GraspConfig__Sequence *)(untyped_member);
  return member->size;
}

const void * grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__get_const_function__GraspConfigList__grasps(
  const void * untyped_member, size_t index)
{
  const grasp_msgs__msg__GraspConfig__Sequence * member =
    (const grasp_msgs__msg__GraspConfig__Sequence *)(untyped_member);
  return &member->data[index];
}

void * grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__get_function__GraspConfigList__grasps(
  void * untyped_member, size_t index)
{
  grasp_msgs__msg__GraspConfig__Sequence * member =
    (grasp_msgs__msg__GraspConfig__Sequence *)(untyped_member);
  return &member->data[index];
}

void grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__fetch_function__GraspConfigList__grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const grasp_msgs__msg__GraspConfig * item =
    ((const grasp_msgs__msg__GraspConfig *)
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__get_const_function__GraspConfigList__grasps(untyped_member, index));
  grasp_msgs__msg__GraspConfig * value =
    (grasp_msgs__msg__GraspConfig *)(untyped_value);
  *value = *item;
}

void grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__assign_function__GraspConfigList__grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  grasp_msgs__msg__GraspConfig * item =
    ((grasp_msgs__msg__GraspConfig *)
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__get_function__GraspConfigList__grasps(untyped_member, index));
  const grasp_msgs__msg__GraspConfig * value =
    (const grasp_msgs__msg__GraspConfig *)(untyped_value);
  *item = *value;
}

bool grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__resize_function__GraspConfigList__grasps(
  void * untyped_member, size_t size)
{
  grasp_msgs__msg__GraspConfig__Sequence * member =
    (grasp_msgs__msg__GraspConfig__Sequence *)(untyped_member);
  grasp_msgs__msg__GraspConfig__Sequence__fini(member);
  return grasp_msgs__msg__GraspConfig__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfigList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfigList, grasps),  // bytes offset in struct
    NULL,  // default value
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__size_function__GraspConfigList__grasps,  // size() function pointer
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__get_const_function__GraspConfigList__grasps,  // get_const(index) function pointer
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__get_function__GraspConfigList__grasps,  // get(index) function pointer
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__fetch_function__GraspConfigList__grasps,  // fetch(index, &value) function pointer
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__assign_function__GraspConfigList__grasps,  // assign(index, value) function pointer
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__resize_function__GraspConfigList__grasps  // resize(index) function pointer
  },
  {
    "object_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfigList, object_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_members = {
  "grasp_msgs__msg",  // message namespace
  "GraspConfigList",  // message name
  3,  // number of fields
  sizeof(grasp_msgs__msg__GraspConfigList),
  grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_member_array,  // message members
  grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_init_function,  // function to initialize message memory (memory has to be allocated)
  grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_type_support_handle = {
  0,
  &grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasp_msgs, msg, GraspConfigList)() {
  grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasp_msgs, msg, GraspConfig)();
  if (!grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_type_support_handle.typesupport_identifier) {
    grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grasp_msgs__msg__GraspConfigList__rosidl_typesupport_introspection_c__GraspConfigList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
