// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__TRAITS_HPP_
#define OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "openvino_msgs/srv/detail/pipeline_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pipeline_request'
#include "openvino_msgs/msg/detail/pipeline_request__traits.hpp"

namespace openvino_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PipelineSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pipeline_request
  {
    out << "pipeline_request: ";
    to_flow_style_yaml(msg.pipeline_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PipelineSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pipeline_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pipeline_request:\n";
    to_block_style_yaml(msg.pipeline_request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PipelineSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace openvino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use openvino_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openvino_msgs::srv::PipelineSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  openvino_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openvino_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const openvino_msgs::srv::PipelineSrv_Request & msg)
{
  return openvino_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<openvino_msgs::srv::PipelineSrv_Request>()
{
  return "openvino_msgs::srv::PipelineSrv_Request";
}

template<>
inline const char * name<openvino_msgs::srv::PipelineSrv_Request>()
{
  return "openvino_msgs/srv/PipelineSrv_Request";
}

template<>
struct has_fixed_size<openvino_msgs::srv::PipelineSrv_Request>
  : std::integral_constant<bool, has_fixed_size<openvino_msgs::msg::PipelineRequest>::value> {};

template<>
struct has_bounded_size<openvino_msgs::srv::PipelineSrv_Request>
  : std::integral_constant<bool, has_bounded_size<openvino_msgs::msg::PipelineRequest>::value> {};

template<>
struct is_message<openvino_msgs::srv::PipelineSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pipelines'
#include "openvino_msgs/msg/detail/pipeline__traits.hpp"

namespace openvino_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PipelineSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pipelines
  {
    if (msg.pipelines.size() == 0) {
      out << "pipelines: []";
    } else {
      out << "pipelines: [";
      size_t pending_items = msg.pipelines.size();
      for (auto item : msg.pipelines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PipelineSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pipelines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pipelines.size() == 0) {
      out << "pipelines: []\n";
    } else {
      out << "pipelines:\n";
      for (auto item : msg.pipelines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PipelineSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace openvino_msgs

namespace rosidl_generator_traits
{

[[deprecated("use openvino_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openvino_msgs::srv::PipelineSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  openvino_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openvino_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const openvino_msgs::srv::PipelineSrv_Response & msg)
{
  return openvino_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<openvino_msgs::srv::PipelineSrv_Response>()
{
  return "openvino_msgs::srv::PipelineSrv_Response";
}

template<>
inline const char * name<openvino_msgs::srv::PipelineSrv_Response>()
{
  return "openvino_msgs/srv/PipelineSrv_Response";
}

template<>
struct has_fixed_size<openvino_msgs::srv::PipelineSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openvino_msgs::srv::PipelineSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openvino_msgs::srv::PipelineSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<openvino_msgs::srv::PipelineSrv>()
{
  return "openvino_msgs::srv::PipelineSrv";
}

template<>
inline const char * name<openvino_msgs::srv::PipelineSrv>()
{
  return "openvino_msgs/srv/PipelineSrv";
}

template<>
struct has_fixed_size<openvino_msgs::srv::PipelineSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<openvino_msgs::srv::PipelineSrv_Request>::value &&
    has_fixed_size<openvino_msgs::srv::PipelineSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<openvino_msgs::srv::PipelineSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<openvino_msgs::srv::PipelineSrv_Request>::value &&
    has_bounded_size<openvino_msgs::srv::PipelineSrv_Response>::value
  >
{
};

template<>
struct is_service<openvino_msgs::srv::PipelineSrv>
  : std::true_type
{
};

template<>
struct is_service_request<openvino_msgs::srv::PipelineSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<openvino_msgs::srv::PipelineSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPENVINO_MSGS__SRV__DETAIL__PIPELINE_SRV__TRAITS_HPP_
