// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_msgs:msg/ObjectsInBoxes.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__STRUCT_HPP_
#define OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__STRUCT_HPP_

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
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'objects_vector'
#include "object_msgs/msg/detail/object_in_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_msgs__msg__ObjectsInBoxes __attribute__((deprecated))
#else
# define DEPRECATED__object_msgs__msg__ObjectsInBoxes __declspec(deprecated)
#endif

namespace object_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectsInBoxes_
{
  using Type = ObjectsInBoxes_<ContainerAllocator>;

  explicit ObjectsInBoxes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inference_time_ms = 0.0f;
    }
  }

  explicit ObjectsInBoxes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inference_time_ms = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _objects_vector_type =
    std::vector<object_msgs::msg::ObjectInBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<object_msgs::msg::ObjectInBox_<ContainerAllocator>>>;
  _objects_vector_type objects_vector;
  using _inference_time_ms_type =
    float;
  _inference_time_ms_type inference_time_ms;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__objects_vector(
    const std::vector<object_msgs::msg::ObjectInBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<object_msgs::msg::ObjectInBox_<ContainerAllocator>>> & _arg)
  {
    this->objects_vector = _arg;
    return *this;
  }
  Type & set__inference_time_ms(
    const float & _arg)
  {
    this->inference_time_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_msgs::msg::ObjectsInBoxes_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_msgs::msg::ObjectsInBoxes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::ObjectsInBoxes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_msgs::msg::ObjectsInBoxes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_msgs__msg__ObjectsInBoxes
    std::shared_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_msgs__msg__ObjectsInBoxes
    std::shared_ptr<object_msgs::msg::ObjectsInBoxes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectsInBoxes_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->objects_vector != other.objects_vector) {
      return false;
    }
    if (this->inference_time_ms != other.inference_time_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectsInBoxes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectsInBoxes_

// alias to use template instance with default allocator
using ObjectsInBoxes =
  object_msgs::msg::ObjectsInBoxes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_msgs

#endif  // OBJECT_MSGS__MSG__DETAIL__OBJECTS_IN_BOXES__STRUCT_HPP_
