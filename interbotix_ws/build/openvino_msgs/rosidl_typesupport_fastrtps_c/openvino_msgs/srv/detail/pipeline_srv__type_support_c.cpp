// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice
#include "openvino_msgs/srv/detail/pipeline_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "openvino_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "openvino_msgs/srv/detail/pipeline_srv__struct.h"
#include "openvino_msgs/srv/detail/pipeline_srv__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "openvino_msgs/msg/detail/pipeline_request__functions.h"  // pipeline_request

// forward declare type support functions
size_t get_serialized_size_openvino_msgs__msg__PipelineRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_openvino_msgs__msg__PipelineRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, msg, PipelineRequest)();


using _PipelineSrv_Request__ros_msg_type = openvino_msgs__srv__PipelineSrv_Request;

static bool _PipelineSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PipelineSrv_Request__ros_msg_type * ros_message = static_cast<const _PipelineSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pipeline_request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, openvino_msgs, msg, PipelineRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pipeline_request, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PipelineSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PipelineSrv_Request__ros_msg_type * ros_message = static_cast<_PipelineSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pipeline_request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, openvino_msgs, msg, PipelineRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pipeline_request))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openvino_msgs
size_t get_serialized_size_openvino_msgs__srv__PipelineSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PipelineSrv_Request__ros_msg_type * ros_message = static_cast<const _PipelineSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pipeline_request

  current_alignment += get_serialized_size_openvino_msgs__msg__PipelineRequest(
    &(ros_message->pipeline_request), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PipelineSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_openvino_msgs__srv__PipelineSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openvino_msgs
size_t max_serialized_size_openvino_msgs__srv__PipelineSrv_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pipeline_request
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_openvino_msgs__msg__PipelineRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PipelineSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_openvino_msgs__srv__PipelineSrv_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PipelineSrv_Request = {
  "openvino_msgs::srv",
  "PipelineSrv_Request",
  _PipelineSrv_Request__cdr_serialize,
  _PipelineSrv_Request__cdr_deserialize,
  _PipelineSrv_Request__get_serialized_size,
  _PipelineSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _PipelineSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PipelineSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, srv, PipelineSrv_Request)() {
  return &_PipelineSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "openvino_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__struct.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "openvino_msgs/msg/detail/pipeline__functions.h"  // pipelines

// forward declare type support functions
size_t get_serialized_size_openvino_msgs__msg__Pipeline(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_openvino_msgs__msg__Pipeline(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, msg, Pipeline)();


using _PipelineSrv_Response__ros_msg_type = openvino_msgs__srv__PipelineSrv_Response;

static bool _PipelineSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PipelineSrv_Response__ros_msg_type * ros_message = static_cast<const _PipelineSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: pipelines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, openvino_msgs, msg, Pipeline
      )()->data);
    size_t size = ros_message->pipelines.size;
    auto array_ptr = ros_message->pipelines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _PipelineSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PipelineSrv_Response__ros_msg_type * ros_message = static_cast<_PipelineSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: pipelines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, openvino_msgs, msg, Pipeline
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pipelines.data) {
      openvino_msgs__msg__Pipeline__Sequence__fini(&ros_message->pipelines);
    }
    if (!openvino_msgs__msg__Pipeline__Sequence__init(&ros_message->pipelines, size)) {
      fprintf(stderr, "failed to create array for field 'pipelines'");
      return false;
    }
    auto array_ptr = ros_message->pipelines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openvino_msgs
size_t get_serialized_size_openvino_msgs__srv__PipelineSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PipelineSrv_Response__ros_msg_type * ros_message = static_cast<const _PipelineSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pipelines
  {
    size_t array_size = ros_message->pipelines.size;
    auto array_ptr = ros_message->pipelines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_openvino_msgs__msg__Pipeline(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PipelineSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_openvino_msgs__srv__PipelineSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_openvino_msgs
size_t max_serialized_size_openvino_msgs__srv__PipelineSrv_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pipelines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_openvino_msgs__msg__Pipeline(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PipelineSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_openvino_msgs__srv__PipelineSrv_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PipelineSrv_Response = {
  "openvino_msgs::srv",
  "PipelineSrv_Response",
  _PipelineSrv_Response__cdr_serialize,
  _PipelineSrv_Response__cdr_deserialize,
  _PipelineSrv_Response__get_serialized_size,
  _PipelineSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _PipelineSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PipelineSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, srv, PipelineSrv_Response)() {
  return &_PipelineSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "openvino_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "openvino_msgs/srv/pipeline_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PipelineSrv__callbacks = {
  "openvino_msgs::srv",
  "PipelineSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, srv, PipelineSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, srv, PipelineSrv_Response)(),
};

static rosidl_service_type_support_t PipelineSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PipelineSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, openvino_msgs, srv, PipelineSrv)() {
  return &PipelineSrv__handle;
}

#if defined(__cplusplus)
}
#endif
