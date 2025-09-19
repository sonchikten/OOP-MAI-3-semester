cmake_minimum_required(VERSION 3.10)
project(OOP_labs)

# Настройка компиляторов
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  

# Лабораторная 1
add_executable(lab1 lab1/src/main.cpp lab1/src/lab1.cpp)

# Поиск GTest
find_package(GTest REQUIRED)
include(GoogleTest)

# Тесты для лабораторной 1
add_executable(test_lab1 tests/test_lab1.cpp lab1/src/lab1.cpp)
target_link_libraries(test_lab1 GTest::gtest GTest::gtest_main)
gtest_discover_tests(test_lab1)
