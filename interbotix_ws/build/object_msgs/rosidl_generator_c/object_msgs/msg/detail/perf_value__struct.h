// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/PerfValue.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PerfValue in the package object_msgs.
typedef struct object_msgs__msg__PerfValue
{
  double average;
  double min;
  double max;
  double std_dev;
  int16_t window;
} object_msgs__msg__PerfValue;

// Struct for a sequence of object_msgs__msg__PerfValue.
typedef struct object_msgs__msg__PerfValue__Sequence
{
  object_msgs__msg__PerfValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__PerfValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__STRUCT_H_
