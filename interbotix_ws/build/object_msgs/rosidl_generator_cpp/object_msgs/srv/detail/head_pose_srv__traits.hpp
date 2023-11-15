// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:srv/HeadPoseSrv.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__HEAD_POSE_SRV__TRAITS_HPP_
#define OBJECT_MSGS__SRV__DETAIL__HEAD_POSE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/srv/detail/head_pose_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace object_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HeadPoseSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_path
  {
    out << "image_path: ";
    rosidl_generator_traits::value_to_yaml(msg.image_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadPoseSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_path: ";
    rosidl_generator_traits::value_to_yaml(msg.image_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadPoseSrv_Request & msg, bool use_flow_style = false)
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

}  // namespace object_msgs

namespace rosidl_generator_traits
{

[[deprecated("use object_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_msgs::srv::HeadPoseSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::srv::HeadPoseSrv_Request & msg)
{
  return object_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::srv::HeadPoseSrv_Request>()
{
  return "object_msgs::srv::HeadPoseSrv_Request";
}

template<>
inline const char * name<object_msgs::srv::HeadPoseSrv_Request>()
{
  return "object_msgs/srv/HeadPoseSrv_Request";
}

template<>
struct has_fixed_size<object_msgs::srv::HeadPoseSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::srv::HeadPoseSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::srv::HeadPoseSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'headpose'
#include "object_msgs/msg/detail/head_pose_stamped__traits.hpp"

namespace object_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HeadPoseSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: headpose
  {
    out << "headpose: ";
    to_flow_style_yaml(msg.headpose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeadPoseSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: headpose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headpose:\n";
    to_block_style_yaml(msg.headpose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeadPoseSrv_Response & msg, bool use_flow_style = false)
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

}  // namespace object_msgs

namespace rosidl_generator_traits
{

[[deprecated("use object_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_msgs::srv::HeadPoseSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::srv::HeadPoseSrv_Response & msg)
{
  return object_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::srv::HeadPoseSrv_Response>()
{
  return "object_msgs::srv::HeadPoseSrv_Response";
}

template<>
inline const char * name<object_msgs::srv::HeadPoseSrv_Response>()
{
  return "object_msgs/srv/HeadPoseSrv_Response";
}

template<>
struct has_fixed_size<object_msgs::srv::HeadPoseSrv_Response>
  : std::integral_constant<bool, has_fixed_size<object_msgs::msg::HeadPoseStamped>::value> {};

template<>
struct has_bounded_size<object_msgs::srv::HeadPoseSrv_Response>
  : std::integral_constant<bool, has_bounded_size<object_msgs::msg::HeadPoseStamped>::value> {};

template<>
struct is_message<object_msgs::srv::HeadPoseSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_msgs::srv::HeadPoseSrv>()
{
  return "object_msgs::srv::HeadPoseSrv";
}

template<>
inline const char * name<object_msgs::srv::HeadPoseSrv>()
{
  return "object_msgs/srv/HeadPoseSrv";
}

template<>
struct has_fixed_size<object_msgs::srv::HeadPoseSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<object_msgs::srv::HeadPoseSrv_Request>::value &&
    has_fixed_size<object_msgs::srv::HeadPoseSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_msgs::srv::HeadPoseSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<object_msgs::srv::HeadPoseSrv_Request>::value &&
    has_bounded_size<object_msgs::srv::HeadPoseSrv_Response>::value
  >
{
};

template<>
struct is_service<object_msgs::srv::HeadPoseSrv>
  : std::true_type
{
};

template<>
struct is_service_request<object_msgs::srv::HeadPoseSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<object_msgs::srv::HeadPoseSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__SRV__DETAIL__HEAD_POSE_SRV__TRAITS_HPP_
