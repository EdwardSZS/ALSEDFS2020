#include "base_da.h"
#include <iostream>
#include <sstream>
#include "registro_usr.h"
#include "registro_paci.h"


base_da::base_da()
{

}

bool base_da::abrirDB(string path)
{int rc;

    ///* Open database
    rc = sqlite3_open( path.c_str() , &db);

    if( rc ) {
       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
       return false;
    }else
        fprintf(stderr, "Opened database successfully\n");

    return true;

}

bool base_da::cargar_usrs(registro_usr &usr){
    /*TABLE `Datos_user` (`NOMBRE`	TEXT NOT NULL,
        *`APELLIDO`	TEXT NOT NULL,
        *`DOCUMENTOID`	INTEGER NOT NULL UNIQUE,
        *`FECHANAC`	TEXT NOT NULL,
        *`USUARIO`	TEXT NOT NULL,
        *`CONTRASENA`	TEXT NOT NULL)*/

    char *zErrMsg = 0;
        int rc;

        std::stringstream sql;
        /* Create SQL statement */

        sql <<"INSERT INTO Datos_user (NOMBRE, APELLIDO, DOCUMENTOID, FECHANAC, " \
              "USUARIO, CONTRASENA) VALUES (" ;

        sql << usr.getName() << ", " << usr.getApe() << ", " << usr.getN_id() << ", " << usr.getF_nac() << ", " ;
        sql << usr.getUsr() << ", " << usr.getPass() <<  ");" ;
        std::cout << usr.getName() << std::endl;
        std::cout << sql.str() << std::endl;
        /* Execute SQL statement */
        rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

        if( rc != SQLITE_OK ){
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           return false;
        } else {
           fprintf(stdout, "Records created successfully\n");
        }
        return true;

}

int base_da::funcionLlamada(void *data, int argc, char **argv, char **azColName)
{

}


bool base_da::cerrarDB()
{
     sqlite3_close( db );

}
