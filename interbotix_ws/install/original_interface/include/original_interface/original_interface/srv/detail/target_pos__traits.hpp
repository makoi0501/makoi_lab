// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from original_interface:srv/TargetPos.idl
// generated code does not contain a copyright notice

#ifndef ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__TRAITS_HPP_
#define ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "original_interface/srv/detail/target_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace original_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetPos_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_num
  {
    out << "target_num: ";
    rosidl_generator_traits::value_to_yaml(msg.target_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_num: ";
    rosidl_generator_traits::value_to_yaml(msg.target_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPos_Request & msg, bool use_flow_style = false)
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

}  // namespace original_interface

namespace rosidl_generator_traits
{

[[deprecated("use original_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const original_interface::srv::TargetPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  original_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use original_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const original_interface::srv::TargetPos_Request & msg)
{
  return original_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<original_interface::srv::TargetPos_Request>()
{
  return "original_interface::srv::TargetPos_Request";
}

template<>
inline const char * name<original_interface::srv::TargetPos_Request>()
{
  return "original_interface/srv/TargetPos_Request";
}

template<>
struct has_fixed_size<original_interface::srv::TargetPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<original_interface::srv::TargetPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<original_interface::srv::TargetPos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace original_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetPos_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: targetx
  {
    out << "targetx: ";
    rosidl_generator_traits::value_to_yaml(msg.targetx, out);
    out << ", ";
  }

  // member: targety
  {
    out << "targety: ";
    rosidl_generator_traits::value_to_yaml(msg.targety, out);
    out << ", ";
  }

  // member: targetz
  {
    out << "targetz: ";
    rosidl_generator_traits::value_to_yaml(msg.targetz, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: targetx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targetx: ";
    rosidl_generator_traits::value_to_yaml(msg.targetx, out);
    out << "\n";
  }

  // member: targety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targety: ";
    rosidl_generator_traits::value_to_yaml(msg.targety, out);
    out << "\n";
  }

  // member: targetz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "targetz: ";
    rosidl_generator_traits::value_to_yaml(msg.targetz, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPos_Response & msg, bool use_flow_style = false)
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

}  // namespace original_interface

namespace rosidl_generator_traits
{

[[deprecated("use original_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const original_interface::srv::TargetPos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  original_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use original_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const original_interface::srv::TargetPos_Response & msg)
{
  return original_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<original_interface::srv::TargetPos_Response>()
{
  return "original_interface::srv::TargetPos_Response";
}

template<>
inline const char * name<original_interface::srv::TargetPos_Response>()
{
  return "original_interface/srv/TargetPos_Response";
}

template<>
struct has_fixed_size<original_interface::srv::TargetPos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<original_interface::srv::TargetPos_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<original_interface::srv::TargetPos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<original_interface::srv::TargetPos>()
{
  return "original_interface::srv::TargetPos";
}

template<>
inline const char * name<original_interface::srv::TargetPos>()
{
  return "original_interface/srv/TargetPos";
}

template<>
struct has_fixed_size<original_interface::srv::TargetPos>
  : std::integral_constant<
    bool,
    has_fixed_size<original_interface::srv::TargetPos_Request>::value &&
    has_fixed_size<original_interface::srv::TargetPos_Response>::value
  >
{
};

template<>
struct has_bounded_size<original_interface::srv::TargetPos>
  : std::integral_constant<
    bool,
    has_bounded_size<original_interface::srv::TargetPos_Request>::value &&
    has_bounded_size<original_interface::srv::TargetPos_Response>::value
  >
{
};

template<>
struct is_service<original_interface::srv::TargetPos>
  : std::true_type
{
};

template<>
struct is_service_request<original_interface::srv::TargetPos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<original_interface::srv::TargetPos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORIGINAL_INTERFACE__SRV__DETAIL__TARGET_POS__TRAITS_HPP_
