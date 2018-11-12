cmake_minimum_required(VERSION 3.12)
project(Lab1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab1 main.cpp character.h character.cpp inventory.cpp inventory.h item.cpp item.h menu.cpp menu.h world.cpp world.h)