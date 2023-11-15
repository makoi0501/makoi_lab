// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_
#define OBJECT_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectObject in the package object_msgs.
typedef struct object_msgs__srv__DetectObject_Request
{
  /// input: an image
  rosidl_runtime_c__String image_path;
} object_msgs__srv__DetectObject_Request;

// Struct for a sequence of object_msgs__srv__DetectObject_Request.
typedef struct object_msgs__srv__DetectObject_Request__Sequence
{
  object_msgs__srv__DetectObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__srv__DetectObject_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "object_msgs/msg/detail/objects_in_boxes__struct.h"

/// Struct defined in srv/DetectObject in the package object_msgs.
typedef struct object_msgs__srv__DetectObject_Response
{
  /// output: objects prediction with bounding boxes
  object_msgs__msg__ObjectsInBoxes objects;
} object_msgs__srv__DetectObject_Response;

// Struct for a sequence of object_msgs__srv__DetectObject_Response.
typedef struct object_msgs__srv__DetectObject_Response__Sequence
{
  object_msgs__srv__DetectObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__srv__DetectObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_
