// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
/**
  * Adds the object to the planning scene. If the object previously existed, it is replaced.
 */
enum
{
  moveit_msgs__msg__CollisionObject__ADD = 0
};

/// Constant 'REMOVE'.
/**
  * Removes the object from the environment entirely (everything that matches the specified id)
 */
enum
{
  moveit_msgs__msg__CollisionObject__REMOVE = 1
};

/// Constant 'APPEND'.
/**
  * Append to an object that already exists in the planning scene. If the does not exist, it is added.
 */
enum
{
  moveit_msgs__msg__CollisionObject__APPEND = 2
};

/// Constant 'MOVE'.
/**
  * If an object already exists in the scene, new poses can be sent (the geometry arrays must be left empty)
  * if solely moving the object is desired
 */
enum
{
  moveit_msgs__msg__CollisionObject__MOVE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'type'
#include "moveit_msgs/msg/detail/object_type__struct.h"
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__struct.h"
// Member 'primitive_poses'
// Member 'mesh_poses'
// Member 'plane_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__struct.h"
// Member 'planes'
#include "shape_msgs/msg/detail/plane__struct.h"

/// Struct defined in msg/CollisionObject in the package moveit_msgs.
/**
  * a header, used for interpreting the poses
 */
typedef struct moveit_msgs__msg__CollisionObject
{
  std_msgs__msg__Header header;
  /// the id of the object (name used in MoveIt)
  rosidl_runtime_c__String id;
  /// The object type in a database of known objects
  moveit_msgs__msg__ObjectType type;
  /// the the collision geometries associated with the object;
  /// their poses are with respect to the specified header
  /// solid geometric primitives
  shape_msgs__msg__SolidPrimitive__Sequence primitives;
  geometry_msgs__msg__Pose__Sequence primitive_poses;
  /// meshes
  shape_msgs__msg__Mesh__Sequence meshes;
  geometry_msgs__msg__Pose__Sequence mesh_poses;
  /// bounding planes (equation is specified, but the plane can be oriented using an additional pose)
  shape_msgs__msg__Plane__Sequence planes;
  geometry_msgs__msg__Pose__Sequence plane_poses;
  /// Operation to be performed
  uint8_t operation;
} moveit_msgs__msg__CollisionObject;

// Struct for a sequence of moveit_msgs__msg__CollisionObject.
typedef struct moveit_msgs__msg__CollisionObject__Sequence
{
  moveit_msgs__msg__CollisionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CollisionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__STRUCT_H_
