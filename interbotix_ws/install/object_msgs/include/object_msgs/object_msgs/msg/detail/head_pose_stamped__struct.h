// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/HeadPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__STRUCT_H_

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
// Member 'headposes'
#include "object_msgs/msg/detail/head_pose__struct.h"

/// Struct defined in msg/HeadPoseStamped in the package object_msgs.
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
typedef struct object_msgs__msg__HeadPoseStamped
{
  std_msgs__msg__Header header;
  object_msgs__msg__HeadPose__Sequence headposes;
} object_msgs__msg__HeadPoseStamped;

// Struct for a sequence of object_msgs__msg__HeadPoseStamped.
typedef struct object_msgs__msg__HeadPoseStamped__Sequence
{
  object_msgs__msg__HeadPoseStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__HeadPoseStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__HEAD_POSE_STAMPED__STRUCT_H_
