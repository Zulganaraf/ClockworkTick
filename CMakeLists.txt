# Sets the minimum version of CMake required for the project
cmake_minimum_required(VERSION 3.31.12)

# Defines the project name and version
project(ClockworkTick VERSION 0.0.0.1 LANGUAGES CXX)

# Sets the C++ standard to use (e.g., C++23)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Sets the includes for the project
include()

# Add Subdirectories
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(examples)
add_subdirectory(docs)


###### reminder for further items that will be exported, compile options, and include directories
#add_library(engine STATIC engine.cpp)

# PUBLIC: Header is needed by both the library and anyone linking to it
#target_include_directories(engine PUBLIC include/)

# PRIVATE: Only this library needs these specific compile flags
#target_compile_options(engine PRIVATE -Wall -Wextra)

# Creates an executable target named 'ClockworkTick' from 'clockwork_tick.cpp'
add_executable(ClockworkTick main.cpp)

###### reminder for further target linked libraries
# Link the internal 'engine' library
target_link_libraries(ClockworkTick PRIVATE engine)