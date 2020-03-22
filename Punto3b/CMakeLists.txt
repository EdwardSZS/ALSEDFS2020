cmake_minimum_required(VERSION 2.8.12)

project(Punto3_Tar)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

add_executable(${PROJECT_NAME} "main.cpp" "Polinomio.cpp" "Polinomio.h")

target_link_libraries(${PROJECT_NAME} Qt5::Core)
