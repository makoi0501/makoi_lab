// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:srv/HeadPoseSrv.idl
// generated code does not contain a copyright notice
#include "object_msgs/srv/detail/head_pose_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "object_msgs/srv/detail/head_pose_srv__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace object_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_serialize(
  const object_msgs::srv::HeadPoseSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image_path
  cdr << ros_message.image_path;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  object_msgs::srv::HeadPoseSrv_Request & ros_message)
{
  // Member: image_path
  cdr >> ros_message.image_path;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
get_serialized_size(
  const object_msgs::srv::HeadPoseSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: image_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.image_path.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
max_serialized_size_HeadPoseSrv_Request(
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


  // Member: image_path
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

static bool _HeadPoseSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const object_msgs::srv::HeadPoseSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HeadPoseSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<object_msgs::srv::HeadPoseSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HeadPoseSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const object_msgs::srv::HeadPoseSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HeadPoseSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HeadPoseSrv_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HeadPoseSrv_Request__callbacks = {
  "object_msgs::srv",
  "HeadPoseSrv_Request",
  _HeadPoseSrv_Request__cdr_serialize,
  _HeadPoseSrv_Request__cdr_deserialize,
  _HeadPoseSrv_Request__get_serialized_size,
  _HeadPoseSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _HeadPoseSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadPoseSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace object_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_object_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<object_msgs::srv::HeadPoseSrv_Request>()
{
  return &object_msgs::srv::typesupport_fastrtps_cpp::_HeadPoseSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, srv, HeadPoseSrv_Request)() {
  return &object_msgs::srv::typesupport_fastrtps_cpp::_HeadPoseSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace object_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const object_msgs::msg::HeadPoseStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  object_msgs::msg::HeadPoseStamped &);
size_t get_serialized_size(
  const object_msgs::msg::HeadPoseStamped &,
  size_t current_alignment);
size_t
max_serialized_size_HeadPoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace object_msgs


namespace object_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_serialize(
  const object_msgs::srv::HeadPoseSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: headpose
  object_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.headpose,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  object_msgs::srv::HeadPoseSrv_Response & ros_message)
{
  // Member: headpose
  object_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.headpose);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
get_serialized_size(
  const object_msgs::srv::HeadPoseSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: headpose

  current_alignment +=
    object_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.headpose, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_msgs
max_serialized_size_HeadPoseSrv_Response(
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


  // Member: headpose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        object_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HeadPoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _HeadPoseSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const object_msgs::srv::HeadPoseSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HeadPoseSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<object_msgs::srv::HeadPoseSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HeadPoseSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const object_msgs::srv::HeadPoseSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HeadPoseSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HeadPoseSrv_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HeadPoseSrv_Response__callbacks = {
  "object_msgs::srv",
  "HeadPoseSrv_Response",
  _HeadPoseSrv_Response__cdr_serialize,
  _HeadPoseSrv_Response__cdr_deserialize,
  _HeadPoseSrv_Response__get_serialized_size,
  _HeadPoseSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _HeadPoseSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadPoseSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace object_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_object_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<object_msgs::srv::HeadPoseSrv_Response>()
{
  return &object_msgs::srv::typesupport_fastrtps_cpp::_HeadPoseSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, srv, HeadPoseSrv_Response)() {
  return &object_msgs::srv::typesupport_fastrtps_cpp::_HeadPoseSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace object_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _HeadPoseSrv__callbacks = {
  "object_msgs::srv",
  "HeadPoseSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, srv, HeadPoseSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, srv, HeadPoseSrv_Response)(),
};

static rosidl_service_type_support_t _HeadPoseSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HeadPoseSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace object_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_object_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<object_msgs::srv::HeadPoseSrv>()
{
  return &object_msgs::srv::typesupport_fastrtps_cpp::_HeadPoseSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_msgs, srv, HeadPoseSrv)() {
  return &object_msgs::srv::typesupport_fastrtps_cpp::_HeadPoseSrv__handle;
}

#ifdef __cplusplus
}
#endif
