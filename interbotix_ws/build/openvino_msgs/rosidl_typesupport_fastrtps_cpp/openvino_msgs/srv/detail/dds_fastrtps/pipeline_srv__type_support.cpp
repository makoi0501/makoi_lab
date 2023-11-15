// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice
#include "openvino_msgs/srv/detail/pipeline_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "openvino_msgs/srv/detail/pipeline_srv__struct.hpp"

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
namespace openvino_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const openvino_msgs::msg::PipelineRequest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  openvino_msgs::msg::PipelineRequest &);
size_t get_serialized_size(
  const openvino_msgs::msg::PipelineRequest &,
  size_t current_alignment);
size_t
max_serialized_size_PipelineRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace openvino_msgs


namespace openvino_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
cdr_serialize(
  const openvino_msgs::srv::PipelineSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pipeline_request
  openvino_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pipeline_request,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openvino_msgs::srv::PipelineSrv_Request & ros_message)
{
  // Member: pipeline_request
  openvino_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pipeline_request);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
get_serialized_size(
  const openvino_msgs::srv::PipelineSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pipeline_request

  current_alignment +=
    openvino_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pipeline_request, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
max_serialized_size_PipelineSrv_Request(
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


  // Member: pipeline_request
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        openvino_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PipelineRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PipelineSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const openvino_msgs::srv::PipelineSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PipelineSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<openvino_msgs::srv::PipelineSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PipelineSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const openvino_msgs::srv::PipelineSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PipelineSrv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PipelineSrv_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PipelineSrv_Request__callbacks = {
  "openvino_msgs::srv",
  "PipelineSrv_Request",
  _PipelineSrv_Request__cdr_serialize,
  _PipelineSrv_Request__cdr_deserialize,
  _PipelineSrv_Request__get_serialized_size,
  _PipelineSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _PipelineSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PipelineSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace openvino_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<openvino_msgs::srv::PipelineSrv_Request>()
{
  return &openvino_msgs::srv::typesupport_fastrtps_cpp::_PipelineSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openvino_msgs, srv, PipelineSrv_Request)() {
  return &openvino_msgs::srv::typesupport_fastrtps_cpp::_PipelineSrv_Request__handle;
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
namespace openvino_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const openvino_msgs::msg::Pipeline &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  openvino_msgs::msg::Pipeline &);
size_t get_serialized_size(
  const openvino_msgs::msg::Pipeline &,
  size_t current_alignment);
size_t
max_serialized_size_Pipeline(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace openvino_msgs


namespace openvino_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
cdr_serialize(
  const openvino_msgs::srv::PipelineSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pipelines
  {
    size_t size = ros_message.pipelines.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      openvino_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pipelines[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openvino_msgs::srv::PipelineSrv_Response & ros_message)
{
  // Member: pipelines
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.pipelines.resize(size);
    for (size_t i = 0; i < size; i++) {
      openvino_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pipelines[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
get_serialized_size(
  const openvino_msgs::srv::PipelineSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pipelines
  {
    size_t array_size = ros_message.pipelines.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        openvino_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pipelines[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openvino_msgs
max_serialized_size_PipelineSrv_Response(
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


  // Member: pipelines
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
        openvino_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pipeline(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PipelineSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const openvino_msgs::srv::PipelineSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PipelineSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<openvino_msgs::srv::PipelineSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PipelineSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const openvino_msgs::srv::PipelineSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PipelineSrv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PipelineSrv_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PipelineSrv_Response__callbacks = {
  "openvino_msgs::srv",
  "PipelineSrv_Response",
  _PipelineSrv_Response__cdr_serialize,
  _PipelineSrv_Response__cdr_deserialize,
  _PipelineSrv_Response__get_serialized_size,
  _PipelineSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _PipelineSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PipelineSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace openvino_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<openvino_msgs::srv::PipelineSrv_Response>()
{
  return &openvino_msgs::srv::typesupport_fastrtps_cpp::_PipelineSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openvino_msgs, srv, PipelineSrv_Response)() {
  return &openvino_msgs::srv::typesupport_fastrtps_cpp::_PipelineSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace openvino_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PipelineSrv__callbacks = {
  "openvino_msgs::srv",
  "PipelineSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openvino_msgs, srv, PipelineSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openvino_msgs, srv, PipelineSrv_Response)(),
};

static rosidl_service_type_support_t _PipelineSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PipelineSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace openvino_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openvino_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<openvino_msgs::srv::PipelineSrv>()
{
  return &openvino_msgs::srv::typesupport_fastrtps_cpp::_PipelineSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openvino_msgs, srv, PipelineSrv)() {
  return &openvino_msgs::srv::typesupport_fastrtps_cpp::_PipelineSrv__handle;
}

#ifdef __cplusplus
}
#endif
