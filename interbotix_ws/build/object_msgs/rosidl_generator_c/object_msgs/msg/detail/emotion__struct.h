// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__EMOTION__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__EMOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'emotion'
#include "rosidl_runtime_c/string.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/Emotion in the package object_msgs.
/**
  * Copyright (c) 2018 Intel Corporation
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
typedef struct object_msgs__msg__Emotion
{
  /// The emotion for the detected face in roi
  rosidl_runtime_c__String emotion;
  /// region of interest for a person's face
  sensor_msgs__msg__RegionOfInterest roi;
} object_msgs__msg__Emotion;

// Struct for a sequence of object_msgs__msg__Emotion.
typedef struct object_msgs__msg__Emotion__Sequence
{
  object_msgs__msg__Emotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__Emotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__EMOTION__STRUCT_H_
