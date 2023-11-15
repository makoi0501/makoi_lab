// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg/EmotionsStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/detail/emotions_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `emotions`
#include "object_msgs/msg/detail/emotion__functions.h"

bool
object_msgs__msg__EmotionsStamped__init(object_msgs__msg__EmotionsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__EmotionsStamped__fini(msg);
    return false;
  }
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__init(&msg->emotions, 0)) {
    object_msgs__msg__EmotionsStamped__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__EmotionsStamped__fini(object_msgs__msg__EmotionsStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // emotions
  object_msgs__msg__Emotion__Sequence__fini(&msg->emotions);
}

bool
object_msgs__msg__EmotionsStamped__are_equal(const object_msgs__msg__EmotionsStamped * lhs, const object_msgs__msg__EmotionsStamped * rhs)
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
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__are_equal(
      &(lhs->emotions), &(rhs->emotions)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__msg__EmotionsStamped__copy(
  const object_msgs__msg__EmotionsStamped * input,
  object_msgs__msg__EmotionsStamped * output)
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
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__copy(
      &(input->emotions), &(output->emotions)))
  {
    return false;
  }
  return true;
}

object_msgs__msg__EmotionsStamped *
object_msgs__msg__EmotionsStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__EmotionsStamped * msg = (object_msgs__msg__EmotionsStamped *)allocator.allocate(sizeof(object_msgs__msg__EmotionsStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__EmotionsStamped));
  bool success = object_msgs__msg__EmotionsStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__EmotionsStamped__destroy(object_msgs__msg__EmotionsStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__msg__EmotionsStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__msg__EmotionsStamped__Sequence__init(object_msgs__msg__EmotionsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__EmotionsStamped * data = NULL;

  if (size) {
    data = (object_msgs__msg__EmotionsStamped *)allocator.zero_allocate(size, sizeof(object_msgs__msg__EmotionsStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__EmotionsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__EmotionsStamped__fini(&data[i - 1]);
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
object_msgs__msg__EmotionsStamped__Sequence__fini(object_msgs__msg__EmotionsStamped__Sequence * array)
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
      object_msgs__msg__EmotionsStamped__fini(&array->data[i]);
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

object_msgs__msg__EmotionsStamped__Sequence *
object_msgs__msg__EmotionsStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__msg__EmotionsStamped__Sequence * array = (object_msgs__msg__EmotionsStamped__Sequence *)allocator.allocate(sizeof(object_msgs__msg__EmotionsStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__EmotionsStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__EmotionsStamped__Sequence__destroy(object_msgs__msg__EmotionsStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__msg__EmotionsStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__msg__EmotionsStamped__Sequence__are_equal(const object_msgs__msg__EmotionsStamped__Sequence * lhs, const object_msgs__msg__EmotionsStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__msg__EmotionsStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__msg__EmotionsStamped__Sequence__copy(
  const object_msgs__msg__EmotionsStamped__Sequence * input,
  object_msgs__msg__EmotionsStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__msg__EmotionsStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__msg__EmotionsStamped * data =
      (object_msgs__msg__EmotionsStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__msg__EmotionsStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__msg__EmotionsStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__msg__EmotionsStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
