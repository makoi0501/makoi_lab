// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from openvino_msgs:srv/PipelineSrv.idl
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
#include "openvino_msgs/srv/detail/pipeline_srv__struct.h"
#include "openvino_msgs/srv/detail/pipeline_srv__functions.h"

bool openvino_msgs__msg__pipeline_request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * openvino_msgs__msg__pipeline_request__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool openvino_msgs__srv__pipeline_srv__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("openvino_msgs.srv._pipeline_srv.PipelineSrv_Request", full_classname_dest, 51) == 0);
  }
  openvino_msgs__srv__PipelineSrv_Request * ros_message = _ros_message;
  {  // pipeline_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "pipeline_request");
    if (!field) {
      return false;
    }
    if (!openvino_msgs__msg__pipeline_request__convert_from_py(field, &ros_message->pipeline_request)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * openvino_msgs__srv__pipeline_srv__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PipelineSrv_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("openvino_msgs.srv._pipeline_srv");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PipelineSrv_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  openvino_msgs__srv__PipelineSrv_Request * ros_message = (openvino_msgs__srv__PipelineSrv_Request *)raw_ros_message;
  {  // pipeline_request
    PyObject * field = NULL;
    field = openvino_msgs__msg__pipeline_request__convert_to_py(&ros_message->pipeline_request);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pipeline_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__struct.h"
// already included above
// #include "openvino_msgs/srv/detail/pipeline_srv__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "openvino_msgs/msg/detail/pipeline__functions.h"
// end nested array functions include
bool openvino_msgs__msg__pipeline__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * openvino_msgs__msg__pipeline__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool openvino_msgs__srv__pipeline_srv__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("openvino_msgs.srv._pipeline_srv.PipelineSrv_Response", full_classname_dest, 52) == 0);
  }
  openvino_msgs__srv__PipelineSrv_Response * ros_message = _ros_message;
  {  // pipelines
    PyObject * field = PyObject_GetAttrString(_pymsg, "pipelines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pipelines'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!openvino_msgs__msg__Pipeline__Sequence__init(&(ros_message->pipelines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create openvino_msgs__msg__Pipeline__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    openvino_msgs__msg__Pipeline * dest = ros_message->pipelines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!openvino_msgs__msg__pipeline__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * openvino_msgs__srv__pipeline_srv__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PipelineSrv_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("openvino_msgs.srv._pipeline_srv");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PipelineSrv_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  openvino_msgs__srv__PipelineSrv_Response * ros_message = (openvino_msgs__srv__PipelineSrv_Response *)raw_ros_message;
  {  // pipelines
    PyObject * field = NULL;
    size_t size = ros_message->pipelines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    openvino_msgs__msg__Pipeline * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pipelines.data[i]);
      PyObject * pyitem = openvino_msgs__msg__pipeline__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "pipelines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
