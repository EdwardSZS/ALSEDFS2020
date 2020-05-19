#ifndef BASE_DA_H
#define BASE_DA_H
#include <string>
#include <sqlite3.h>
#include "registro_usr.h"
#include "registro_paci.h"
using namespace std;
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
    //bool
private:
    sqlite3 *db;
    int id;
    static int funcionLlamada(void *data, int argc, char **argv, char **azColName);
};

#endif // BASE_DA_H
