// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from object_msgs:msg/PerfValue.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__FUNCTIONS_H_
#define OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_msgs/msg/detail/perf_value__struct.h"

/// Initialize msg/PerfValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_msgs__msg__PerfValue
 * )) before or use
 * object_msgs__msg__PerfValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PerfValue__init(object_msgs__msg__PerfValue * msg);

/// Finalize msg/PerfValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PerfValue__fini(object_msgs__msg__PerfValue * msg);

/// Create msg/PerfValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_msgs__msg__PerfValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__PerfValue *
object_msgs__msg__PerfValue__create();

/// Destroy msg/PerfValue message.
/**
 * It calls
 * object_msgs__msg__PerfValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PerfValue__destroy(object_msgs__msg__PerfValue * msg);

/// Check for msg/PerfValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PerfValue__are_equal(const object_msgs__msg__PerfValue * lhs, const object_msgs__msg__PerfValue * rhs);

/// Copy a msg/PerfValue message.
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
object_msgs__msg__PerfValue__copy(
  const object_msgs__msg__PerfValue * input,
  object_msgs__msg__PerfValue * output);

/// Initialize array of msg/PerfValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_msgs__msg__PerfValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PerfValue__Sequence__init(object_msgs__msg__PerfValue__Sequence * array, size_t size);

/// Finalize array of msg/PerfValue messages.
/**
 * It calls
 * object_msgs__msg__PerfValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PerfValue__Sequence__fini(object_msgs__msg__PerfValue__Sequence * array);

/// Create array of msg/PerfValue messages.
/**
 * It allocates the memory for the array and calls
 * object_msgs__msg__PerfValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__PerfValue__Sequence *
object_msgs__msg__PerfValue__Sequence__create(size_t size);

/// Destroy array of msg/PerfValue messages.
/**
 * It calls
 * object_msgs__msg__PerfValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__PerfValue__Sequence__destroy(object_msgs__msg__PerfValue__Sequence * array);

/// Check for msg/PerfValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__PerfValue__Sequence__are_equal(const object_msgs__msg__PerfValue__Sequence * lhs, const object_msgs__msg__PerfValue__Sequence * rhs);

/// Copy an array of msg/PerfValue messages.
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
object_msgs__msg__PerfValue__Sequence__copy(
  const object_msgs__msg__PerfValue__Sequence * input,
  object_msgs__msg__PerfValue__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__DETAIL__PERF_VALUE__FUNCTIONS_H_
