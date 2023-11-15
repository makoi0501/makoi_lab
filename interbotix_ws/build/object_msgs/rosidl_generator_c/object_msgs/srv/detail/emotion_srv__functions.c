// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:srv/EmotionSrv.idl
// generated code does not contain a copyright notice
#include "object_msgs/srv/detail/emotion_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image_path`
#include "rosidl_runtime_c/string_functions.h"

bool
object_msgs__srv__EmotionSrv_Request__init(object_msgs__srv__EmotionSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image_path
  if (!rosidl_runtime_c__String__init(&msg->image_path)) {
    object_msgs__srv__EmotionSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__srv__EmotionSrv_Request__fini(object_msgs__srv__EmotionSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // image_path
  rosidl_runtime_c__String__fini(&msg->image_path);
}

bool
object_msgs__srv__EmotionSrv_Request__are_equal(const object_msgs__srv__EmotionSrv_Request * lhs, const object_msgs__srv__EmotionSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->image_path), &(rhs->image_path)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__srv__EmotionSrv_Request__copy(
  const object_msgs__srv__EmotionSrv_Request * input,
  object_msgs__srv__EmotionSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image_path
  if (!rosidl_runtime_c__String__copy(
      &(input->image_path), &(output->image_path)))
  {
    return false;
  }
  return true;
}

object_msgs__srv__EmotionSrv_Request *
object_msgs__srv__EmotionSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__srv__EmotionSrv_Request * msg = (object_msgs__srv__EmotionSrv_Request *)allocator.allocate(sizeof(object_msgs__srv__EmotionSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__srv__EmotionSrv_Request));
  bool success = object_msgs__srv__EmotionSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__srv__EmotionSrv_Request__destroy(object_msgs__srv__EmotionSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__srv__EmotionSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__srv__EmotionSrv_Request__Sequence__init(object_msgs__srv__EmotionSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__srv__EmotionSrv_Request * data = NULL;

  if (size) {
    data = (object_msgs__srv__EmotionSrv_Request *)allocator.zero_allocate(size, sizeof(object_msgs__srv__EmotionSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__srv__EmotionSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__srv__EmotionSrv_Request__fini(&data[i - 1]);
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
object_msgs__srv__EmotionSrv_Request__Sequence__fini(object_msgs__srv__EmotionSrv_Request__Sequence * array)
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
      object_msgs__srv__EmotionSrv_Request__fini(&array->data[i]);
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

object_msgs__srv__EmotionSrv_Request__Sequence *
object_msgs__srv__EmotionSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__srv__EmotionSrv_Request__Sequence * array = (object_msgs__srv__EmotionSrv_Request__Sequence *)allocator.allocate(sizeof(object_msgs__srv__EmotionSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__srv__EmotionSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__srv__EmotionSrv_Request__Sequence__destroy(object_msgs__srv__EmotionSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__srv__EmotionSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__srv__EmotionSrv_Request__Sequence__are_equal(const object_msgs__srv__EmotionSrv_Request__Sequence * lhs, const object_msgs__srv__EmotionSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__srv__EmotionSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__srv__EmotionSrv_Request__Sequence__copy(
  const object_msgs__srv__EmotionSrv_Request__Sequence * input,
  object_msgs__srv__EmotionSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__srv__EmotionSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__srv__EmotionSrv_Request * data =
      (object_msgs__srv__EmotionSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__srv__EmotionSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__srv__EmotionSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__srv__EmotionSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `emotion`
#include "object_msgs/msg/detail/emotions_stamped__functions.h"

bool
object_msgs__srv__EmotionSrv_Response__init(object_msgs__srv__EmotionSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // emotion
  if (!object_msgs__msg__EmotionsStamped__init(&msg->emotion)) {
    object_msgs__srv__EmotionSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
object_msgs__srv__EmotionSrv_Response__fini(object_msgs__srv__EmotionSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // emotion
  object_msgs__msg__EmotionsStamped__fini(&msg->emotion);
}

bool
object_msgs__srv__EmotionSrv_Response__are_equal(const object_msgs__srv__EmotionSrv_Response * lhs, const object_msgs__srv__EmotionSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // emotion
  if (!object_msgs__msg__EmotionsStamped__are_equal(
      &(lhs->emotion), &(rhs->emotion)))
  {
    return false;
  }
  return true;
}

bool
object_msgs__srv__EmotionSrv_Response__copy(
  const object_msgs__srv__EmotionSrv_Response * input,
  object_msgs__srv__EmotionSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // emotion
  if (!object_msgs__msg__EmotionsStamped__copy(
      &(input->emotion), &(output->emotion)))
  {
    return false;
  }
  return true;
}

object_msgs__srv__EmotionSrv_Response *
object_msgs__srv__EmotionSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__srv__EmotionSrv_Response * msg = (object_msgs__srv__EmotionSrv_Response *)allocator.allocate(sizeof(object_msgs__srv__EmotionSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__srv__EmotionSrv_Response));
  bool success = object_msgs__srv__EmotionSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_msgs__srv__EmotionSrv_Response__destroy(object_msgs__srv__EmotionSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_msgs__srv__EmotionSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_msgs__srv__EmotionSrv_Response__Sequence__init(object_msgs__srv__EmotionSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__srv__EmotionSrv_Response * data = NULL;

  if (size) {
    data = (object_msgs__srv__EmotionSrv_Response *)allocator.zero_allocate(size, sizeof(object_msgs__srv__EmotionSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__srv__EmotionSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__srv__EmotionSrv_Response__fini(&data[i - 1]);
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
object_msgs__srv__EmotionSrv_Response__Sequence__fini(object_msgs__srv__EmotionSrv_Response__Sequence * array)
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
      object_msgs__srv__EmotionSrv_Response__fini(&array->data[i]);
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

object_msgs__srv__EmotionSrv_Response__Sequence *
object_msgs__srv__EmotionSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_msgs__srv__EmotionSrv_Response__Sequence * array = (object_msgs__srv__EmotionSrv_Response__Sequence *)allocator.allocate(sizeof(object_msgs__srv__EmotionSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__srv__EmotionSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_msgs__srv__EmotionSrv_Response__Sequence__destroy(object_msgs__srv__EmotionSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_msgs__srv__EmotionSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_msgs__srv__EmotionSrv_Response__Sequence__are_equal(const object_msgs__srv__EmotionSrv_Response__Sequence * lhs, const object_msgs__srv__EmotionSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_msgs__srv__EmotionSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_msgs__srv__EmotionSrv_Response__Sequence__copy(
  const object_msgs__srv__EmotionSrv_Response__Sequence * input,
  object_msgs__srv__EmotionSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_msgs__srv__EmotionSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_msgs__srv__EmotionSrv_Response * data =
      (object_msgs__srv__EmotionSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_msgs__srv__EmotionSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_msgs__srv__EmotionSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_msgs__srv__EmotionSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
