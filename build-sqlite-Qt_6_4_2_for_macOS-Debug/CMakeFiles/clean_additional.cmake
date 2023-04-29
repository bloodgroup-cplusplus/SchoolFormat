# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/sqlite_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/sqlite_autogen.dir/ParseCache.txt"
  "sqlite_autogen"
  )
endif()
