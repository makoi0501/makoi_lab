// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:srv/EmotionSrv.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__EMOTION_SRV__TRAITS_HPP_
#define OBJECT_MSGS__SRV__DETAIL__EMOTION_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/srv/detail/emotion_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace object_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmotionSrv_Request & msg,
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
  const EmotionSrv_Request & msg,
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

inline std::string to_yaml(const EmotionSrv_Request & msg, bool use_flow_style = false)
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
  const object_msgs::srv::EmotionSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::srv::EmotionSrv_Request & msg)
{
  return object_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::srv::EmotionSrv_Request>()
{
  return "object_msgs::srv::EmotionSrv_Request";
}

template<>
inline const char * name<object_msgs::srv::EmotionSrv_Request>()
{
  return "object_msgs/srv/EmotionSrv_Request";
}

template<>
struct has_fixed_size<object_msgs::srv::EmotionSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::srv::EmotionSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::srv::EmotionSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'emotion'
#include "object_msgs/msg/detail/emotions_stamped__traits.hpp"

namespace object_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmotionSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: emotion
  {
    out << "emotion: ";
    to_flow_style_yaml(msg.emotion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmotionSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: emotion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emotion:\n";
    to_block_style_yaml(msg.emotion, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmotionSrv_Response & msg, bool use_flow_style = false)
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
  const object_msgs::srv::EmotionSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::srv::EmotionSrv_Response & msg)
{
  return object_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::srv::EmotionSrv_Response>()
{
  return "object_msgs::srv::EmotionSrv_Response";
}

template<>
inline const char * name<object_msgs::srv::EmotionSrv_Response>()
{
  return "object_msgs/srv/EmotionSrv_Response";
}

template<>
struct has_fixed_size<object_msgs::srv::EmotionSrv_Response>
  : std::integral_constant<bool, has_fixed_size<object_msgs::msg::EmotionsStamped>::value> {};

template<>
struct has_bounded_size<object_msgs::srv::EmotionSrv_Response>
  : std::integral_constant<bool, has_bounded_size<object_msgs::msg::EmotionsStamped>::value> {};

template<>
struct is_message<object_msgs::srv::EmotionSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_msgs::srv::EmotionSrv>()
{
  return "object_msgs::srv::EmotionSrv";
}

template<>
inline const char * name<object_msgs::srv::EmotionSrv>()
{
  return "object_msgs/srv/EmotionSrv";
}

template<>
struct has_fixed_size<object_msgs::srv::EmotionSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<object_msgs::srv::EmotionSrv_Request>::value &&
    has_fixed_size<object_msgs::srv::EmotionSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_msgs::srv::EmotionSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<object_msgs::srv::EmotionSrv_Request>::value &&
    has_bounded_size<object_msgs::srv::EmotionSrv_Response>::value
  >
{
};

template<>
struct is_service<object_msgs::srv::EmotionSrv>
  : std::true_type
{
};

template<>
struct is_service_request<object_msgs::srv::EmotionSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<object_msgs::srv::EmotionSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__SRV__DETAIL__EMOTION_SRV__TRAITS_HPP_
