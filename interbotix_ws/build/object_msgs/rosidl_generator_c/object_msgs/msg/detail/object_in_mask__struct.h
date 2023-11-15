// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/ObjectInMask.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_MASK__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_MASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
// Member 'mask_array'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ObjectInMask in the package object_msgs.
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
typedef struct object_msgs__msg__ObjectInMask
{
  /// This message can represent a detected object and its region of interest
  /// object name
  rosidl_runtime_c__String object_name;
  /// probability of detected object
  float probability;
  /// region of interest
  sensor_msgs__msg__RegionOfInterest roi;
  /// Instance mask as Image
  rosidl_runtime_c__float__Sequence mask_array;
} object_msgs__msg__ObjectInMask;

// Struct for a sequence of object_msgs__msg__ObjectInMask.
typedef struct object_msgs__msg__ObjectInMask__Sequence
{
  object_msgs__msg__ObjectInMask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectInMask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_MASK__STRUCT_H_
