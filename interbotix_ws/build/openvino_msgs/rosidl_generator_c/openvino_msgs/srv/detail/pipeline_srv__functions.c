// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openvino_msgs:srv/PipelineSrv.idl
// generated code does not contain a copyright notice
#include "openvino_msgs/srv/detail/pipeline_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pipeline_request`
#include "openvino_msgs/msg/detail/pipeline_request__functions.h"

bool
openvino_msgs__srv__PipelineSrv_Request__init(openvino_msgs__srv__PipelineSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pipeline_request
  if (!openvino_msgs__msg__PipelineRequest__init(&msg->pipeline_request)) {
    openvino_msgs__srv__PipelineSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
openvino_msgs__srv__PipelineSrv_Request__fini(openvino_msgs__srv__PipelineSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // pipeline_request
  openvino_msgs__msg__PipelineRequest__fini(&msg->pipeline_request);
}

bool
openvino_msgs__srv__PipelineSrv_Request__are_equal(const openvino_msgs__srv__PipelineSrv_Request * lhs, const openvino_msgs__srv__PipelineSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pipeline_request
  if (!openvino_msgs__msg__PipelineRequest__are_equal(
      &(lhs->pipeline_request), &(rhs->pipeline_request)))
  {
    return false;
  }
  return true;
}

bool
openvino_msgs__srv__PipelineSrv_Request__copy(
  const openvino_msgs__srv__PipelineSrv_Request * input,
  openvino_msgs__srv__PipelineSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pipeline_request
  if (!openvino_msgs__msg__PipelineRequest__copy(
      &(input->pipeline_request), &(output->pipeline_request)))
  {
    return false;
  }
  return true;
}

openvino_msgs__srv__PipelineSrv_Request *
openvino_msgs__srv__PipelineSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__srv__PipelineSrv_Request * msg = (openvino_msgs__srv__PipelineSrv_Request *)allocator.allocate(sizeof(openvino_msgs__srv__PipelineSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openvino_msgs__srv__PipelineSrv_Request));
  bool success = openvino_msgs__srv__PipelineSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openvino_msgs__srv__PipelineSrv_Request__destroy(openvino_msgs__srv__PipelineSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openvino_msgs__srv__PipelineSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openvino_msgs__srv__PipelineSrv_Request__Sequence__init(openvino_msgs__srv__PipelineSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__srv__PipelineSrv_Request * data = NULL;

  if (size) {
    data = (openvino_msgs__srv__PipelineSrv_Request *)allocator.zero_allocate(size, sizeof(openvino_msgs__srv__PipelineSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openvino_msgs__srv__PipelineSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openvino_msgs__srv__PipelineSrv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
openvino_msgs__srv__PipelineSrv_Request__Sequence__fini(openvino_msgs__srv__PipelineSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      openvino_msgs__srv__PipelineSrv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

openvino_msgs__srv__PipelineSrv_Request__Sequence *
openvino_msgs__srv__PipelineSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__srv__PipelineSrv_Request__Sequence * array = (openvino_msgs__srv__PipelineSrv_Request__Sequence *)allocator.allocate(sizeof(openvino_msgs__srv__PipelineSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openvino_msgs__srv__PipelineSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openvino_msgs__srv__PipelineSrv_Request__Sequence__destroy(openvino_msgs__srv__PipelineSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openvino_msgs__srv__PipelineSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openvino_msgs__srv__PipelineSrv_Request__Sequence__are_equal(const openvino_msgs__srv__PipelineSrv_Request__Sequence * lhs, const openvino_msgs__srv__PipelineSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openvino_msgs__srv__PipelineSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openvino_msgs__srv__PipelineSrv_Request__Sequence__copy(
  const openvino_msgs__srv__PipelineSrv_Request__Sequence * input,
  openvino_msgs__srv__PipelineSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openvino_msgs__srv__PipelineSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openvino_msgs__srv__PipelineSrv_Request * data =
      (openvino_msgs__srv__PipelineSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openvino_msgs__srv__PipelineSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openvino_msgs__srv__PipelineSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openvino_msgs__srv__PipelineSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pipelines`
#include "openvino_msgs/msg/detail/pipeline__functions.h"

bool
openvino_msgs__srv__PipelineSrv_Response__init(openvino_msgs__srv__PipelineSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pipelines
  if (!openvino_msgs__msg__Pipeline__Sequence__init(&msg->pipelines, 0)) {
    openvino_msgs__srv__PipelineSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
openvino_msgs__srv__PipelineSrv_Response__fini(openvino_msgs__srv__PipelineSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // pipelines
  openvino_msgs__msg__Pipeline__Sequence__fini(&msg->pipelines);
}

bool
openvino_msgs__srv__PipelineSrv_Response__are_equal(const openvino_msgs__srv__PipelineSrv_Response * lhs, const openvino_msgs__srv__PipelineSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pipelines
  if (!openvino_msgs__msg__Pipeline__Sequence__are_equal(
      &(lhs->pipelines), &(rhs->pipelines)))
  {
    return false;
  }
  return true;
}

bool
openvino_msgs__srv__PipelineSrv_Response__copy(
  const openvino_msgs__srv__PipelineSrv_Response * input,
  openvino_msgs__srv__PipelineSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pipelines
  if (!openvino_msgs__msg__Pipeline__Sequence__copy(
      &(input->pipelines), &(output->pipelines)))
  {
    return false;
  }
  return true;
}

openvino_msgs__srv__PipelineSrv_Response *
openvino_msgs__srv__PipelineSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__srv__PipelineSrv_Response * msg = (openvino_msgs__srv__PipelineSrv_Response *)allocator.allocate(sizeof(openvino_msgs__srv__PipelineSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openvino_msgs__srv__PipelineSrv_Response));
  bool success = openvino_msgs__srv__PipelineSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openvino_msgs__srv__PipelineSrv_Response__destroy(openvino_msgs__srv__PipelineSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openvino_msgs__srv__PipelineSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openvino_msgs__srv__PipelineSrv_Response__Sequence__init(openvino_msgs__srv__PipelineSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__srv__PipelineSrv_Response * data = NULL;

  if (size) {
    data = (openvino_msgs__srv__PipelineSrv_Response *)allocator.zero_allocate(size, sizeof(openvino_msgs__srv__PipelineSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openvino_msgs__srv__PipelineSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openvino_msgs__srv__PipelineSrv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
openvino_msgs__srv__PipelineSrv_Response__Sequence__fini(openvino_msgs__srv__PipelineSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      openvino_msgs__srv__PipelineSrv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

openvino_msgs__srv__PipelineSrv_Response__Sequence *
openvino_msgs__srv__PipelineSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__srv__PipelineSrv_Response__Sequence * array = (openvino_msgs__srv__PipelineSrv_Response__Sequence *)allocator.allocate(sizeof(openvino_msgs__srv__PipelineSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openvino_msgs__srv__PipelineSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openvino_msgs__srv__PipelineSrv_Response__Sequence__destroy(openvino_msgs__srv__PipelineSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openvino_msgs__srv__PipelineSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openvino_msgs__srv__PipelineSrv_Response__Sequence__are_equal(const openvino_msgs__srv__PipelineSrv_Response__Sequence * lhs, const openvino_msgs__srv__PipelineSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openvino_msgs__srv__PipelineSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openvino_msgs__srv__PipelineSrv_Response__Sequence__copy(
  const openvino_msgs__srv__PipelineSrv_Response__Sequence * input,
  openvino_msgs__srv__PipelineSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openvino_msgs__srv__PipelineSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openvino_msgs__srv__PipelineSrv_Response * data =
      (openvino_msgs__srv__PipelineSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openvino_msgs__srv__PipelineSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openvino_msgs__srv__PipelineSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openvino_msgs__srv__PipelineSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
