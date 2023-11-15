// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from object_msgs:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__EMOTION__FUNCTIONS_H_
#define OBJECT_MSGS__MSG__DETAIL__EMOTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_msgs/msg/detail/emotion__struct.h"

/// Initialize msg/Emotion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_msgs__msg__Emotion
 * )) before or use
 * object_msgs__msg__Emotion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Emotion__init(object_msgs__msg__Emotion * msg);

/// Finalize msg/Emotion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Emotion__fini(object_msgs__msg__Emotion * msg);

/// Create msg/Emotion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_msgs__msg__Emotion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__Emotion *
object_msgs__msg__Emotion__create();

/// Destroy msg/Emotion message.
/**
 * It calls
 * object_msgs__msg__Emotion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Emotion__destroy(object_msgs__msg__Emotion * msg);

/// Check for msg/Emotion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Emotion__are_equal(const object_msgs__msg__Emotion * lhs, const object_msgs__msg__Emotion * rhs);

/// Copy a msg/Emotion message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Emotion__copy(
  const object_msgs__msg__Emotion * input,
  object_msgs__msg__Emotion * output);

/// Initialize array of msg/Emotion messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_msgs__msg__Emotion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Emotion__Sequence__init(object_msgs__msg__Emotion__Sequence * array, size_t size);

/// Finalize array of msg/Emotion messages.
/**
 * It calls
 * object_msgs__msg__Emotion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Emotion__Sequence__fini(object_msgs__msg__Emotion__Sequence * array);

/// Create array of msg/Emotion messages.
/**
 * It allocates the memory for the array and calls
 * object_msgs__msg__Emotion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__Emotion__Sequence *
object_msgs__msg__Emotion__Sequence__create(size_t size);

/// Destroy array of msg/Emotion messages.
/**
 * It calls
 * object_msgs__msg__Emotion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Emotion__Sequence__destroy(object_msgs__msg__Emotion__Sequence * array);

/// Check for msg/Emotion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Emotion__Sequence__are_equal(const object_msgs__msg__Emotion__Sequence * lhs, const object_msgs__msg__Emotion__Sequence * rhs);

/// Copy an array of msg/Emotion messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Emotion__Sequence__copy(
  const object_msgs__msg__Emotion__Sequence * input,
  object_msgs__msg__Emotion__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__EMOTION__FUNCTIONS_H_
