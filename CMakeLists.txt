cmake_minimum_required(VERSION 3.10)
project(HelloWorldExtended)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(hello src/main.cpp src/greeter.cpp)
