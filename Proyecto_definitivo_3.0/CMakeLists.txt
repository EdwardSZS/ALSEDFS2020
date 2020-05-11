cmake_minimum_required(VERSION 3.0)

project(Proyecto_definitivo_2)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME} "main.cpp" "datosentrada_sesion_usr.cpp"
                               "datosentrada_sesion_usr.h" "datosentrada_sesion_usr.ui"
                               "base_de_datos.h" "base_de_datos.cpp" "crear_usr.h" "crear_usr.ui" "crear_usr.cpp"
                               "opciones_deusr.h" "opciones_deusr.cpp" "opciones_deusr.ui" "crear_pac.h" "crear_pac.cpp"
                               "crear_pac.ui" "filtro1_ni.cpp" "filtro1_ni.h" "filtro1_ni.ui"
                               "ven_crono.ui" "ven_crono.cpp" "ven_crono.h" "ven_game.ui" "ven_game.cpp" "ven_game.h"
                               "scores.ui" "scores.cpp" "scores.h")

target_link_libraries (${PROJECT_NAME} Qt5::Core Qt5::Widgets sqlite3 )

