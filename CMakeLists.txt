cmake_minimum_required(VERSION 3.13)

if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

if(MSVC)
  add_compile_options(/W4)
  else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif(MSVC)

project(CppTemplate VERSION 0.1.0 LANGUAGES CXX)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# Control where the static and shared libraries are built so that on windows
# we don't need to tinker with the path to run the executable
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

include_directories(include)

set(
  SOURCES
    src/example.cpp
    src/main.cpp
)

# Add project executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Testing
enable_testing()
add_subdirectory(dependencies/googletest)
# Add test-case executable
add_executable(
  test_template
    src/example.cpp
    test/test_example.cpp
)
add_test(TestCppTemplate test_template)
target_link_libraries(test_template gtest_main)
