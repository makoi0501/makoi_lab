// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from original_interface:srv/TargetPos.idl
// generated code does not contain a copyright notice
#include "original_interface/srv/detail/target_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
original_interface__srv__TargetPos_Request__init(original_interface__srv__TargetPos_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_num
  return true;
}

void
original_interface__srv__TargetPos_Request__fini(original_interface__srv__TargetPos_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_num
}

bool
original_interface__srv__TargetPos_Request__are_equal(const original_interface__srv__TargetPos_Request * lhs, const original_interface__srv__TargetPos_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_num
  if (lhs->target_num != rhs->target_num) {
    return false;
  }
  return true;
}

bool
original_interface__srv__TargetPos_Request__copy(
  const original_interface__srv__TargetPos_Request * input,
  original_interface__srv__TargetPos_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_num
  output->target_num = input->target_num;
  return true;
}

original_interface__srv__TargetPos_Request *
original_interface__srv__TargetPos_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  original_interface__srv__TargetPos_Request * msg = (original_interface__srv__TargetPos_Request *)allocator.allocate(sizeof(original_interface__srv__TargetPos_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(original_interface__srv__TargetPos_Request));
  bool success = original_interface__srv__TargetPos_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
original_interface__srv__TargetPos_Request__destroy(original_interface__srv__TargetPos_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    original_interface__srv__TargetPos_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
original_interface__srv__TargetPos_Request__Sequence__init(original_interface__srv__TargetPos_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  original_interface__srv__TargetPos_Request * data = NULL;

  if (size) {
    data = (original_interface__srv__TargetPos_Request *)allocator.zero_allocate(size, sizeof(original_interface__srv__TargetPos_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = original_interface__srv__TargetPos_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        original_interface__srv__TargetPos_Request__fini(&data[i - 1]);
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
original_interface__srv__TargetPos_Request__Sequence__fini(original_interface__srv__TargetPos_Request__Sequence * array)
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
      original_interface__srv__TargetPos_Request__fini(&array->data[i]);
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

original_interface__srv__TargetPos_Request__Sequence *
original_interface__srv__TargetPos_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  original_interface__srv__TargetPos_Request__Sequence * array = (original_interface__srv__TargetPos_Request__Sequence *)allocator.allocate(sizeof(original_interface__srv__TargetPos_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = original_interface__srv__TargetPos_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
original_interface__srv__TargetPos_Request__Sequence__destroy(original_interface__srv__TargetPos_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    original_interface__srv__TargetPos_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
original_interface__srv__TargetPos_Request__Sequence__are_equal(const original_interface__srv__TargetPos_Request__Sequence * lhs, const original_interface__srv__TargetPos_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!original_interface__srv__TargetPos_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
original_interface__srv__TargetPos_Request__Sequence__copy(
  const original_interface__srv__TargetPos_Request__Sequence * input,
  original_interface__srv__TargetPos_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(original_interface__srv__TargetPos_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    original_interface__srv__TargetPos_Request * data =
      (original_interface__srv__TargetPos_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!original_interface__srv__TargetPos_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          original_interface__srv__TargetPos_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!original_interface__srv__TargetPos_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
original_interface__srv__TargetPos_Response__init(original_interface__srv__TargetPos_Response * msg)
{
  if (!msg) {
    return false;
  }
  // targetx
  // targety
  // targetz
  // success
  return true;
}

void
original_interface__srv__TargetPos_Response__fini(original_interface__srv__TargetPos_Response * msg)
{
  if (!msg) {
    return;
  }
  // targetx
  // targety
  // targetz
  // success
}

bool
original_interface__srv__TargetPos_Response__are_equal(const original_interface__srv__TargetPos_Response * lhs, const original_interface__srv__TargetPos_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targetx
  if (lhs->targetx != rhs->targetx) {
    return false;
  }
  // targety
  if (lhs->targety != rhs->targety) {
    return false;
  }
  // targetz
  if (lhs->targetz != rhs->targetz) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
original_interface__srv__TargetPos_Response__copy(
  const original_interface__srv__TargetPos_Response * input,
  original_interface__srv__TargetPos_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // targetx
  output->targetx = input->targetx;
  // targety
  output->targety = input->targety;
  // targetz
  output->targetz = input->targetz;
  // success
  output->success = input->success;
  return true;
}

original_interface__srv__TargetPos_Response *
original_interface__srv__TargetPos_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  original_interface__srv__TargetPos_Response * msg = (original_interface__srv__TargetPos_Response *)allocator.allocate(sizeof(original_interface__srv__TargetPos_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(original_interface__srv__TargetPos_Response));
  bool success = original_interface__srv__TargetPos_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
original_interface__srv__TargetPos_Response__destroy(original_interface__srv__TargetPos_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    original_interface__srv__TargetPos_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
original_interface__srv__TargetPos_Response__Sequence__init(original_interface__srv__TargetPos_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  original_interface__srv__TargetPos_Response * data = NULL;

  if (size) {
    data = (original_interface__srv__TargetPos_Response *)allocator.zero_allocate(size, sizeof(original_interface__srv__TargetPos_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = original_interface__srv__TargetPos_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        original_interface__srv__TargetPos_Response__fini(&data[i - 1]);
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
original_interface__srv__TargetPos_Response__Sequence__fini(original_interface__srv__TargetPos_Response__Sequence * array)
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
      original_interface__srv__TargetPos_Response__fini(&array->data[i]);
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

original_interface__srv__TargetPos_Response__Sequence *
original_interface__srv__TargetPos_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  original_interface__srv__TargetPos_Response__Sequence * array = (original_interface__srv__TargetPos_Response__Sequence *)allocator.allocate(sizeof(original_interface__srv__TargetPos_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = original_interface__srv__TargetPos_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
original_interface__srv__TargetPos_Response__Sequence__destroy(original_interface__srv__TargetPos_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    original_interface__srv__TargetPos_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
original_interface__srv__TargetPos_Response__Sequence__are_equal(const original_interface__srv__TargetPos_Response__Sequence * lhs, const original_interface__srv__TargetPos_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!original_interface__srv__TargetPos_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
original_interface__srv__TargetPos_Response__Sequence__copy(
  const original_interface__srv__TargetPos_Response__Sequence * input,
  original_interface__srv__TargetPos_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(original_interface__srv__TargetPos_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    original_interface__srv__TargetPos_Response * data =
      (original_interface__srv__TargetPos_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!original_interface__srv__TargetPos_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          original_interface__srv__TargetPos_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!original_interface__srv__TargetPos_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
