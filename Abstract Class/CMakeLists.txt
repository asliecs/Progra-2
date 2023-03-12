cmake_minimum_required(VERSION 3.21)
project(Abstract_Class)

set(CMAKE_CXX_STANDARD 14)

add_executable(Abstract_Class src/Person.cpp src/Person.h src/Student.cpp src/Student.h src/Teacher.cpp src/Teacher.h src/main.cpp)
