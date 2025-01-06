cmake_minimum_required(VERSION 3.22)
project(
  space_invaders
  VERSION 0.0.1
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_options(-Wall -Werror -Wpedantic -Wconversion)

add_subdirectory(./Source)
