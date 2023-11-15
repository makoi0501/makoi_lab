// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openvino_msgs/srv/detail/pipeline_srv__rosidl_typesupport_introspection_c.h"
#include "openvino_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openvino_msgs/srv/detail/pipeline_srv__functions.h"
#include "openvino_msgs/srv/detail/pipeline_srv__struct.h"


// Include directives for member types
// Member `pipeline_request`
#include "openvino_msgs/msg/pipeline_request.h"
// Member `pipeline_request`
#include "openvino_msgs/msg/detail/pipeline_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openvino_msgs__srv__PipelineSrv_Request__init(message_memory);
}

void openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_fini_function(void * message_memory)
{
  openvino_msgs__srv__PipelineSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_member_array[1] = {
  {
    "pipeline_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__srv__PipelineSrv_Request, pipeline_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_members = {
  "openvino_msgs__srv",  // message namespace
  "PipelineSrv_Request",  // message name
  1,  // number of fields
  sizeof(openvino_msgs__srv__PipelineSrv_Request),
  openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_member_array,  // message members
  openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_type_support_handle = {
  0,
  &openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv_Request)() {
  openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, msg, PipelineRequest)();
  if (!openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_type_support_handle.typesupport_identifier) {
    openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &openvino_msgs__srv__PipelineSrv_Request__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "openvino_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__functions.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__struct.h"


// Include directives for member types
// Member `pipelines`
#include "openvino_msgs/msg/pipeline.h"
// Member `pipelines`
#include "openvino_msgs/msg/detail/pipeline__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openvino_msgs__srv__PipelineSrv_Response__init(message_memory);
}

void openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_fini_function(void * message_memory)
{
  openvino_msgs__srv__PipelineSrv_Response__fini(message_memory);
}

size_t openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__size_function__PipelineSrv_Response__pipelines(
  const void * untyped_member)
{
  const openvino_msgs__msg__Pipeline__Sequence * member =
    (const openvino_msgs__msg__Pipeline__Sequence *)(untyped_member);
  return member->size;
}

const void * openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__get_const_function__PipelineSrv_Response__pipelines(
  const void * untyped_member, size_t index)
{
  const openvino_msgs__msg__Pipeline__Sequence * member =
    (const openvino_msgs__msg__Pipeline__Sequence *)(untyped_member);
  return &member->data[index];
}

void * openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__get_function__PipelineSrv_Response__pipelines(
  void * untyped_member, size_t index)
{
  openvino_msgs__msg__Pipeline__Sequence * member =
    (openvino_msgs__msg__Pipeline__Sequence *)(untyped_member);
  return &member->data[index];
}

void openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__fetch_function__PipelineSrv_Response__pipelines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const openvino_msgs__msg__Pipeline * item =
    ((const openvino_msgs__msg__Pipeline *)
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__get_const_function__PipelineSrv_Response__pipelines(untyped_member, index));
  openvino_msgs__msg__Pipeline * value =
    (openvino_msgs__msg__Pipeline *)(untyped_value);
  *value = *item;
}

void openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__assign_function__PipelineSrv_Response__pipelines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  openvino_msgs__msg__Pipeline * item =
    ((openvino_msgs__msg__Pipeline *)
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__get_function__PipelineSrv_Response__pipelines(untyped_member, index));
  const openvino_msgs__msg__Pipeline * value =
    (const openvino_msgs__msg__Pipeline *)(untyped_value);
  *item = *value;
}

bool openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__resize_function__PipelineSrv_Response__pipelines(
  void * untyped_member, size_t size)
{
  openvino_msgs__msg__Pipeline__Sequence * member =
    (openvino_msgs__msg__Pipeline__Sequence *)(untyped_member);
  openvino_msgs__msg__Pipeline__Sequence__fini(member);
  return openvino_msgs__msg__Pipeline__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_member_array[1] = {
  {
    "pipelines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openvino_msgs__srv__PipelineSrv_Response, pipelines),  // bytes offset in struct
    NULL,  // default value
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__size_function__PipelineSrv_Response__pipelines,  // size() function pointer
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__get_const_function__PipelineSrv_Response__pipelines,  // get_const(index) function pointer
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__get_function__PipelineSrv_Response__pipelines,  // get(index) function pointer
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__fetch_function__PipelineSrv_Response__pipelines,  // fetch(index, &value) function pointer
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__assign_function__PipelineSrv_Response__pipelines,  // assign(index, value) function pointer
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__resize_function__PipelineSrv_Response__pipelines  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_members = {
  "openvino_msgs__srv",  // message namespace
  "PipelineSrv_Response",  // message name
  1,  // number of fields
  sizeof(openvino_msgs__srv__PipelineSrv_Response),
  openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_member_array,  // message members
  openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_type_support_handle = {
  0,
  &openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openvino_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv_Response)() {
  openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, msg, Pipeline)();
  if (!openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_type_support_handle.typesupport_identifier) {
    openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &openvino_msgs__srv__PipelineSrv_Response__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "openvino_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_members = {
  "openvino_msgs__srv",  // service namespace
  "PipelineSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_Request_message_type_support_handle,
  NULL  // response message
  // openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_type_support_handle = {
  0,
  &openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openvino_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv)() {
  if (!openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_type_support_handle.typesupport_identifier) {
    openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openvino_msgs, srv, PipelineSrv_Response)()->data;
  }

  return &openvino_msgs__srv__detail__pipeline_srv__rosidl_typesupport_introspection_c__PipelineSrv_service_type_support_handle;
}
