// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__EMOTION__STRUCT_HPP_
#define OBJECT_MSGS__MSG__DETAIL__EMOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__Emotion __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__Emotion __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Emotion_
{
  using Type = Emotion_<ContainerAllocator>;

  explicit Emotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emotion = "";
    }
  }

  explicit Emotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : emotion(_alloc),
    roi(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emotion = "";
    }
  }

  // field types and members
  using _emotion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _emotion_type emotion;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__emotion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->emotion = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::Emotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::Emotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::Emotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::Emotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Emotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Emotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::Emotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::Emotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::Emotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::Emotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__Emotion
    std::shared_ptr<object_msgs::msg::Emotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__Emotion
    std::shared_ptr<object_msgs::msg::Emotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Emotion_ & other) const
  {
    if (this->emotion != other.emotion) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const Emotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Emotion_

// alias to use template instance with default allocator
using Emotion =
  object_msgs::msg::Emotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__EMOTION__STRUCT_HPP_
