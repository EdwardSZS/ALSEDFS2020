#ifndef BASEDE_DATOS_H
#define BASEDE_DATOS_H
#include <sqlite3.h>
#include <string>
#include "registro_usr.h"
using namespace std;
class Basede_datos
{
public:
    Basede_datos();
    abrir_base_dedatos(string path );
    almacenar_usr(registro_usr &usr);
    cerrar_db();
private:
    sqlite3 *db;
};

#endif // BASEDE_DATOS_H
