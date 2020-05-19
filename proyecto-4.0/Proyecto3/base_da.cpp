#include "base_da.h"
#include <iostream>
#include <sstream>
#include "registro_usr.h"
#include "registro_paci.h"

using namespace std;
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
        *`CONTRASENA`	TEXT NOT NULL,
        *`EDAD` INTEGER)*/

    char *zErrMsg = 0;
        int rc;
        int ed;
        std::stringstream sql;
        /* Create SQL statement */

        sql <<"INSERT INTO Datos_user (NOMBRE, APELLIDO, DOCUMENTOID, FECHANAC, " \
              "USUARIO, CONTRASENA) VALUES ('" ;

        sql << usr.getName() << "', '" << usr.getApe() << "', '" << usr.getN_id() << "', '" << usr.getF_nac() << "', '" ;
        sql << usr.getUsr() << "', '" << usr.getPass() <<  "');" ;
        std::cout << usr.getName() << std::endl;
        std::cout << sql.str() << std::endl;
        ed = edad (usr.getN_id());
        sql << "INSERT INTO Datos_usr (EDAD) VALUE("<<ed<<");";
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

bool base_da::cargar_pac(registro_paci &pac)
{/*TABLE `Dato_paciente` (
    `Nombre`	TEXT NOT NULL,
    `Apellido`	TEXT NOT NULL,
    `Doc_id`	INTEGER NOT NULL UNIQUE PRIMARY KEY,
    `FNAC`	TEXT NOT NULL,
    `Dirección`	TEXT,
    `Etnia`	TEXT NOT NULL,
    `Genero`	TEXT,
    `Ing_fam`	INTEGER)*/

    char *zErrMsg = 0;
        int rc;

        std::stringstream sql;
        /* Create SQL statement */

        sql <<"INSERT INTO Dato_paciente (Nombre, Apellido, Doc_id, FNAC, " \
              "Dirección, Etnia, Genero, Ing_fam) VALUES ('" ;

        sql << pac.getNom() << "', '" << pac.getApe() << "', '" << pac.getNi() << "', '" << pac.getFn() << "', '" ;
        sql << pac.getDir() << "', '" << pac.getEtnia() <<  "','"<<pac.getGen()<<"',' "<<pac.getIng()<< "');" ;
        std::cout << pac.getNom() << std::endl;
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

bool base_da::autenticar_usr(string autent, string psw)
{
       char *zErrMsg = 0;
       int rc,rc1;
       const char* data = "Callback function called";

          /*TABLE `Datos_user` (`NOMBRE`	TEXT NOT NULL,
           *`APELLIDO`	TEXT NOT NULL,
           *`DOCUMENTOID`	INTEGER NOT NULL UNIQUE,
           *`FECHANAC`	TEXT NOT NULL,
           *`USUARIO`	TEXT NOT NULL,
           *`CONTRASENA`	TEXT NOT NULL)*/

       /* Create SQL statement */

        std::string sql, sql1;

       sql = "SELECT * FROM Datos_user WHERE USUARIO= '" +autent+ "';";
       sql1 = "SELECT * FROM Datos_user WHERE (CONTRASENA='"+psw+"');";
       cout<<sql<<"y"<<sql1<<endl;
       /* Execute SQL statement */
       rc = sqlite3_exec(db, sql.c_str(), funcionLlamada, (void*)data, &zErrMsg);
      rc1 = sqlite3_exec(db, sql1.c_str(), funcionLlamada, (void*)data, &zErrMsg);
       if( rc != SQLITE_OK )
       {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);

            return false;

       } else
       {
          fprintf(stdout, "Operation done successfully\n");
          return true;
          cerrarDB();

       }


}

int base_da::edad(int ced)
{
    int ed;
    stringstream sql;
    string edad;
    //sql.clear();
    sql << "(SELECT FECHANAC FROM Datos_user WHERE (DOCUMENTOID=" << ced << "))";
    edad ="SELECT date ('now') - date ('"+ sql.str() +"');";
    ed= atoi(edad.c_str());
     return ed;


}

int base_da::funcionLlamada(void *data, int argc, char **argv, char **azColName)
{
    int i;
    fprintf(stderr, "%s: ", (const char*)data);

    for(i = 0; i<argc; i++){
       printf("%s = %s \n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");
    return 0;
}


bool base_da::cerrarDB()
{
     sqlite3_close( db );

}
