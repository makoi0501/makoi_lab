// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from original_interface:srv/TargetPos.idl
// generated code does not contain a copyright notice

#ifndef ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__STRUCT_H_
#define ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TargetPos in the package original_interface.
typedef struct original_interface__srv__TargetPos_Request
{
  int32_t target_num;
} original_interface__srv__TargetPos_Request;

// Struct for a sequence of original_interface__srv__TargetPos_Request.
typedef struct original_interface__srv__TargetPos_Request__Sequence
{
  original_interface__srv__TargetPos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} original_interface__srv__TargetPos_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TargetPos in the package original_interface.
typedef struct original_interface__srv__TargetPos_Response
{
  double targetx;
  double targety;
  double targetz;
  bool success;
} original_interface__srv__TargetPos_Response;

// Struct for a sequence of original_interface__srv__TargetPos_Response.
typedef struct original_interface__srv__TargetPos_Response__Sequence
{
  original_interface__srv__TargetPos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} original_interface__srv__TargetPos_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__STRUCT_H_
