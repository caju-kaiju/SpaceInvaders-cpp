add_subdirectory(./Window/)
add_subdirectory(./Renderable//)
add_subdirectory(./Position/)
add_subdirectory(./Commands/)
add_subdirectory(./Actors/)
add_subdirectory(./Handlers/)
# add_subdirectory(./Handler/)

add_executable(SpaceInvaders)

target_sources(SpaceInvaders PRIVATE main.cpp)

target_include_directories(
  SpaceInvaders
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/"
  PUBLIC "./Commands/CommandMove/include"
  PUBLIC "./Position/include/"
  PUBLIC "./Renderable/include/"
  PUBLIC "./Window/include/")

target_link_libraries(
  SpaceInvaders
  PRIVATE
    "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/lib/libraylib.a"
  PRIVATE Window
  PRIVATE Actor
  PRIVATE Player
  PRIVATE Commands
  PRIVATE Handlers)
