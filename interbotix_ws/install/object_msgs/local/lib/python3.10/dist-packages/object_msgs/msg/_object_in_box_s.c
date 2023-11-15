// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from object_msgs:msg/ObjectInBox.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "object_msgs/msg/detail/object_in_box__struct.h"
#include "object_msgs/msg/detail/object_in_box__functions.h"

bool object_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * object_msgs__msg__object__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__region_of_interest__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__region_of_interest__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool object_msgs__msg__object_in_box__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("object_msgs.msg._object_in_box.ObjectInBox", full_classname_dest, 42) == 0);
  }
  object_msgs__msg__ObjectInBox * ros_message = _ros_message;
  {  // object
    PyObject * field = PyObject_GetAttrString(_pymsg, "object");
    if (!field) {
      return false;
    }
    if (!object_msgs__msg__object__convert_from_py(field, &ros_message->object)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // roi
    PyObject * field = PyObject_GetAttrString(_pymsg, "roi");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__region_of_interest__convert_from_py(field, &ros_message->roi)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * object_msgs__msg__object_in_box__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectInBox */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("object_msgs.msg._object_in_box");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectInBox");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  object_msgs__msg__ObjectInBox * ros_message = (object_msgs__msg__ObjectInBox *)raw_ros_message;
  {  // object
    PyObject * field = NULL;
    field = object_msgs__msg__object__convert_to_py(&ros_message->object);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roi
    PyObject * field = NULL;
    field = sensor_msgs__msg__region_of_interest__convert_to_py(&ros_message->roi);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "roi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
