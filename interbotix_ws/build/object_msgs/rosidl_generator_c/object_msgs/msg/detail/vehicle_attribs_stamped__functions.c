// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/VehicleAttribsStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/vehicle_attribs_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vehicles`
#include "object_msgs/msg/detail/vehicle_attribs__functions.h"

bool
object_msgs__msg__VehicleAttribsStamped__init(object_msgs__msg__VehicleAttribsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__VehicleAttribsStamped__fini(msg);
    return false;
  }
  // vehicles
  if (!object_msgs__msg__VehicleAttribs__Sequence__init(&msg->vehicles, 0)) {
    object_msgs__msg__VehicleAttribsStamped__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__VehicleAttribsStamped__fini(object_msgs__msg__VehicleAttribsStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicles
  object_msgs__msg__VehicleAttribs__Sequence__fini(&msg->vehicles);
}

bool
object_msgs__msg__VehicleAttribsStamped__are_equal(const object_msgs__msg__VehicleAttribsStamped * lhs, const object_msgs__msg__VehicleAttribsStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicles
  if (!object_msgs__msg__VehicleAttribs__Sequence__are_equal(
      &(lhs->vehicles), &(rhs->vehicles)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__msg__VehicleAttribsStamped__copy(
  const object_msgs__msg__VehicleAttribsStamped * input,
  object_msgs__msg__VehicleAttribsStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicles
  if (!object_msgs__msg__VehicleAttribs__Sequence__copy(
      &(input->vehicles), &(output->vehicles)))
  {
    return false;
  }
  return true;
}

object_msgs__msg__VehicleAttribsStamped *
object_msgs__msg__VehicleAttribsStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__VehicleAttribsStamped * msg = (object_msgs__msg__VehicleAttribsStamped *)allocator.allocate(sizeof(object_msgs__msg__VehicleAttribsStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__VehicleAttribsStamped));
  bool success = object_msgs__msg__VehicleAttribsStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__VehicleAttribsStamped__destroy(object_msgs__msg__VehicleAttribsStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__VehicleAttribsStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__VehicleAttribsStamped__Sequence__init(object_msgs__msg__VehicleAttribsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__VehicleAttribsStamped * data = NULL;

  if (size) {
    data = (object_msgs__msg__VehicleAttribsStamped *)allocator.zero_allocate(size, sizeof(object_msgs__msg__VehicleAttribsStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__VehicleAttribsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__VehicleAttribsStamped__fini(&data[i - 1]);
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
object_msgs__msg__VehicleAttribsStamped__Sequence__fini(object_msgs__msg__VehicleAttribsStamped__Sequence * array)
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
      object_msgs__msg__VehicleAttribsStamped__fini(&array->data[i]);
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

object_msgs__msg__VehicleAttribsStamped__Sequence *
object_msgs__msg__VehicleAttribsStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__VehicleAttribsStamped__Sequence * array = (object_msgs__msg__VehicleAttribsStamped__Sequence *)allocator.allocate(sizeof(object_msgs__msg__VehicleAttribsStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__VehicleAttribsStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__VehicleAttribsStamped__Sequence__destroy(object_msgs__msg__VehicleAttribsStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__VehicleAttribsStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__VehicleAttribsStamped__Sequence__are_equal(const object_msgs__msg__VehicleAttribsStamped__Sequence * lhs, const object_msgs__msg__VehicleAttribsStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__VehicleAttribsStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__VehicleAttribsStamped__Sequence__copy(
  const object_msgs__msg__VehicleAttribsStamped__Sequence * input,
  object_msgs__msg__VehicleAttribsStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__VehicleAttribsStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__VehicleAttribsStamped * data =
      (object_msgs__msg__VehicleAttribsStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__VehicleAttribsStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__VehicleAttribsStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__VehicleAttribsStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
