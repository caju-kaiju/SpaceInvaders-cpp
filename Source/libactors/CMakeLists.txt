add_library(libactors)
set_target_properties(libactors PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
  libactors
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/libactors>
  PUBLIC "${CMAKE_CURRENT_LIST_DIR}/"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Source/librenderable"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")

target_sources(
  libactors
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/libactors/actor/actor.cpp
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/libactors/player/player.cpp)

target_link_libraries(libactors PRIVATE librenderable)
