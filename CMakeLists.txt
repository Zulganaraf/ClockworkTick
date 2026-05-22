# Sets the minimum version of CMake required for the project
cmake_minimum_required(VERSION 3.31.12)

# Defines the project name and version
project(ClockworkTick VERSION 0.0.0.1 LANGUAGES CXX)

# Sets the C++ standard to use (e.g., C++23)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Sets the includes for the project
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com
)
# Prevent overriding compiler/linker settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Define and link test executable
add_executable(clockwork_tests clockwork_tests.cpp)
target_link_libraries(clockwork_tests GTest::gtest_main)

# Auto-discover tests
include(GoogleTest)
gtest_discover_tests(clockwork_tests)

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