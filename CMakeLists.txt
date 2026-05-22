# Sets the minimum version of CMake required for the project
cmake_minimum_required(VERSION 3.31.12)

# Defines the project name and version
project(MyHelloWorldProject VERSION 0.0.0.1 LANGUAGES CXX)

# Sets the C++ standard to use (e.g., C++23)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Creates an executable target named 'ClockworkTick' from 'clockwork_tick.cpp'
add_executable(ClockworkTick clockwork_tick.cpp)