add_library(libwindow)
set_target_properties(libwindow PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
  libwindow
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/libwindow>
  PUBLIC "${CMAKE_CURRENT_LIST_DIR}/"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")

target_sources(libwindow PRIVATE ${CMAKE_CURRENT_LIST_DIR}/libwindow/window.cpp)
