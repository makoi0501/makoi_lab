// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasp_msgs/msg/detail/grasp_config__rosidl_typesupport_introspection_c.h"
#include "grasp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasp_msgs/msg/detail/grasp_config__functions.h"
#include "grasp_msgs/msg/detail/grasp_config__struct.h"


// Include directives for member types
// Member `bottom`
// Member `top`
// Member `surface`
// Member `sample`
#include "geometry_msgs/msg/point.h"
// Member `bottom`
// Member `top`
// Member `surface`
// Member `sample`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `approach`
// Member `binormal`
// Member `axis`
#include "geometry_msgs/msg/vector3.h"
// Member `approach`
// Member `binormal`
// Member `axis`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `width`
// Member `score`
#include "std_msgs/msg/float32.h"
// Member `width`
// Member `score`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasp_msgs__msg__GraspConfig__init(message_memory);
}

void grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_fini_function(void * message_memory)
{
  grasp_msgs__msg__GraspConfig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[9] = {
  {
    "bottom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, bottom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, top),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, surface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "binormal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, binormal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__GraspConfig, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_members = {
  "grasp_msgs__msg",  // message namespace
  "GraspConfig",  // message name
  9,  // number of fields
  sizeof(grasp_msgs__msg__GraspConfig),
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array,  // message members
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_type_support_handle = {
  0,
  &grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasp_msgs, msg, GraspConfig)() {
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_type_support_handle.typesupport_identifier) {
    grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &grasp_msgs__msg__GraspConfig__rosidl_typesupport_introspection_c__GraspConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
