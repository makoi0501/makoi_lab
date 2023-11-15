// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__STRUCT_H_
#define GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'grasps'
#include "grasp_msgs/msg/detail/grasp_config__struct.h"
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GraspConfigList in the package grasp_msgs.
/**
  * This message stores a list of grasp configurations.
 */
typedef struct grasp_msgs__msg__GraspConfigList
{
  /// The time of acquisition, and the coordinate frame ID.
  std_msgs__msg__Header header;
  /// The list of grasp configurations.
  grasp_msgs__msg__GraspConfig__Sequence grasps;
  /// Name of the known object these grasps associated to.
  rosidl_runtime_c__String object_name;
} grasp_msgs__msg__GraspConfigList;

// Struct for a sequence of grasp_msgs__msg__GraspConfigList.
typedef struct grasp_msgs__msg__GraspConfigList__Sequence
{
  grasp_msgs__msg__GraspConfigList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasp_msgs__msg__GraspConfigList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG_LIST__STRUCT_H_
