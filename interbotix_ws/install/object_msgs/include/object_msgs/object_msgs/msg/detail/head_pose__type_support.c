// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_msgs:msg/HeadPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_msgs/msg/detail/head_pose__rosidl_typesupport_introspection_c.h"
#include "object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_msgs/msg/detail/head_pose__functions.h"
#include "object_msgs/msg/detail/head_pose__struct.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_msgs__msg__HeadPose__init(message_memory);
}

void object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_fini_function(void * message_memory)
{
  object_msgs__msg__HeadPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_member_array[4] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__HeadPose, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__HeadPose, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__HeadPose, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__HeadPose, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_members = {
  "object_msgs__msg",  // message namespace
  "HeadPose",  // message name
  4,  // number of fields
  sizeof(object_msgs__msg__HeadPose),
  object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_member_array,  // message members
  object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_init_function,  // function to initialize message memory (memory has to be allocated)
  object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_type_support_handle = {
  0,
  &object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, HeadPose)() {
  object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_type_support_handle.typesupport_identifier) {
    object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_msgs__msg__HeadPose__rosidl_typesupport_introspection_c__HeadPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif