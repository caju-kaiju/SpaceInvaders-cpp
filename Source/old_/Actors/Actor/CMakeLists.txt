add_library(Actor)

target_include_directories(
  Actor
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")

target_sources(Actor PRIVATE ${CMAKE_CURRENT_LIST_DIR}/source/Actor.cpp)
