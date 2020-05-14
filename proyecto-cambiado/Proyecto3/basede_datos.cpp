#include "basede_datos.h"
#include "registro_usr.h"

Basede_datos::Basede_datos()
{

}

Basede_datos::abrir_base_dedatos(string path)
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

Basede_datos::almacenar_usr(registro_usr &usr)
{
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

        sql << usr.getname() << ", " << usr.getApellido() << ", " << usr.getNi() << ", " << usr.getFecha_nac() << ", " ;
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

Basede_datos::cerrar_db()
{

}
