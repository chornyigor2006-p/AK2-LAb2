cmake_minimum_required(VERSION 3.10)
project(CalculatorProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calculator_lib STATIC calculator.cpp calculator.h)

add_executable(calculatorapp main.cpp)

target_link_libraries(calculatorapp PRIVATE calculator_lib)