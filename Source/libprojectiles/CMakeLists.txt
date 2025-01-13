add_library(libprojectiles)
set_target_properties(libprojectiles PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(
  libprojectiles
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/libprojectiles>
  PUBLIC "${CMAKE_CURRENT_LIST_DIR}/"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Source/librenderable"
  PUBLIC "${CMAKE_HOME_DIRECTORY}/Dependencies/raylib-5.5_linux_amd64/include/")

target_sources(
  libprojectiles
  PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/libprojectiles/projectile_manager/projectile_manager.cpp"
  PRIVATE "${CMAKE_CURRENT_LIST_DIR}/libprojectiles/bullet/bullet.cpp")

target_link_libraries(libprojectiles PRIVATE librenderable)
