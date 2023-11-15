// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_msgs:msg/HeadPoseStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_msgs/msg/detail/head_pose_stamped__rosidl_typesupport_introspection_c.h"
#include "object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_msgs/msg/detail/head_pose_stamped__functions.h"
#include "object_msgs/msg/detail/head_pose_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `headposes`
#include "object_msgs/msg/head_pose.h"
// Member `headposes`
#include "object_msgs/msg/detail/head_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_msgs__msg__HeadPoseStamped__init(message_memory);
}

void object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_fini_function(void * message_memory)
{
  object_msgs__msg__HeadPoseStamped__fini(message_memory);
}

size_t object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__size_function__HeadPoseStamped__headposes(
  const void * untyped_member)
{
  const object_msgs__msg__HeadPose__Sequence * member =
    (const object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  return member->size;
}

const void * object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__get_const_function__HeadPoseStamped__headposes(
  const void * untyped_member, size_t index)
{
  const object_msgs__msg__HeadPose__Sequence * member =
    (const object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__get_function__HeadPoseStamped__headposes(
  void * untyped_member, size_t index)
{
  object_msgs__msg__HeadPose__Sequence * member =
    (object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__fetch_function__HeadPoseStamped__headposes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_msgs__msg__HeadPose * item =
    ((const object_msgs__msg__HeadPose *)
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__get_const_function__HeadPoseStamped__headposes(untyped_member, index));
  object_msgs__msg__HeadPose * value =
    (object_msgs__msg__HeadPose *)(untyped_value);
  *value = *item;
}

void object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__assign_function__HeadPoseStamped__headposes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_msgs__msg__HeadPose * item =
    ((object_msgs__msg__HeadPose *)
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__get_function__HeadPoseStamped__headposes(untyped_member, index));
  const object_msgs__msg__HeadPose * value =
    (const object_msgs__msg__HeadPose *)(untyped_value);
  *item = *value;
}

bool object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__resize_function__HeadPoseStamped__headposes(
  void * untyped_member, size_t size)
{
  object_msgs__msg__HeadPose__Sequence * member =
    (object_msgs__msg__HeadPose__Sequence *)(untyped_member);
  object_msgs__msg__HeadPose__Sequence__fini(member);
  return object_msgs__msg__HeadPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__HeadPoseStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "headposes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_msgs__msg__HeadPoseStamped, headposes),  // bytes offset in struct
    NULL,  // default value
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__size_function__HeadPoseStamped__headposes,  // size() function pointer
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__get_const_function__HeadPoseStamped__headposes,  // get_const(index) function pointer
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__get_function__HeadPoseStamped__headposes,  // get(index) function pointer
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__fetch_function__HeadPoseStamped__headposes,  // fetch(index, &value) function pointer
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__assign_function__HeadPoseStamped__headposes,  // assign(index, value) function pointer
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__resize_function__HeadPoseStamped__headposes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_members = {
  "object_msgs__msg",  // message namespace
  "HeadPoseStamped",  // message name
  2,  // number of fields
  sizeof(object_msgs__msg__HeadPoseStamped),
  object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_member_array,  // message members
  object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_type_support_handle = {
  0,
  &object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, HeadPoseStamped)() {
  object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_msgs, msg, HeadPose)();
  if (!object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_type_support_handle.typesupport_identifier) {
    object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_msgs__msg__HeadPoseStamped__rosidl_typesupport_introspection_c__HeadPoseStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
