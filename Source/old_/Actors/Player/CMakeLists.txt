add_library(Player)

target_include_directories(
  Player PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>)

target_sources(Player PRIVATE ${CMAKE_CURRENT_LIST_DIR}/source/Player.cpp)
target_link_libraries(Player Actor Position Renderable)
