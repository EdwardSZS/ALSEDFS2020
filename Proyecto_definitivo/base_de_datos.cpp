#include "base_de_datos.h"
#include <iostream>
#include <sstream>
Base_de_datos::Base_de_datos()
{

}

bool Base_de_datos::abrirDB(string path)
{int rc;

    /* Open database */
    rc = sqlite3_open( path.c_str() , &db);

    if( rc ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
       return false;
    }else
        fprintf(stderr, "Opened database successfully\n");

    return true;

}

bool Base_de_datos::cerrarDB()
{
     sqlite3_close( db );

}
