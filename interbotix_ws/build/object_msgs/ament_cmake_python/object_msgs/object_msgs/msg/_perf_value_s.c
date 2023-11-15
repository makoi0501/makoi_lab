// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from object_msgs:msg/PerfValue.idl
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
#include "object_msgs/msg/detail/perf_value__struct.h"
#include "object_msgs/msg/detail/perf_value__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool object_msgs__msg__perf_value__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("object_msgs.msg._perf_value.PerfValue", full_classname_dest, 37) == 0);
  }
  object_msgs__msg__PerfValue * ros_message = _ros_message;
  {  // average
    PyObject * field = PyObject_GetAttrString(_pymsg, "average");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min
    PyObject * field = PyObject_GetAttrString(_pymsg, "min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max
    PyObject * field = PyObject_GetAttrString(_pymsg, "max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // window
    PyObject * field = PyObject_GetAttrString(_pymsg, "window");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->window = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * object_msgs__msg__perf_value__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PerfValue */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("object_msgs.msg._perf_value");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PerfValue");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  object_msgs__msg__PerfValue * ros_message = (object_msgs__msg__PerfValue *)raw_ros_message;
  {  // average
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // window
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->window);
    {
      int rc = PyObject_SetAttrString(_pymessage, "window", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
