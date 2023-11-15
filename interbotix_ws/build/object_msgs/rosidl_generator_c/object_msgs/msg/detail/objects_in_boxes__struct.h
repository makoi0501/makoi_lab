// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/ObjectsInBoxes.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__STRUCT_H_

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
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'objects_vector'
#include "object_msgs/msg/detail/object_in_box__struct.h"

/// Struct defined in msg/ObjectsInBoxes in the package object_msgs.
/**
  * Copyright (c) 2017 Intel Corporation
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *      http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct object_msgs__msg__ObjectsInBoxes
{
  /// This message can represent objects detected and their bounding-boxes in a frame
  /// timestamp in header is the time the sensor captured the raw data
  std_msgs__msg__Header header;
  /// TODO: to be removed
  sensor_msgs__msg__Image image;
  /// ObjectInBox array
  object_msgs__msg__ObjectInBox__Sequence objects_vector;
  /// inference time(millisecond)
  float inference_time_ms;
} object_msgs__msg__ObjectsInBoxes;

// Struct for a sequence of object_msgs__msg__ObjectsInBoxes.
typedef struct object_msgs__msg__ObjectsInBoxes__Sequence
{
  object_msgs__msg__ObjectsInBoxes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectsInBoxes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__STRUCT_H_
