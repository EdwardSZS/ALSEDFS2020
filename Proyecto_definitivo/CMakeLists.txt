cmake_minimum_required(VERSION 3.0)

project(Proyecto_definitivo)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable(${PROJECT_NAME} "main.cpp" "ventana_de_juego.cpp" "datosentrada_sesion_usr.cpp"  "ventana_de_juego.h" "datosentrada_sesion_usr.h" "ventana_de_juego.ui" "datosentrada_sesion_usr.ui"
    "base_de_datos.h" "base_de_datos.cpp" "crear_usr.h" "crear_usr.ui" "crear_usr.cpp" "opciones_deusr.h" "opciones_deusr.cpp" "opciones_deusr.ui" "crear_pac.h" "crear_pac.cpp" "crear_pac.ui")

target_link_libraries (${PROJECT_NAME} Qt5::Core Qt5::Widgets sqlite3 )
