#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "interbotix_xs_rviz::interbotix_xs_rviz" for configuration "Debug"
set_property(TARGET interbotix_xs_rviz::interbotix_xs_rviz APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(interbotix_xs_rviz::interbotix_xs_rviz PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libinterbotix_xs_rviz.so"
  IMPORTED_SONAME_DEBUG "libinterbotix_xs_rviz.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS interbotix_xs_rviz::interbotix_xs_rviz )
list(APPEND _IMPORT_CHECK_FILES_FOR_interbotix_xs_rviz::interbotix_xs_rviz "${_IMPORT_PREFIX}/lib/libinterbotix_xs_rviz.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
