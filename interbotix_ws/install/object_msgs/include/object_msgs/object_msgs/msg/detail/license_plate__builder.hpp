// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/LicensePlate.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__LICENSE_PLATE__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__LICENSE_PLATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/license_plate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_LicensePlate_roi
{
public:
  explicit Init_LicensePlate_roi(::object_msgs::msg::LicensePlate & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::LicensePlate roi(::object_msgs::msg::LicensePlate::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::LicensePlate msg_;
};

class Init_LicensePlate_license
{
public:
  Init_LicensePlate_license()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LicensePlate_roi license(::object_msgs::msg::LicensePlate::_license_type arg)
  {
    msg_.license = std::move(arg);
    return Init_LicensePlate_roi(msg_);
  }

private:
  ::object_msgs::msg::LicensePlate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::LicensePlate>()
{
  return object_msgs::msg::builder::Init_LicensePlate_license();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__LICENSE_PLATE__BUILDER_HPP_
