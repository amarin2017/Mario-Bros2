cmake_minimum_required(VERSION 3.9)

project(Mario-Bros2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(Mario-Bros2 main.cpp SDL_Plotter.h image_test.h image_test.cpp)
target_link_libraries(Mario-Bros2 SDL2main SDL2 SDL2_mixer)