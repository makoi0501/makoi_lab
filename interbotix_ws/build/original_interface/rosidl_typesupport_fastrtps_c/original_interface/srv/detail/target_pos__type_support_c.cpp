// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from original_interface:srv/TargetPos.idl
// generated code does not contain a copyright notice
#include "original_interface/srv/detail/target_pos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "original_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "original_interface/srv/detail/target_pos__struct.h"
#include "original_interface/srv/detail/target_pos__functions.h"
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


// forward declare type support functions


using _TargetPos_Request__ros_msg_type = original_interface__srv__TargetPos_Request;

static bool _TargetPos_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TargetPos_Request__ros_msg_type * ros_message = static_cast<const _TargetPos_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_num
  {
    cdr << ros_message->target_num;
  }

  return true;
}

static bool _TargetPos_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TargetPos_Request__ros_msg_type * ros_message = static_cast<_TargetPos_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_num
  {
    cdr >> ros_message->target_num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_original_interface
size_t get_serialized_size_original_interface__srv__TargetPos_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetPos_Request__ros_msg_type * ros_message = static_cast<const _TargetPos_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target_num
  {
    size_t item_size = sizeof(ros_message->target_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TargetPos_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_original_interface__srv__TargetPos_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_original_interface
size_t max_serialized_size_original_interface__srv__TargetPos_Request(
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

  // member: target_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TargetPos_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_original_interface__srv__TargetPos_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TargetPos_Request = {
  "original_interface::srv",
  "TargetPos_Request",
  _TargetPos_Request__cdr_serialize,
  _TargetPos_Request__cdr_deserialize,
  _TargetPos_Request__get_serialized_size,
  _TargetPos_Request__max_serialized_size
};

static rosidl_message_type_support_t _TargetPos_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetPos_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, original_interface, srv, TargetPos_Request)() {
  return &_TargetPos_Request__type_support;
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
// #include "original_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "original_interface/srv/detail/target_pos__struct.h"
// already included above
// #include "original_interface/srv/detail/target_pos__functions.h"
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


// forward declare type support functions


using _TargetPos_Response__ros_msg_type = original_interface__srv__TargetPos_Response;

static bool _TargetPos_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TargetPos_Response__ros_msg_type * ros_message = static_cast<const _TargetPos_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: targetx
  {
    cdr << ros_message->targetx;
  }

  // Field name: targety
  {
    cdr << ros_message->targety;
  }

  // Field name: targetz
  {
    cdr << ros_message->targetz;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _TargetPos_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TargetPos_Response__ros_msg_type * ros_message = static_cast<_TargetPos_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: targetx
  {
    cdr >> ros_message->targetx;
  }

  // Field name: targety
  {
    cdr >> ros_message->targety;
  }

  // Field name: targetz
  {
    cdr >> ros_message->targetz;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_original_interface
size_t get_serialized_size_original_interface__srv__TargetPos_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetPos_Response__ros_msg_type * ros_message = static_cast<const _TargetPos_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name targetx
  {
    size_t item_size = sizeof(ros_message->targetx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name targety
  {
    size_t item_size = sizeof(ros_message->targety);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name targetz
  {
    size_t item_size = sizeof(ros_message->targetz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TargetPos_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_original_interface__srv__TargetPos_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_original_interface
size_t max_serialized_size_original_interface__srv__TargetPos_Response(
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

  // member: targetx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: targety
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: targetz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TargetPos_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_original_interface__srv__TargetPos_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TargetPos_Response = {
  "original_interface::srv",
  "TargetPos_Response",
  _TargetPos_Response__cdr_serialize,
  _TargetPos_Response__cdr_deserialize,
  _TargetPos_Response__get_serialized_size,
  _TargetPos_Response__max_serialized_size
};

static rosidl_message_type_support_t _TargetPos_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetPos_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, original_interface, srv, TargetPos_Response)() {
  return &_TargetPos_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "original_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "original_interface/srv/target_pos.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TargetPos__callbacks = {
  "original_interface::srv",
  "TargetPos",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, original_interface, srv, TargetPos_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, original_interface, srv, TargetPos_Response)(),
};

static rosidl_service_type_support_t TargetPos__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TargetPos__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, original_interface, srv, TargetPos)() {
  return &TargetPos__handle;
}

#if defined(__cplusplus)
}
#endif
