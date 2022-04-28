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

include_directories(include/models)
include_directories(include)

set(
  SOURCES
    src/models/grade.cpp
    src/models/course.cpp
    src/models/student.cpp
    src/data/models_data.cpp
    src/logic/logic.cpp
    src/visual/logger.cpp
    src/main.cpp
)

# Add project executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Testing
enable_testing()
add_subdirectory(dependencies/googletest)
# Add test-case executable
add_executable(
  test_student
    src/models/student.cpp
    test/test_student.cpp
)
add_test(TestStudent test_student)
target_link_libraries(test_student gtest_main)

# Add test-case executable
add_executable(
  test_course
    src/models/course.cpp
    test/test_course.cpp
)
add_test(TestCourse test_course)
target_link_libraries(test_course gtest_main)

# Add test-case executable
add_executable(
  test_grade
    src/models/grade.cpp
    test/test_grade.cpp
)
add_test(TestGrade test_grade)
target_link_libraries(test_grade gtest_main)
