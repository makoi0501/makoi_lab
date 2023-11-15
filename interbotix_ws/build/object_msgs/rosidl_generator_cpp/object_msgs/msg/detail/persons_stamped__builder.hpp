// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:msg/PersonsStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERSONS_STAMPED__BUILDER_HPP_
#define OBJECT_MSGS__MSG__DETAIL__PERSONS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/msg/detail/persons_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonsStamped_headposes
{
public:
  explicit Init_PersonsStamped_headposes(::object_msgs::msg::PersonsStamped & msg)
  : msg_(msg)
  {}
  ::object_msgs::msg::PersonsStamped headposes(::object_msgs::msg::PersonsStamped::_headposes_type arg)
  {
    msg_.headposes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::msg::PersonsStamped msg_;
};

class Init_PersonsStamped_agegenders
{
public:
  explicit Init_PersonsStamped_agegenders(::object_msgs::msg::PersonsStamped & msg)
  : msg_(msg)
  {}
  Init_PersonsStamped_headposes agegenders(::object_msgs::msg::PersonsStamped::_agegenders_type arg)
  {
    msg_.agegenders = std::move(arg);
    return Init_PersonsStamped_headposes(msg_);
  }

private:
  ::object_msgs::msg::PersonsStamped msg_;
};

class Init_PersonsStamped_emotions
{
public:
  explicit Init_PersonsStamped_emotions(::object_msgs::msg::PersonsStamped & msg)
  : msg_(msg)
  {}
  Init_PersonsStamped_agegenders emotions(::object_msgs::msg::PersonsStamped::_emotions_type arg)
  {
    msg_.emotions = std::move(arg);
    return Init_PersonsStamped_agegenders(msg_);
  }

private:
  ::object_msgs::msg::PersonsStamped msg_;
};

class Init_PersonsStamped_faces
{
public:
  explicit Init_PersonsStamped_faces(::object_msgs::msg::PersonsStamped & msg)
  : msg_(msg)
  {}
  Init_PersonsStamped_emotions faces(::object_msgs::msg::PersonsStamped::_faces_type arg)
  {
    msg_.faces = std::move(arg);
    return Init_PersonsStamped_emotions(msg_);
  }

private:
  ::object_msgs::msg::PersonsStamped msg_;
};

class Init_PersonsStamped_header
{
public:
  Init_PersonsStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonsStamped_faces header(::object_msgs::msg::PersonsStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PersonsStamped_faces(msg_);
  }

private:
  ::object_msgs::msg::PersonsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::msg::PersonsStamped>()
{
  return object_msgs::msg::builder::Init_PersonsStamped_header();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__PERSONS_STAMPED__BUILDER_HPP_
