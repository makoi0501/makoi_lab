// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from object_msgs:msg/PersonsStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "object_msgs/msg/detail/persons_stamped__struct.hpp"
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

void PersonsStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) object_msgs::msg::PersonsStamped(_init);
}

void PersonsStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<object_msgs::msg::PersonsStamped *>(message_memory);
  typed_message->~PersonsStamped();
}

size_t size_function__PersonsStamped__faces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PersonsStamped__faces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  return &member[index];
}

void * get_function__PersonsStamped__faces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  return &member[index];
}

void fetch_function__PersonsStamped__faces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const object_msgs::msg::ObjectInBox *>(
    get_const_function__PersonsStamped__faces(untyped_member, index));
  auto & value = *reinterpret_cast<object_msgs::msg::ObjectInBox *>(untyped_value);
  value = item;
}

void assign_function__PersonsStamped__faces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<object_msgs::msg::ObjectInBox *>(
    get_function__PersonsStamped__faces(untyped_member, index));
  const auto & value = *reinterpret_cast<const object_msgs::msg::ObjectInBox *>(untyped_value);
  item = value;
}

void resize_function__PersonsStamped__faces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::ObjectInBox> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PersonsStamped__emotions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::Emotion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PersonsStamped__emotions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::Emotion> *>(untyped_member);
  return &member[index];
}

void * get_function__PersonsStamped__emotions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::Emotion> *>(untyped_member);
  return &member[index];
}

void fetch_function__PersonsStamped__emotions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const object_msgs::msg::Emotion *>(
    get_const_function__PersonsStamped__emotions(untyped_member, index));
  auto & value = *reinterpret_cast<object_msgs::msg::Emotion *>(untyped_value);
  value = item;
}

void assign_function__PersonsStamped__emotions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<object_msgs::msg::Emotion *>(
    get_function__PersonsStamped__emotions(untyped_member, index));
  const auto & value = *reinterpret_cast<const object_msgs::msg::Emotion *>(untyped_value);
  item = value;
}

void resize_function__PersonsStamped__emotions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::Emotion> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PersonsStamped__agegenders(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::AgeGender> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PersonsStamped__agegenders(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::AgeGender> *>(untyped_member);
  return &member[index];
}

void * get_function__PersonsStamped__agegenders(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::AgeGender> *>(untyped_member);
  return &member[index];
}

void fetch_function__PersonsStamped__agegenders(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const object_msgs::msg::AgeGender *>(
    get_const_function__PersonsStamped__agegenders(untyped_member, index));
  auto & value = *reinterpret_cast<object_msgs::msg::AgeGender *>(untyped_value);
  value = item;
}

void assign_function__PersonsStamped__agegenders(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<object_msgs::msg::AgeGender *>(
    get_function__PersonsStamped__agegenders(untyped_member, index));
  const auto & value = *reinterpret_cast<const object_msgs::msg::AgeGender *>(untyped_value);
  item = value;
}

void resize_function__PersonsStamped__agegenders(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::AgeGender> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PersonsStamped__headposes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_msgs::msg::HeadPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PersonsStamped__headposes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_msgs::msg::HeadPose> *>(untyped_member);
  return &member[index];
}

void * get_function__PersonsStamped__headposes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_msgs::msg::HeadPose> *>(untyped_member);
  return &member[index];
}

void fetch_function__PersonsStamped__headposes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const object_msgs::msg::HeadPose *>(
    get_const_function__PersonsStamped__headposes(untyped_member, index));
  auto & value = *reinterpret_cast<object_msgs::msg::HeadPose *>(untyped_value);
  value = item;
}

void assign_function__PersonsStamped__headposes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<object_msgs::msg::HeadPose *>(
    get_function__PersonsStamped__headposes(untyped_member, index));
  const auto & value = *reinterpret_cast<const object_msgs::msg::HeadPose *>(untyped_value);
  item = value;
}

void resize_function__PersonsStamped__headposes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_msgs::msg::HeadPose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PersonsStamped_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::PersonsStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "faces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::ObjectInBox>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::PersonsStamped, faces),  // bytes offset in struct
    nullptr,  // default value
    size_function__PersonsStamped__faces,  // size() function pointer
    get_const_function__PersonsStamped__faces,  // get_const(index) function pointer
    get_function__PersonsStamped__faces,  // get(index) function pointer
    fetch_function__PersonsStamped__faces,  // fetch(index, &value) function pointer
    assign_function__PersonsStamped__faces,  // assign(index, value) function pointer
    resize_function__PersonsStamped__faces  // resize(index) function pointer
  },
  {
    "emotions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::Emotion>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::PersonsStamped, emotions),  // bytes offset in struct
    nullptr,  // default value
    size_function__PersonsStamped__emotions,  // size() function pointer
    get_const_function__PersonsStamped__emotions,  // get_const(index) function pointer
    get_function__PersonsStamped__emotions,  // get(index) function pointer
    fetch_function__PersonsStamped__emotions,  // fetch(index, &value) function pointer
    assign_function__PersonsStamped__emotions,  // assign(index, value) function pointer
    resize_function__PersonsStamped__emotions  // resize(index) function pointer
  },
  {
    "agegenders",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::AgeGender>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::PersonsStamped, agegenders),  // bytes offset in struct
    nullptr,  // default value
    size_function__PersonsStamped__agegenders,  // size() function pointer
    get_const_function__PersonsStamped__agegenders,  // get_const(index) function pointer
    get_function__PersonsStamped__agegenders,  // get(index) function pointer
    fetch_function__PersonsStamped__agegenders,  // fetch(index, &value) function pointer
    assign_function__PersonsStamped__agegenders,  // assign(index, value) function pointer
    resize_function__PersonsStamped__agegenders  // resize(index) function pointer
  },
  {
    "headposes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_msgs::msg::HeadPose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs::msg::PersonsStamped, headposes),  // bytes offset in struct
    nullptr,  // default value
    size_function__PersonsStamped__headposes,  // size() function pointer
    get_const_function__PersonsStamped__headposes,  // get_const(index) function pointer
    get_function__PersonsStamped__headposes,  // get(index) function pointer
    fetch_function__PersonsStamped__headposes,  // fetch(index, &value) function pointer
    assign_function__PersonsStamped__headposes,  // assign(index, value) function pointer
    resize_function__PersonsStamped__headposes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PersonsStamped_message_members = {
  "object_msgs::msg",  // message namespace
  "PersonsStamped",  // message name
  5,  // number of fields
  sizeof(object_msgs::msg::PersonsStamped),
  PersonsStamped_message_member_array,  // message members
  PersonsStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  PersonsStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PersonsStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PersonsStamped_message_members,
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
get_message_type_support_handle<object_msgs::msg::PersonsStamped>()
{
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::PersonsStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, object_msgs, msg, PersonsStamped)() {
  return &::object_msgs::msg::rosidl_typesupport_introspection_cpp::PersonsStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
