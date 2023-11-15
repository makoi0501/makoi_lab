// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from object_msgs:srv/People.idl
// generated code does not contain a copyright notice
#include "object_msgs/srv/detail/people__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_msgs/srv/detail/people__struct.h"
#include "object_msgs/srv/detail/people__functions.h"
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

#include "rosidl_runtime_c/string.h"  // image_path
#include "rosidl_runtime_c/string_functions.h"  // image_path

// forward declare type support functions


using _People_Request__ros_msg_type = object_msgs__srv__People_Request;

static bool _People_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _People_Request__ros_msg_type * ros_message = static_cast<const _People_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image_path
  {
    const rosidl_runtime_c__String * str = &ros_message->image_path;
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

  return true;
}

static bool _People_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _People_Request__ros_msg_type * ros_message = static_cast<_People_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->image_path.data) {
      rosidl_runtime_c__String__init(&ros_message->image_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->image_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'image_path'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t get_serialized_size_object_msgs__srv__People_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _People_Request__ros_msg_type * ros_message = static_cast<const _People_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name image_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->image_path.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _People_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_msgs__srv__People_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t max_serialized_size_object_msgs__srv__People_Request(
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

  // member: image_path
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

  return current_alignment - initial_alignment;
}

static size_t _People_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_object_msgs__srv__People_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_People_Request = {
  "object_msgs::srv",
  "People_Request",
  _People_Request__cdr_serialize,
  _People_Request__cdr_deserialize,
  _People_Request__get_serialized_size,
  _People_Request__max_serialized_size
};

static rosidl_message_type_support_t _People_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_People_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, srv, People_Request)() {
  return &_People_Request__type_support;
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
// #include "object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "object_msgs/srv/detail/people__struct.h"
// already included above
// #include "object_msgs/srv/detail/people__functions.h"
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

#include "object_msgs/msg/detail/persons_stamped__functions.h"  // persons

// forward declare type support functions
size_t get_serialized_size_object_msgs__msg__PersonsStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_object_msgs__msg__PersonsStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, msg, PersonsStamped)();


using _People_Response__ros_msg_type = object_msgs__srv__People_Response;

static bool _People_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _People_Response__ros_msg_type * ros_message = static_cast<const _People_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: persons
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, object_msgs, msg, PersonsStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->persons, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _People_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _People_Response__ros_msg_type * ros_message = static_cast<_People_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: persons
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, object_msgs, msg, PersonsStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->persons))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t get_serialized_size_object_msgs__srv__People_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _People_Response__ros_msg_type * ros_message = static_cast<const _People_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name persons

  current_alignment += get_serialized_size_object_msgs__msg__PersonsStamped(
    &(ros_message->persons), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _People_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_msgs__srv__People_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_msgs
size_t max_serialized_size_object_msgs__srv__People_Response(
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

  // member: persons
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_object_msgs__msg__PersonsStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _People_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_object_msgs__srv__People_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_People_Response = {
  "object_msgs::srv",
  "People_Response",
  _People_Response__cdr_serialize,
  _People_Response__cdr_deserialize,
  _People_Response__get_serialized_size,
  _People_Response__max_serialized_size
};

static rosidl_message_type_support_t _People_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_People_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, srv, People_Response)() {
  return &_People_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "object_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_msgs/srv/people.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t People__callbacks = {
  "object_msgs::srv",
  "People",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, srv, People_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, srv, People_Response)(),
};

static rosidl_service_type_support_t People__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &People__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_msgs, srv, People)() {
  return &People__handle;
}

#if defined(__cplusplus)
}
#endif
