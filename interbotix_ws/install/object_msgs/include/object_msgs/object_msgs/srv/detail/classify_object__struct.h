// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:srv/ClassifyObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__CLASSIFY_OBJECT__STRUCT_H_
#define OBJECT_MSGS__SRV__DETAIL__CLASSIFY_OBJECT__STRUCT_H_

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

/// Struct defined in srv/ClassifyObject in the package object_msgs.
typedef struct object_msgs__srv__ClassifyObject_Request
{
  /// input: an image
  rosidl_runtime_c__String image_path;
} object_msgs__srv__ClassifyObject_Request;

// Struct for a sequence of object_msgs__srv__ClassifyObject_Request.
typedef struct object_msgs__srv__ClassifyObject_Request__Sequence
{
  object_msgs__srv__ClassifyObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__srv__ClassifyObject_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "object_msgs/msg/detail/objects__struct.h"

/// Struct defined in srv/ClassifyObject in the package object_msgs.
typedef struct object_msgs__srv__ClassifyObject_Response
{
  /// output: objects prediction
  object_msgs__msg__Objects objects;
} object_msgs__srv__ClassifyObject_Response;

// Struct for a sequence of object_msgs__srv__ClassifyObject_Response.
typedef struct object_msgs__srv__ClassifyObject_Response__Sequence
{
  object_msgs__srv__ClassifyObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__srv__ClassifyObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__SRV__DETAIL__CLASSIFY_OBJECT__STRUCT_H_
