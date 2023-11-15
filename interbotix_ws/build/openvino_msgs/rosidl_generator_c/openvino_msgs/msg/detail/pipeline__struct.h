// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openvino_msgs:msg/Pipeline.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE__STRUCT_H_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE__STRUCT_H_

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
// Member 'name'
// Member 'running_status'
#include "rosidl_runtime_c/string.h"
// Member 'connections'
#include "openvino_msgs/msg/detail/connection__struct.h"

/// Struct defined in msg/Pipeline in the package openvino_msgs.
/**
  * Copyright (c) 2018-2022 Intel Corporation
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
typedef struct openvino_msgs__msg__Pipeline
{
  /// Header
  std_msgs__msg__Header header;
  /// Name of pipeline
  rosidl_runtime_c__String name;
  /// connection map of a pipeline
  openvino_msgs__msg__Connection__Sequence connections;
  /// Pipeline running state
  rosidl_runtime_c__String running_status;
} openvino_msgs__msg__Pipeline;

// Struct for a sequence of openvino_msgs__msg__Pipeline.
typedef struct openvino_msgs__msg__Pipeline__Sequence
{
  openvino_msgs__msg__Pipeline * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openvino_msgs__msg__Pipeline__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE__STRUCT_H_
