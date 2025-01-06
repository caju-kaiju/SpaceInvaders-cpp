add_subdirectory(./libwindow/)
add_subdirectory(./libactors/)
add_subdirectory(./libcommands/)
add_subdirectory(./libhandlers/)
add_subdirectory(./librenderable/)

add_executable(SpaceInvaders)
target_sources(SpaceInvaders PRIVATE main.cpp)
target_include_directories(
  SpaceInvaders
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/"
  PUBLIC "./libwindow/"
  PUBLIC "./libactors/"
  PUBLIC "./libhandlers/"
  PUBLIC "./libcommands/")

target_link_libraries(
  SpaceInvaders
  PRIVATE
    "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/lib/libraylib.a"
  PRIVATE libwindow
  PRIVATE libactors
  PRIVATE libcommands
  PRIVATE libhandlers)
