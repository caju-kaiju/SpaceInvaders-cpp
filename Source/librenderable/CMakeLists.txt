add_library(librenderable INTERFACE)
set_target_properties(librenderable PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
  librenderable
  INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/librenderable>)
