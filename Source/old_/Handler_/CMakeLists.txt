add_library(Handler ./include/InputHandler.hpp ./source/InputHandler.cpp)
target_include_directories(
  Handler
  PUBLIC include
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")
target_link_libraries(Handler CommandMove CommandYell Actor)
