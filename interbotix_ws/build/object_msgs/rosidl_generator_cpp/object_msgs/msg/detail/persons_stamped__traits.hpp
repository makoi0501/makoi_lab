// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg/PersonsStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERSONS_STAMPED__TRAITS_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERSONS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_msgs/msg/detail/persons_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'faces'
#include "object_msgs/msg/detail/object_in_box__traits.hpp"
// Member 'emotions'
#include "object_msgs/msg/detail/emotion__traits.hpp"
// Member 'agegenders'
#include "object_msgs/msg/detail/age_gender__traits.hpp"
// Member 'headposes'
#include "object_msgs/msg/detail/head_pose__traits.hpp"

namespace object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PersonsStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: faces
  {
    if (msg.faces.size() == 0) {
      out << "faces: []";
    } else {
      out << "faces: [";
      size_t pending_items = msg.faces.size();
      for (auto item : msg.faces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: emotions
  {
    if (msg.emotions.size() == 0) {
      out << "emotions: []";
    } else {
      out << "emotions: [";
      size_t pending_items = msg.emotions.size();
      for (auto item : msg.emotions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: agegenders
  {
    if (msg.agegenders.size() == 0) {
      out << "agegenders: []";
    } else {
      out << "agegenders: [";
      size_t pending_items = msg.agegenders.size();
      for (auto item : msg.agegenders) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: headposes
  {
    if (msg.headposes.size() == 0) {
      out << "headposes: []";
    } else {
      out << "headposes: [";
      size_t pending_items = msg.headposes.size();
      for (auto item : msg.headposes) {
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
  const PersonsStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: faces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faces.size() == 0) {
      out << "faces: []\n";
    } else {
      out << "faces:\n";
      for (auto item : msg.faces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: emotions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.emotions.size() == 0) {
      out << "emotions: []\n";
    } else {
      out << "emotions:\n";
      for (auto item : msg.emotions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: agegenders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agegenders.size() == 0) {
      out << "agegenders: []\n";
    } else {
      out << "agegenders:\n";
      for (auto item : msg.agegenders) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: headposes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.headposes.size() == 0) {
      out << "headposes: []\n";
    } else {
      out << "headposes:\n";
      for (auto item : msg.headposes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PersonsStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace object_msgs

namespace rosidl_generator_traits
{

[[deprecated("use object_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_msgs::msg::PersonsStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_msgs::msg::PersonsStamped & msg)
{
  return object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_msgs::msg::PersonsStamped>()
{
  return "object_msgs::msg::PersonsStamped";
}

template<>
inline const char * name<object_msgs::msg::PersonsStamped>()
{
  return "object_msgs/msg/PersonsStamped";
}

template<>
struct has_fixed_size<object_msgs::msg::PersonsStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_msgs::msg::PersonsStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_msgs::msg::PersonsStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__DETAIL__PERSONS_STAMPED__TRAITS_HPP_
