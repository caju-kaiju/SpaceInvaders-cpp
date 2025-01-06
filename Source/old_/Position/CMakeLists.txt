add_library(Position ./include/position.hpp ./source/position.cpp)
target_include_directories(
  Position
  PUBLIC include
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")
