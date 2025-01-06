# add_library(Command "./include/CommandMove.hpp" "./source/CommandMove.cpp"
# "./include/CommandYell.hpp" "./source/CommandYell.cpp")
#
# target_include_directories(Command PUBLIC include)
# target_link_libraries(Command Actor)
add_subdirectory(Command)
add_subdirectory(CommandMove)
add_subdirectory(CommandYell)
