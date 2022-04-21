# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cliente_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cliente_autogen.dir\\ParseCache.txt"
  "Cliente_autogen"
  )
endif()
