add_library(libhandlers)

target_include_directories(
  libhandlers
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/libhandlers>
  PUBLIC "${CMAKE_CURRENT_LIST_DIR}/"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Source/libcommands"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")

target_sources(
  libhandlers
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/libhandlers/inputhandler/inputhandler.cpp)

target_link_libraries(libhandlers PRIVATE libcommands)
