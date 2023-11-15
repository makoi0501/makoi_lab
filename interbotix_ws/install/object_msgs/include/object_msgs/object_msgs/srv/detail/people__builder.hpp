// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_msgs:srv/People.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__SRV__DETAIL__PEOPLE__BUILDER_HPP_
#define OBJECT_MSGS__SRV__DETAIL__PEOPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_msgs/srv/detail/people__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_People_Request_image_path
{
public:
  Init_People_Request_image_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::People_Request image_path(::object_msgs::srv::People_Request::_image_path_type arg)
  {
    msg_.image_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::People_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::People_Request>()
{
  return object_msgs::srv::builder::Init_People_Request_image_path();
}

}  // namespace object_msgs


namespace object_msgs
{

namespace srv
{

namespace builder
{

class Init_People_Response_persons
{
public:
  Init_People_Response_persons()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_msgs::srv::People_Response persons(::object_msgs::srv::People_Response::_persons_type arg)
  {
    msg_.persons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_msgs::srv::People_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_msgs::srv::People_Response>()
{
  return object_msgs::srv::builder::Init_People_Response_persons();
}

}  // namespace object_msgs

#endif  // OBJECT_MSGS__SRV__DETAIL__PEOPLE__BUILDER_HPP_
