#ifndef BASE_DA_H
#define BASE_DA_H
#include <string>
#include <sqlite3.h>
#include "registro_usr.h"
#include "registro_paci.h"
using namespace std;


/*!
 * \brief The base_da class
 * La clase de base de datos es aquella encargada de operar, compilar y relacionar los procesos generados por otras clases hacia una
 * base de datos externamente generada, como se evidencia en el panel del codigo, esta clase puede ingresar datos, cargarlos o
 * consolidarlos en la sqlite, si bien no es a clase prncipal esta clase permite a cualquier tipo de programas guardar informacion de
 * sus procesos.
 */
class base_da
{

public:

    base_da();
     bool abrirDB( string path );
     bool cerrarDB();
     bool cargar_usrs(registro_usr &usr );
     bool cargar_pac(registro_paci &pac);
     bool autenticar_usr (string autent, string psw);
     int edad(int ced);
     //bool cargar_paci();

private:
    sqlite3 *db;
    static int funcionLlamada(void *data, int argc, char **argv, char **azColName);
    // static int funcioncall(void *f, int argc, char **argv, char **azColName);
};

#endif // BASE_DA_H
