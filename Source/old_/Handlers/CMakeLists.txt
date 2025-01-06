# add_library(Handlers ./include/InputHandler.hpp ./source/InputHandler.cpp)
# target_include_directories( Handler PUBLIC include PUBLIC
# "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")
# target_link_libraries(Handler CommandMove CommandYell Actor)
add_library(Handlers)

target_include_directories(
  Handlers
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/InputHandler/include>)

target_sources(
  Handlers
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/InputHandler/source/InputHandler.cpp)
target_link_libraries(Handlers Actor Commands)
