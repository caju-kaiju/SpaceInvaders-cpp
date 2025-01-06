add_library(libcommands)
set_target_properties(libcommands PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
  libcommands
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/libcommands>
  PUBLIC "${CMAKE_CURRENT_LIST_DIR}/"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Source/libactors"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")

target_sources(
  libcommands
  PRIVATE "${CMAKE_CURRENT_LIST_DIR}/libcommands/command/command.cpp"
  PRIVATE "${CMAKE_CURRENT_LIST_DIR}/libcommands/commandmove/commandmove.cpp"
  PRIVATE "${CMAKE_CURRENT_LIST_DIR}/libcommands/commandyell/commandyell.cpp")

target_link_libraries(libcommands PRIVATE libactors)
