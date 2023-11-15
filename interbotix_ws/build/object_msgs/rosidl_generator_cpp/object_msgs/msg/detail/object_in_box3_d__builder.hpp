// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ObjectInBox3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX3_D__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/object_in_box3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectInBox3D_max
{
public:
  explicit Init_ObjectInBox3D_max(::object_msgs::msg::ObjectInBox3D & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ObjectInBox3D max(::object_msgs::msg::ObjectInBox3D::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ObjectInBox3D msg_;
};

class Init_ObjectInBox3D_min
{
public:
  explicit Init_ObjectInBox3D_min(::object_msgs::msg::ObjectInBox3D & msg)
  : msg_(msg)
  {}
  Init_ObjectInBox3D_max min(::object_msgs::msg::ObjectInBox3D::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_ObjectInBox3D_max(msg_);
  }

private:
  ::object_msgs::msg::ObjectInBox3D msg_;
};

class Init_ObjectInBox3D_roi
{
public:
  explicit Init_ObjectInBox3D_roi(::object_msgs::msg::ObjectInBox3D & msg)
  : msg_(msg)
  {}
  Init_ObjectInBox3D_min roi(::object_msgs::msg::ObjectInBox3D::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_ObjectInBox3D_min(msg_);
  }

private:
  ::object_msgs::msg::ObjectInBox3D msg_;
};

class Init_ObjectInBox3D_object
{
public:
  Init_ObjectInBox3D_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectInBox3D_roi object(::object_msgs::msg::ObjectInBox3D::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_ObjectInBox3D_roi(msg_);
  }

private:
  ::object_msgs::msg::ObjectInBox3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ObjectInBox3D>()
{
  return object_msgs::msg::builder::Init_ObjectInBox3D_object();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECT_IN_BOX3_D__BUILDER_HPP_
