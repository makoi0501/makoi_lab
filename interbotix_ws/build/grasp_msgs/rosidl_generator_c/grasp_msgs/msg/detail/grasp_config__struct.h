// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__STRUCT_H_
#define GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bottom'
// Member 'top'
// Member 'surface'
// Member 'sample'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'approach'
// Member 'binormal'
// Member 'axis'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'width'
// Member 'score'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/GraspConfig in the package grasp_msgs.
/**
  * This message describes a 2-finger grasp configuration by its 6-DOF pose, 
  * consisting of a 3-DOF position and 3-DOF orientation, and the opening 
  * width of the robot hand.
 */
typedef struct grasp_msgs__msg__GraspConfig
{
  /// Position
  /// centered bottom/base of the robot hand)
  geometry_msgs__msg__Point bottom;
  /// centered top/fingertip of the robot hand)
  geometry_msgs__msg__Point top;
  /// centered position on object surface
  geometry_msgs__msg__Point surface;
  /// Orientation represented as three axis (R =)
  /// The grasp approach direction
  geometry_msgs__msg__Vector3 approach;
  /// The binormal
  geometry_msgs__msg__Vector3 binormal;
  /// The hand axis
  geometry_msgs__msg__Vector3 axis;
  /// Point at which the grasp was found
  geometry_msgs__msg__Point sample;
  /// Required aperture (opening width) of the robot hand
  std_msgs__msg__Float32 width;
  /// Score assigned to the grasp by the classifier
  std_msgs__msg__Float32 score;
} grasp_msgs__msg__GraspConfig;

// Struct for a sequence of grasp_msgs__msg__GraspConfig.
typedef struct grasp_msgs__msg__GraspConfig__Sequence
{
  grasp_msgs__msg__GraspConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasp_msgs__msg__GraspConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__DETAIL__GRASP_CONFIG__STRUCT_H_
