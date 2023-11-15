// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg/ObjectsInBoxes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "object_msgs/msg/detail/objects_in_boxes__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace object_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectsInBoxes_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) object_msgs::msg::ObjectsInBoxes(_init);
}

void ObjectsInBoxes_fini_function(void * message_memory)
{
  auto typed_message = static_cast<object_msgs::msg::ObjectsInBoxes *>(message_memory);
  typed_message->~ObjectsInBoxes();
}

size_t size_function__ObjectsInBoxes__objects_vector(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectsInBoxes__objects_vector(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectsInBoxes__objects_vector(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObjectsInBoxes__objects_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const object_msgs::msg::ObjectInBox *>(
    get_const_function__ObjectsInBoxes__objects_vector(untyped_member, index));
  auto & value = *reinterpret_cast<object_msgs::msg::ObjectInBox *>(untyped_value);
  value = item;
}

void assign_function__ObjectsInBoxes__objects_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<object_msgs::msg::ObjectInBox *>(
    get_function__ObjectsInBoxes__objects_vector(untyped_member, index));
  const auto & value = *reinterpret_cast<const object_msgs::msg::ObjectInBox *>(untyped_value);
  item = value;
}

void resize_function__ObjectsInBoxes__objects_vector(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectsInBoxes_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInBoxes, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInBoxes, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objects_vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::ObjectInBox>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInBoxes, objects_vector),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectsInBoxes__objects_vector,  // size() function pointer
    get_const_function__ObjectsInBoxes__objects_vector,  // get_const(index) function pointer
    get_function__ObjectsInBoxes__objects_vector,  // get(index) function pointer
    fetch_function__ObjectsInBoxes__objects_vector,  // fetch(index, &value) function pointer
    assign_function__ObjectsInBoxes__objects_vector,  // assign(index, value) function pointer
    resize_function__ObjectsInBoxes__objects_vector  // resize(index) function pointer
  },
  {
    "inference_time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::ObjectsInBoxes, inference_time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectsInBoxes_message_members = {
  "object_msgs::msg",  // message namespace
  "ObjectsInBoxes",  // message name
  4,  // number of fields
  sizeof(object_msgs::msg::ObjectsInBoxes),
  ObjectsInBoxes_message_member_array,  // message members
  ObjectsInBoxes_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectsInBoxes_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectsInBoxes_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectsInBoxes_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace object_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<object_msgs::msg::ObjectsInBoxes>()
{
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectsInBoxes_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, object_msgs, msg, ObjectsInBoxes)() {
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectsInBoxes_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
