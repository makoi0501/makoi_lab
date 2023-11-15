// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/LicensePlateStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__LICENSE_PLATE_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__LICENSE_PLATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/license_plate_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_LicensePlateStamped_licenses
{
public:
  explicit Init_LicensePlateStamped_licenses(::object_msgs::msg::LicensePlateStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::LicensePlateStamped licenses(::object_msgs::msg::LicensePlateStamped::_licenses_type arg)
  {
    msg_.licenses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::LicensePlateStamped msg_;
};

class Init_LicensePlateStamped_header
{
public:
  Init_LicensePlateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LicensePlateStamped_licenses header(::object_msgs::msg::LicensePlateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LicensePlateStamped_licenses(msg_);
  }

private:
  ::object_msgs::msg::LicensePlateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::LicensePlateStamped>()
{
  return object_msgs::msg::builder::Init_LicensePlateStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__LICENSE_PLATE_STAMPED__BUILDER_HPP_
