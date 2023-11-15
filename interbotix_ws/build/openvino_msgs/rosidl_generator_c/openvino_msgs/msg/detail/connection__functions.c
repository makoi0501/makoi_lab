// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openvino_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "openvino_msgs/msg/detail/connection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `input`
// Member `output`
#include "rosidl_runtime_c/string_functions.h"

bool
openvino_msgs__msg__Connection__init(openvino_msgs__msg__Connection * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__init(&msg->input)) {
    openvino_msgs__msg__Connection__fini(msg);
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__init(&msg->output)) {
    openvino_msgs__msg__Connection__fini(msg);
    return false;
  }
  return true;
}

void
openvino_msgs__msg__Connection__fini(openvino_msgs__msg__Connection * msg)
{
  if (!msg) {
    return;
  }
  // input
  rosidl_runtime_c__String__fini(&msg->input);
  // output
  rosidl_runtime_c__String__fini(&msg->output);
}

bool
openvino_msgs__msg__Connection__are_equal(const openvino_msgs__msg__Connection * lhs, const openvino_msgs__msg__Connection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
openvino_msgs__msg__Connection__copy(
  const openvino_msgs__msg__Connection * input,
  openvino_msgs__msg__Connection * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

openvino_msgs__msg__Connection *
openvino_msgs__msg__Connection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__msg__Connection * msg = (openvino_msgs__msg__Connection *)allocator.allocate(sizeof(openvino_msgs__msg__Connection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openvino_msgs__msg__Connection));
  bool success = openvino_msgs__msg__Connection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openvino_msgs__msg__Connection__destroy(openvino_msgs__msg__Connection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openvino_msgs__msg__Connection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openvino_msgs__msg__Connection__Sequence__init(openvino_msgs__msg__Connection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__msg__Connection * data = NULL;

  if (size) {
    data = (openvino_msgs__msg__Connection *)allocator.zero_allocate(size, sizeof(openvino_msgs__msg__Connection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openvino_msgs__msg__Connection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openvino_msgs__msg__Connection__fini(&data[i - 1]);
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
openvino_msgs__msg__Connection__Sequence__fini(openvino_msgs__msg__Connection__Sequence * array)
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
      openvino_msgs__msg__Connection__fini(&array->data[i]);
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

openvino_msgs__msg__Connection__Sequence *
openvino_msgs__msg__Connection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openvino_msgs__msg__Connection__Sequence * array = (openvino_msgs__msg__Connection__Sequence *)allocator.allocate(sizeof(openvino_msgs__msg__Connection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openvino_msgs__msg__Connection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openvino_msgs__msg__Connection__Sequence__destroy(openvino_msgs__msg__Connection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openvino_msgs__msg__Connection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openvino_msgs__msg__Connection__Sequence__are_equal(const openvino_msgs__msg__Connection__Sequence * lhs, const openvino_msgs__msg__Connection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openvino_msgs__msg__Connection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openvino_msgs__msg__Connection__Sequence__copy(
  const openvino_msgs__msg__Connection__Sequence * input,
  openvino_msgs__msg__Connection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openvino_msgs__msg__Connection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openvino_msgs__msg__Connection * data =
      (openvino_msgs__msg__Connection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openvino_msgs__msg__Connection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openvino_msgs__msg__Connection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openvino_msgs__msg__Connection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
