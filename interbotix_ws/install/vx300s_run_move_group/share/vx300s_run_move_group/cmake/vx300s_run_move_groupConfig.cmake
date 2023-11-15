# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vx300s_run_move_group_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vx300s_run_move_group_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vx300s_run_move_group_FOUND FALSE)
  elseif(NOT vx300s_run_move_group_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vx300s_run_move_group_FOUND FALSE)
  endif()
  return()
endif()
set(_vx300s_run_move_group_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vx300s_run_move_group_FIND_QUIETLY)
  message(STATUS "Found vx300s_run_move_group: 0.0.0 (${vx300s_run_move_group_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vx300s_run_move_group' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vx300s_run_move_group_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vx300s_run_move_group_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${vx300s_run_move_group_DIR}/${_extra}")
endforeach()