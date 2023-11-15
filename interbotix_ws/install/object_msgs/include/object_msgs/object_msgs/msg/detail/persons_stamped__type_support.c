// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_msgs:msg/PersonsStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_msgs/msg/detail/persons_stamped__rosidl_typesupport_introspection_c.h"
#include "object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_msgs/msg/detail/persons_stamped__functions.h"
#include "object_msgs/msg/detail/persons_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `faces`
#include "object_msgs/msg/object_in_box.h"
// Member `faces`
#include "object_msgs/msg/detail/object_in_box__rosidl_typesupport_introspection_c.h"
// Member `emotions`
#include "object_msgs/msg/emotion.h"
// Member `emotions`
#include "object_msgs/msg/detail/emotion__rosidl_typesupport_introspection_c.h"
// Member `agegenders`
#include "object_msgs/msg/age_gender.h"
// Member `agegenders`
#include "object_msgs/msg/detail/age_gender__rosidl_typesupport_introspection_c.h"
// Member `headposes`
#include "object_msgs/msg/head_pose.h"
// Member `headposes`
#include "object_msgs/msg/detail/head_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_msgs__msg__PersonsStamped__init(message_memory);
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_fini_function(void * message_memory)
{
  object_msgs__msg__PersonsStamped__fini(message_memory);
}

