add_library(Window ./include/window.hpp ./source/window.cpp)
target_include_directories(
  Window
  PUBLIC include
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")
