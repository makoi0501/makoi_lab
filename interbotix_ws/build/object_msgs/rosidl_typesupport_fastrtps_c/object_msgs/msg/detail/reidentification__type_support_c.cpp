// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from object_msgs:msg/Reidentification.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/reidentification__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_msgs/msg/detail/reidentification__struct.h"
#include "object_msgs/msg/detail/reidentification__functions.h"
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

#include "rosidl_runtime_c/string.h"  // identity
#include "rosidl_runtime_c/string_functions.h"  // identity
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // roi

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_object_msgs
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_object_msgs
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_object_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)();


using _Reidentification__ros_msg_type = object_msgs__msg__Reidentification;

static bool _Reidentification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Reidentification__ros_msg_type * ros_message = static_cast<const _Reidentification__ros_msg_type *>(untyped_ros_message);
  // Field name: identity
  {
    const rosidl_runtime_c__String * str = &ros_message->identity;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: roi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->roi, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Reidentification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Reidentification__ros_msg_type * ros_message = static_cast<_Reidentification__ros_msg_type *>(untyped_ros_message);
  // Field name: identity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->identity.data) {
      rosidl_runtime_c__String__init(&ros_message->identity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->identity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'identity'\n");
      return false;
    }
  }

  // Field name: roi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->roi))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t get_serialized_size_object_msgs__msg__Reidentification(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Reidentification__ros_msg_type * ros_message = static_cast<const _Reidentification__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name identity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->identity.size + 1);
  // field.name roi

  current_alignment += get_serialized_size_sensor_msgs__msg__RegionOfInterest(
    &(ros_message->roi), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Reidentification__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_msgs__msg__Reidentification(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t max_serialized_size_object_msgs__msg__Reidentification(
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

  // member: identity
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: roi
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__RegionOfInterest(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Reidentification__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_object_msgs__msg__Reidentification(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Reidentification = {
  "object_msgs::msg",
  "Reidentification",
  _Reidentification__cdr_serialize,
  _Reidentification__cdr_deserialize,
  _Reidentification__get_serialized_size,
  _Reidentification__max_serialized_size
};

static rosidl_message_type_support_t _Reidentification__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Reidentification,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, msg, Reidentification)() {
  return &_Reidentification__type_support;
}

#if defined(__cplusplus)
}
#endif
