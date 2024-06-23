# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MyCalculator_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MyCalculator_autogen.dir/ParseCache.txt"
  "MyCalculator_autogen"
  )
endif()
