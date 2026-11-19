cmake_minimum_required(VERSION 3.14)
project(calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calculator_lib
    src/calculator.cpp
)
target_include_directories(calculator_lib PUBLIC include)

add_executable(calculator src/main.cpp)
target_link_libraries(calculator PRIVATE calculator_lib)

enable_testing()
find_package(GTest REQUIRED)

add_executable(calculator_tests tests/test_calculator.cpp)
target_link_libraries(calculator_tests PRIVATE calculator_lib GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(calculator_tests)
