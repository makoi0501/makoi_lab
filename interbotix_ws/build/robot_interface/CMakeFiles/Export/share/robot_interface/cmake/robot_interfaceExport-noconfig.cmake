#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "robot_interface::robot_interface" for configuration ""
set_property(TARGET robot_interface::robot_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(robot_interface::robot_interface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librobot_interface.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS robot_interface::robot_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_robot_interface::robot_interface "${_IMPORT_PREFIX}/lib/librobot_interface.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
