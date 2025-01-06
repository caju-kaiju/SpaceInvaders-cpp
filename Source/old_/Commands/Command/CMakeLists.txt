add_library(Command)

target_include_directories(
  Command PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>)

target_sources(Command PRIVATE ${CMAKE_CURRENT_LIST_DIR}/source/Command.cpp)
target_link_libraries(Command Actor)
