// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__STRUCT_H_
#define OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pipeline_request'
#include "openvino_msgs/msg/detail/pipeline_request__struct.h"

/// Struct defined in srv/PipelineSrv in the package openvino_msgs.
typedef struct openvino_msgs__srv__PipelineSrv_Request
{
  /// request content of pipeline service
  openvino_msgs__msg__PipelineRequest pipeline_request;
} openvino_msgs__srv__PipelineSrv_Request;

// Struct for a sequence of openvino_msgs__srv__PipelineSrv_Request.
typedef struct openvino_msgs__srv__PipelineSrv_Request__Sequence
{
  openvino_msgs__srv__PipelineSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openvino_msgs__srv__PipelineSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pipelines'
#include "openvino_msgs/msg/detail/pipeline__struct.h"

/// Struct defined in srv/PipelineSrv in the package openvino_msgs.
typedef struct openvino_msgs__srv__PipelineSrv_Response
{
  /// return all pipeline status
  openvino_msgs__msg__Pipeline__Sequence pipelines;
} openvino_msgs__srv__PipelineSrv_Response;

// Struct for a sequence of openvino_msgs__srv__PipelineSrv_Response.
typedef struct openvino_msgs__srv__PipelineSrv_Response__Sequence
{
  openvino_msgs__srv__PipelineSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openvino_msgs__srv__PipelineSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__STRUCT_H_
