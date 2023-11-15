// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openvino_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__openvino_msgs__msg__Connection __attribute__((deprecated))
#else
# define DEPRECATED__openvino_msgs__msg__Connection __declspec(deprecated)
#endif

namespace openvino_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Connection_
{
  using Type = Connection_<ContainerAllocator>;

  explicit Connection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = "";
      this->output = "";
    }
  }

  explicit Connection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc),
    output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = "";
      this->output = "";
    }
  }

  // field types and members
  using _input_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _input_type input;
  using _output_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__input(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__output(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openvino_msgs::msg::Connection_<ContainerAllocator> *;
  using ConstRawPtr =
    const openvino_msgs::msg::Connection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openvino_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openvino_msgs::msg::Connection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::msg::Connection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::msg::Connection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::msg::Connection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::msg::Connection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openvino_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openvino_msgs::msg::Connection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openvino_msgs__msg__Connection
    std::shared_ptr<openvino_msgs::msg::Connection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openvino_msgs__msg__Connection
    std::shared_ptr<openvino_msgs::msg::Connection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connection_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connection_

// alias to use template instance with default allocator
using Connection =
  openvino_msgs::msg::Connection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
