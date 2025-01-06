add_library(CommandMove)

target_include_directories(
  CommandMove PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>)

target_sources(CommandMove
               PRIVATE ${CMAKE_CURRENT_LIST_DIR}/source/CommandMove.cpp)
target_link_libraries(CommandMove Command Actor)
