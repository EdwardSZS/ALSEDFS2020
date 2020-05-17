cmake_minimum_required(VERSION 2.8)

project(Proyecto3)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME} "main.cpp" "opciones.cpp" "inicio.cpp" "registro_usr.cpp" "conectardb.h"
               "registro_paci.cpp"  "base_da.cpp"  "opciones.h" "inicio.h" "registro_usr.h" "base_da.h" "conectardb.cpp"
               "registro_paci.h"  "base_da.h"   "opciones.ui" "inicio.ui" "registro_usr.ui" "registro_paci.ui"
               "filtro.cpp" "filtro.h" "filtro.ui" "juego.cpp" "juego.h" "juego.ui"
               "resultados.cpp" "resultados.h" "resultados.ui")

target_link_libraries (${PROJECT_NAME} Qt5::Core Qt5::Widgets sqlite3 )
