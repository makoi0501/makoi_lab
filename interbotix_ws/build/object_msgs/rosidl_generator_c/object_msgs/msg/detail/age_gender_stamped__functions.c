// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/AgeGenderStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/age_gender_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "object_msgs/msg/detail/age_gender__functions.h"

bool
object_msgs__msg__AgeGenderStamped__init(object_msgs__msg__AgeGenderStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__AgeGenderStamped__fini(msg);
    return false;
  }
  // objects
  if (!object_msgs__msg__AgeGender__Sequence__init(&msg->objects, 0)) {
    object_msgs__msg__AgeGenderStamped__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__AgeGenderStamped__fini(object_msgs__msg__AgeGenderStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  object_msgs__msg__AgeGender__Sequence__fini(&msg->objects);
}

bool
object_msgs__msg__AgeGenderStamped__are_equal(const object_msgs__msg__AgeGenderStamped * lhs, const object_msgs__msg__AgeGenderStamped * rhs)
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
  // objects
  if (!object_msgs__msg__AgeGender__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__msg__AgeGenderStamped__copy(
  const object_msgs__msg__AgeGenderStamped * input,
  object_msgs__msg__AgeGenderStamped * output)
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
  // objects
  if (!object_msgs__msg__AgeGender__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

object_msgs__msg__AgeGenderStamped *
object_msgs__msg__AgeGenderStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__AgeGenderStamped * msg = (object_msgs__msg__AgeGenderStamped *)allocator.allocate(sizeof(object_msgs__msg__AgeGenderStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__AgeGenderStamped));
  bool success = object_msgs__msg__AgeGenderStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__AgeGenderStamped__destroy(object_msgs__msg__AgeGenderStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__AgeGenderStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__AgeGenderStamped__Sequence__init(object_msgs__msg__AgeGenderStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__AgeGenderStamped * data = NULL;

  if (size) {
    data = (object_msgs__msg__AgeGenderStamped *)allocator.zero_allocate(size, sizeof(object_msgs__msg__AgeGenderStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__AgeGenderStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__AgeGenderStamped__fini(&data[i - 1]);
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
object_msgs__msg__AgeGenderStamped__Sequence__fini(object_msgs__msg__AgeGenderStamped__Sequence * array)
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
      object_msgs__msg__AgeGenderStamped__fini(&array->data[i]);
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

object_msgs__msg__AgeGenderStamped__Sequence *
object_msgs__msg__AgeGenderStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__AgeGenderStamped__Sequence * array = (object_msgs__msg__AgeGenderStamped__Sequence *)allocator.allocate(sizeof(object_msgs__msg__AgeGenderStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__AgeGenderStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__AgeGenderStamped__Sequence__destroy(object_msgs__msg__AgeGenderStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__AgeGenderStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__AgeGenderStamped__Sequence__are_equal(const object_msgs__msg__AgeGenderStamped__Sequence * lhs, const object_msgs__msg__AgeGenderStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__AgeGenderStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__AgeGenderStamped__Sequence__copy(
  const object_msgs__msg__AgeGenderStamped__Sequence * input,
  object_msgs__msg__AgeGenderStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__AgeGenderStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__AgeGenderStamped * data =
      (object_msgs__msg__AgeGenderStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__AgeGenderStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__AgeGenderStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__AgeGenderStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
