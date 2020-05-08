#ifndef BASE_DE_DATOS_H
#define BASE_DE_DATOS_
#include <string>
#include <sqlite3.h>
using namespace std;
class Base_de_datos
{
public:
    Base_de_datos();
     bool abrirDB( string path );
     bool cerrarDB();
private:
    sqlite3 *db;
};

#endif // BASE_DE_DATOS_H
