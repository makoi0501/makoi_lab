# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_hello_moveit2_interbotix_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED hello_moveit2_interbotix_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(hello_moveit2_interbotix_FOUND FALSE)
  elseif(NOT hello_moveit2_interbotix_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(hello_moveit2_interbotix_FOUND FALSE)
  endif()
  return()
endif()
set(_hello_moveit2_interbotix_CONFIG_INCLUDED TRUE)

# output package information
if(NOT hello_moveit2_interbotix_FIND_QUIETLY)
  message(STATUS "Found hello_moveit2_interbotix: 0.0.0 (${hello_moveit2_interbotix_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'hello_moveit2_interbotix' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${hello_moveit2_interbotix_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(hello_moveit2_interbotix_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${hello_moveit2_interbotix_DIR}/${_extra}")
endforeach()
