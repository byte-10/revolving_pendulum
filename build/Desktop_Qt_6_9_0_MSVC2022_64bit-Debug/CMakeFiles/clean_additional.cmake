# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lab112_Pendulum_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lab112_Pendulum_autogen.dir\\ParseCache.txt"
  "Lab112_Pendulum_autogen"
  )
endif()
