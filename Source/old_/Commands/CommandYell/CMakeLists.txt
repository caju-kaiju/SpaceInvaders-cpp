add_library(CommandYell)

target_include_directories(
  CommandYell PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>)

target_sources(CommandYell
               PRIVATE ${CMAKE_CURRENT_LIST_DIR}/source/CommandYell.cpp)
target_link_libraries(CommandYell Command Actor)
