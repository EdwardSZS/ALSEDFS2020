
#include "base_de_datos.h"
#include <iostream>
#include <sstream>
#include "crear_usr.h"
#include "crear_pac.h"

Base_de_datos::Base_de_datos()
{

}

bool Base_de_datos::abrirDB(string path)
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

bool Base_de_datos::cargar_usrs(Crear_usr &usr){
    /*TABLE `Datos_user` (`Nombre`	TEXT NOT NULL,
        *`Apellido`	TEXT NOT NULL,
        *`Documento_de_identidad`	INTEGER NOT NULL UNIQUE,
        *`Fecha_de_nacimiento`	TEXT NOT NULL,
        *`Usuario`	TEXT NOT NULL,
        *`Contraseña`	TEXT NOT NULL,
        *`Edad`	INTEGER )*/

    char *zErrMsg = 0;
        int rc;

        std::stringstream sql;
        /* Create SQL statement */

        sql <<"INSERT INTO Datos_user (Nombre, Apellido, Documento_de_identidad, Fecha_de_nacimiento, " \
              "Usuario, Contraseña) VALUES (";

        sql << usr.getNombre() << ", " << usr.getApellido() << ", " << usr.getNi() << ", " << usr.getFecha_nac() << ", " ;
        sql << usr.getUsuario() << ", " << usr.getPass() <<  ");" ;
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

int Base_de_datos::funcionLlamada(void *data, int argc, char **argv, char **azColName)
{

}


bool Base_de_datos::cerrarDB()
{
     sqlite3_close( db );

}

