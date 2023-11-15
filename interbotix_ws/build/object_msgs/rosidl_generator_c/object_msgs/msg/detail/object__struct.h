// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

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

/// Struct defined in msg/Object in the package object_msgs.
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
typedef struct object_msgs__msg__Object
{
  /// This message define the property of detected object
  /// object name
  rosidl_runtime_c__String object_name;
  /// probability of detected object
  float probability;
} object_msgs__msg__Object;

// Struct for a sequence of object_msgs__msg__Object.
typedef struct object_msgs__msg__Object__Sequence
{
  object_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
