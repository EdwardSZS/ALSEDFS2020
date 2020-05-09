/*
#ifndef BASE_DE_DATOS_H
#define BASE_DE_DATOS_
#include <string>
#include <sqlite3.h>
#include "crear_usr.h"

using namespace std;
class Base_de_datos
{
public:

    Base_de_datos();
     bool abrirDB( string path );
     bool cerrarDB();
     bool cargar_usrs(Crear_usr &usr );
     //bool cargar_paci();
private:
    sqlite3 *db;
    //static int agregar_usrs(void *data, int argc, char **argv, char **azColName);
    //static int agregar_paci(void *data, int argc, char **argv, char **azColName);
};

#endif // BASE_DE_DATOS_H
*/
