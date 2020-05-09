/*
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

bool Base_de_datos::cargar_usr(Crear_usr &usr){
        char *zErrMsg = 0;
        int rc;

        std::stringstream sql;
        ///* Create SQL statement

        sql <<"INSERT INTO TABLE Datos_user ( Nombre, Apellido, Documento de identidad, Fecha de nacimiento (AAAA-MM-DD)" \
              "Usuario,Contraseña, Edad) VALUES (";

        sql << usr.getNombre(); << ", " <<  usr.getApellido() << ", " << usr.getNi() << ", " << usr.getFecha_nac() << ", " ;
        sql << usr.getUsuario() << ", " << usr.getPass() <<  ");" ;
        rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

        if( rc != SQLITE_OK ){
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           return false;
        } else {
           //fprintf(stdout, "Records created successfully\n");
        }
        return true;


        /*
        rc = sqlite3_exec(db, sql.str().c_str(), agregarTrabajador, (void*)&e, &zErrMsg);

        if( rc != SQLITE_OK ){
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           return false;


        // Ahora se cargan las horas

        return true;
        */



/*
int DB_Local::agregarTrabajador(void *data, int argc, char **argv, char **azColName){
    // Se recibe la empresa y se le agrega el trabajador que se lee de la db.
    Empresa* emp = (Empresa*) data ;
    Trabajador t;
    t.setApellido( argv[2] );
    t.setNombre( argv[1] );
    t.setCedula( atoi( argv[0] ) );
    t.setSalario( atof( argv[3] ) );
    emp->agregarTrabajador( t );
    return 0;
}


bool Base_de_datos::cerrarDB()
{
     sqlite3_close( db );

}
}
*/
