cmake_minimum_required(VERSION 3.10)
project(C++Assign8 VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()

# Include GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# Add C++ Library (Shared/Dynamic)
add_library(math_lib SHARED
  cpp_lib/src/math_lib.cpp
)
target_include_directories(math_lib PUBLIC
  cpp_lib/include
)


enable_testing()
add_subdirectory(tests)