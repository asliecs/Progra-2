cmake_minimum_required(VERSION 3.21)
project(Interface)

set(CMAKE_CXX_STANDARD 14)

add_executable(Interface src/IPlayer.cpp src/IPlayer.h src/IRecorder.cpp src/IRecorder.h src/TapePlayer.cpp src/TapePlayer.h src/main.cpp)
