cmake_minimum_required(VERSION 3.16)
project(Game)

set(CMAKE_CXX_STANDARD 14)
set(BUILD_SHARED_LIBS OFF)

add_subdirectory(third_party/SDL EXCLUDE_FROM_ALL)
add_subdirectory(third_party/SDL_net EXCLUDE_FROM_ALL)

add_executable(Game main.cpp)
target_link_libraries(Game PRIVATE SDL2::SDL2 SDL2::SDL2main SDL2_net)


