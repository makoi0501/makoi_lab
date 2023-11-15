// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/ObjectsInBoxes3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES3_D__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/objects_in_boxes3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectsInBoxes3D_objects_in_boxes
{
public:
  explicit Init_ObjectsInBoxes3D_objects_in_boxes(::object_msgs::msg::ObjectsInBoxes3D & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::ObjectsInBoxes3D objects_in_boxes(::object_msgs::msg::ObjectsInBoxes3D::_objects_in_boxes_type arg)
  {
    msg_.objects_in_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInBoxes3D msg_;
};

class Init_ObjectsInBoxes3D_header
{
public:
  Init_ObjectsInBoxes3D_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectsInBoxes3D_objects_in_boxes header(::object_msgs::msg::ObjectsInBoxes3D::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectsInBoxes3D_objects_in_boxes(msg_);
  }

private:
  ::object_msgs::msg::ObjectsInBoxes3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::ObjectsInBoxes3D>()
{
  return object_msgs::msg::builder::Init_ObjectsInBoxes3D_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES3_D__BUILDER_HPP_
