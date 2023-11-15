// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__STRUCT_H_
#define GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__STRUCT_H_

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
// Member 'samples'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/SamplesMsg in the package grasp_msgs.
/**
  * This message describes a set of point samples at which to detect grasps.
 */
typedef struct grasp_msgs__msg__SamplesMsg
{
  /// Header
  std_msgs__msg__Header header;
  /// The samples, as (x,y,z) points, at which to search for grasp candidates.
  geometry_msgs__msg__Point__Sequence samples;
} grasp_msgs__msg__SamplesMsg;

// Struct for a sequence of grasp_msgs__msg__SamplesMsg.
typedef struct grasp_msgs__msg__SamplesMsg__Sequence
{
  grasp_msgs__msg__SamplesMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasp_msgs__msg__SamplesMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__DETAIL__SAMPLES_MSG__STRUCT_H_
