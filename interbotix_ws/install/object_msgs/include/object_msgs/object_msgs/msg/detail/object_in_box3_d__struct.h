// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg/ObjectInBox3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX3_D__STRUCT_H_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object'
#include "object_msgs/msg/detail/object__struct.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
// Member 'min'
// Member 'max'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/ObjectInBox3D in the package object_msgs.
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
typedef struct object_msgs__msg__ObjectInBox3D
{
  /// This message can represent a 3D detection object with 2D region of interest and 3D information (min & max)
  /// detected object
  object_msgs__msg__Object object;
  /// region of interest
  sensor_msgs__msg__RegionOfInterest roi;
  /// min and max locate the diagonal of a bounding-box of the detected object whose
  geometry_msgs__msg__Point32 min;
  /// x, y and z axis parellel to the axises correspondingly in camera coordinates
  geometry_msgs__msg__Point32 max;
} object_msgs__msg__ObjectInBox3D;

// Struct for a sequence of object_msgs__msg__ObjectInBox3D.
typedef struct object_msgs__msg__ObjectInBox3D__Sequence
{
  object_msgs__msg__ObjectInBox3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectInBox3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX3_D__STRUCT_H_
