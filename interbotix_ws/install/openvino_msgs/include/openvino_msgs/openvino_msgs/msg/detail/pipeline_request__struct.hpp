// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openvino_msgs:msg/PipelineRequest.idl
// generated code does not contain a copyright notice

#ifndef OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__STRUCT_HPP_
#define OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__openvino_msgs__msg__PipelineRequest __attribute__((deprecated))
#else
# define DEPRECATED__openvino_msgs__msg__PipelineRequest __declspec(deprecated)
#endif

namespace openvino_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PipelineRequest_
{
  using Type = PipelineRequest_<ContainerAllocator>;

  explicit PipelineRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
      this->value = "";
    }
  }

  explicit PipelineRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cmd(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
      this->value = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type cmd;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openvino_msgs::msg::PipelineRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const openvino_msgs::msg::PipelineRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::msg::PipelineRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openvino_msgs::msg::PipelineRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openvino_msgs__msg__PipelineRequest
    std::shared_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openvino_msgs__msg__PipelineRequest
    std::shared_ptr<openvino_msgs::msg::PipelineRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PipelineRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const PipelineRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PipelineRequest_

// alias to use template instance with default allocator
using PipelineRequest =
  openvino_msgs::msg::PipelineRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openvino_msgs

#endif  // OPENVINO_MSGS__MSG__DETAIL__PIPELINE_REQUEST__STRUCT_HPP_