size_t object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__faces(
  const void * untyped_member)
{
  const object_msgs__msg__ObjectInBox__Sequence * member =
    (const object_msgs__msg__ObjectInBox__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__faces(
  const void * untyped_member, size_t index)
{
  const object_msgs__msg__ObjectInBox__Sequence * member =
    (const object_msgs__msg__ObjectInBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__faces(
  void * untyped_member, size_t index)
{
  object_msgs__msg__ObjectInBox__Sequence * member =
    (object_msgs__msg__ObjectInBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__faces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_msgs__msg__ObjectInBox * item =
    ((const object_msgs__msg__ObjectInBox *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__faces(untyped_member, index));
  object_msgs__msg__ObjectInBox * value =
    (object_msgs__msg__ObjectInBox *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__faces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_msgs__msg__ObjectInBox * item =
    ((object_msgs__msg__ObjectInBox *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__faces(untyped_member, index));
  const object_msgs__msg__ObjectInBox * value =
    (const object_msgs__msg__ObjectInBox *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__faces(
  void * untyped_member, size_t size)
{
  object_msgs__msg__ObjectInBox__Sequence * member =
    (object_msgs__msg__ObjectInBox__Sequence *)(untyped_member);
  object_msgs__msg__ObjectInBox__Sequence__fini(member);
  return object_msgs__msg__ObjectInBox__Sequence__init(member, size);
}

size_t object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__emotions(
  const void * untyped_member)
{
  const object_msgs__msg__Emotion__Sequence * member =
    (const object_msgs__msg__Emotion__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__emotions(
  const void * untyped_member, size_t index)
{
  const object_msgs__msg__Emotion__Sequence * member =
    (const object_msgs__msg__Emotion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__emotions(
  void * untyped_member, size_t index)
{
  object_msgs__msg__Emotion__Sequence * member =
    (object_msgs__msg__Emotion__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__emotions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_msgs__msg__Emotion * item =
    ((const object_msgs__msg__Emotion *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__emotions(untyped_member, index));
  object_msgs__msg__Emotion * value =
    (object_msgs__msg__Emotion *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__emotions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_msgs__msg__Emotion * item =
    ((object_msgs__msg__Emotion *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__emotions(untyped_member, index));
  const object_msgs__msg__Emotion * value =
    (const object_msgs__msg__Emotion *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__emotions(
  void * untyped_member, size_t size)
{
  object_msgs__msg__Emotion__Sequence * member =
    (object_msgs__msg__Emotion__Sequence *)(untyped_member);
  object_msgs__msg__Emotion__Sequence__fini(member);
  return object_msgs__msg__Emotion__Sequence__init(member, size);
}

size_t object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__agegenders(
  const void * untyped_member)
{
  const object_msgs__msg__AgeGender__Sequence * member =
    (const object_msgs__msg__AgeGender__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__agegenders(
  const void * untyped_member, size_t index)
{
  const object_msgs__msg__AgeGender__Sequence * member =
    (const object_msgs__msg__AgeGender__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__agegenders(
  void * untyped_member, size_t index)
{
  object_msgs__msg__AgeGender__Sequence * member =
    (object_msgs__msg__AgeGender__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__agegenders(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_msgs__msg__AgeGender * item =
    ((const object_msgs__msg__AgeGender *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__agegenders(untyped_member, index));
  object_msgs__msg__AgeGender * value =
    (object_msgs__msg__AgeGender *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__agegenders(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_msgs__msg__AgeGender * item =
    ((object_msgs__msg__AgeGender *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__agegenders(untyped_member, index));
  const object_msgs__msg__AgeGender * value =
    (const object_msgs__msg__AgeGender *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__agegenders(
  void * untyped_member, size_t size)
{
  object_msgs__msg__AgeGender__Sequence * member =
    (object_msgs__msg__AgeGender__Sequence *)(untyped_member);
  object_msgs__msg__AgeGender__Sequence__fini(member);
  return object_msgs__msg__AgeGender__Sequence__init(member, size);
}

size_t object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__headposes(
  const void * untyped_member)
{
  const object_msgs__msg__HeadPose__Sequence * member =
    (const object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__headposes(
  const void * untyped_member, size_t index)
{
  const object_msgs__msg__HeadPose__Sequence * member =
    (const object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__headposes(
  void * untyped_member, size_t index)
{
  object_msgs__msg__HeadPose__Sequence * member =
    (object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__headposes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_msgs__msg__HeadPose * item =
    ((const object_msgs__msg__HeadPose *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__headposes(untyped_member, index));
  object_msgs__msg__HeadPose * value =
    (object_msgs__msg__HeadPose *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__headposes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_msgs__msg__HeadPose * item =
    ((object_msgs__msg__HeadPose *)
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__headposes(untyped_member, index));
  const object_msgs__msg__HeadPose * value =
    (const object_msgs__msg__HeadPose *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__headposes(
  void * untyped_member, size_t size)
{
  object_msgs__msg__HeadPose__Sequence * member =
    (object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  object_msgs__msg__HeadPose__Sequence__fini(member);
  return object_msgs__msg__HeadPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__PersonsStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "faces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__PersonsStamped, faces),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__faces,  // size() function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__faces,  // get_const(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__faces,  // get(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__faces,  // fetch(index, &value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__faces,  // assign(index, value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__faces  // resize(index) function pointer
  },
  {
    "emotions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__PersonsStamped, emotions),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__emotions,  // size() function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__emotions,  // get_const(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__emotions,  // get(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__emotions,  // fetch(index, &value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__emotions,  // assign(index, value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__emotions  // resize(index) function pointer
  },
  {
    "agegenders",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__PersonsStamped, agegenders),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__agegenders,  // size() function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__agegenders,  // get_const(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__agegenders,  // get(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__agegenders,  // fetch(index, &value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__agegenders,  // assign(index, value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__agegenders  // resize(index) function pointer
  },
  {
    "headposes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__PersonsStamped, headposes),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__size_function__PersonsStamped__headposes,  // size() function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_const_function__PersonsStamped__headposes,  // get_const(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__get_function__PersonsStamped__headposes,  // get(index) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__fetch_function__PersonsStamped__headposes,  // fetch(index, &value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__assign_function__PersonsStamped__headposes,  // assign(index, value) function pointer
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__resize_function__PersonsStamped__headposes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_members = {
  "object_msgs__msg",  // message namespace
  "PersonsStamped",  // message name
  5,  // number of fields
  sizeof(object_msgs__msg__PersonsStamped),
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array,  // message members
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_type_support_handle = {
  0,
  &object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, PersonsStamped)() {
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, ObjectInBox)();
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, Emotion)();
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, AgeGender)();
  object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, HeadPose)();
  if (!object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_type_support_handle.typesupport_identifier) {
    object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_msgs__msg__PersonsStamped__rosidl_typesupport_introspection_c__PersonsStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
