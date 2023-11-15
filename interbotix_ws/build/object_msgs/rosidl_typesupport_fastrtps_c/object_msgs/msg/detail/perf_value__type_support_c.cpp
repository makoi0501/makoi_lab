// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from object_msgs:msg/PerfValue.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/perf_value__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_msgs/msg/detail/perf_value__struct.h"
#include "object_msgs/msg/detail/perf_value__functions.h"
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


using _PerfValue__ros_msg_type = object_msgs__msg__PerfValue;

static bool _PerfValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PerfValue__ros_msg_type * ros_message = static_cast<const _PerfValue__ros_msg_type *>(untyped_ros_message);
  // Field name: average
  {
    cdr << ros_message->average;
  }

  // Field name: min
  {
    cdr << ros_message->min;
  }

  // Field name: max
  {
    cdr << ros_message->max;
  }

  // Field name: std_dev
  {
    cdr << ros_message->std_dev;
  }

  // Field name: window
  {
    cdr << ros_message->window;
  }

  return true;
}

static bool _PerfValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PerfValue__ros_msg_type * ros_message = static_cast<_PerfValue__ros_msg_type *>(untyped_ros_message);
  // Field name: average
  {
    cdr >> ros_message->average;
  }

  // Field name: min
  {
    cdr >> ros_message->min;
  }

  // Field name: max
  {
    cdr >> ros_message->max;
  }

  // Field name: std_dev
  {
    cdr >> ros_message->std_dev;
  }

  // Field name: window
  {
    cdr >> ros_message->window;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t get_serialized_size_object_msgs__msg__PerfValue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerfValue__ros_msg_type * ros_message = static_cast<const _PerfValue__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name average
  {
    size_t item_size = sizeof(ros_message->average);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min
  {
    size_t item_size = sizeof(ros_message->min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max
  {
    size_t item_size = sizeof(ros_message->max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev
  {
    size_t item_size = sizeof(ros_message->std_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name window
  {
    size_t item_size = sizeof(ros_message->window);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PerfValue__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_msgs__msg__PerfValue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t max_serialized_size_object_msgs__msg__PerfValue(
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

  // member: average
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: std_dev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: window
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PerfValue__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_object_msgs__msg__PerfValue(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PerfValue = {
  "object_msgs::msg",
  "PerfValue",
  _PerfValue__cdr_serialize,
  _PerfValue__cdr_deserialize,
  _PerfValue__get_serialized_size,
  _PerfValue__max_serialized_size
};

static rosidl_message_type_support_t _PerfValue__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PerfValue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, msg, PerfValue)() {
  return &_PerfValue__type_support;
}

#if defined(__cplusplus)
}
#endif
