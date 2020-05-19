#include "base_da.h"
#include <iostream>
#include <sstream>
#include "registro_usr.h"
#include "registro_paci.h"


base_da::base_da()
{

}

/*!
 * \brief base_da::abrirDB
 * Aquella funcion que como bien indica su nombre, realiza la apertura de la BD a partir del nombre de la misma e indica el proceso
 * si fue exitoso o no.
 *
 * \param path esta variabe sirve de indentificador de un archivo de texto.
 *
 * \return una variable boleana, que nos indica el extremo del proceso exitoso o si no lo fue.
 */
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

/*!
 * \brief base_da::cargar_usrs
 * Funcion destinada a identificar el objeto usuario (registrado), ademas permite identificar la organizacion de columnas para si
 * determinar el tipo de variables que son, para luego usar el comando de insertar (INSERT INTO ---) que sera la información que
 * recuperó del registro del usuario, para finalmente quedar almacenada en la BD.
 *
 * \param usr , este es el objeto de usuario, y conforma todas las caracteristicas publicas del usuario.
 *
 * \return una variable boleana que indica si fue o no exitoso el proceso.
 */
bool base_da::cargar_usrs(registro_usr &usr){

    /*! En esta continuacion de codigo se especifican los datos a que se esperan recibir de la interfaz grafica*/

        /*TABLE `Datos_user` (`NOMBRE`	TEXT NOT NULL,
        *`APELLIDO`	TEXT NOT NULL,
        *`DOCUMENTOID`	INTEGER NOT NULL UNIQUE,
        *`FECHANAC`	TEXT NOT NULL,
        *`USUARIO`	TEXT NOT NULL,
        *`CONTRASENA`	TEXT NOT NULL)*/

    char *zErrMsg = 0;
        int rc,rc1;
        int ed;
        std::stringstream sql,sql1;
        /* Create SQL statement */

        sql <<"INSERT INTO Datos_user (NOMBRE, APELLIDO, DOCUMENTOID, FECHANAC, " \
              "USUARIO, CONTRASENA) VALUES ('" ;

        sql << usr.getName() << "', '" << usr.getApe() << "', '" << usr.getN_id() << "', '" << usr.getF_nac() << "', '" ;
        sql << usr.getUsr() << "', '" << usr.getPass() <<  "');" ;
        std::cout << usr.getName() << std::endl;
        std::cout << sql.str() << std::endl;

        ed = edad (usr.getN_id());  /*!< Esperando el retorno del calculo de la edad para ser almacenado en la columna
                                         especiifca para ella en la BD*/

       //std::cout<<ed<<std::endl;

        sql1 << "INSERT INTO Datos_user (EDAD) VALUES ('"<<ed<<"');";
        /* Execute SQL statement */
        rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);
        rc1 = sqlite3_exec(db, sql1.str().c_str(), 0, 0, &zErrMsg);

        if( rc != SQLITE_OK ) /*!< Con motivos de dettecion de erores, esta parte de codigo fue diseñada para emitir una alerta de
                                   un proceso exitoso o no cuando se grabaron los datos*/
        {
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           return false;

        } else
        {
           fprintf(stdout, "Records created successfully\n");
        }
        return true;

}

/*!
 * \brief base_da::cargar_pac
 *
 * Funcion destinada a identificar el objeto paciete (registrado), ademas permite identificar la organizacion de columnas para si
 * determinar el tipo de variables que son, para luego usar el comando de insertar (INSERT INTO ---) que sera la información que
 * recuperó del registro del usuario, para finalmente quedar almacenada en la BD.
 *
 * \param pac , este es el objeto de usuario, y conforma todas las caracteristicas publicas del usuario.
 *
 * \return una variable boleana que indica si fue o no exitoso el proceso.
 */

bool base_da::cargar_pac(registro_paci &pac)
{
    /*TABLE `Dato_paciente` (
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

/*!
 * \brief base_da::autenticar_usr
 *
 * En aras de generar un proyecto con un grado de seguridad bajo con los datos, se diseñó esta clase, la cual en principio busca comparar los
 * datos registrados junto con aquellos que se vuelven a ingresar para encontrar coincidencia en ellos y asi emitir una señal de apertura para
 * poder continuar con el poceso de la aplicacion.
 *
 * \param autent , variable de usuario el cual seria esta a comparar.
 *
 * \param psw , , variable de contraseña el cual seria esta a comparar.
 *
 * \return , booleano para saber si la validacion se realizó o no.
 */

bool base_da::autenticar_usr(string autent, string psw)
{
    char *zErrMsg = 0;
    int rc;
    //const char* data = "Callback function called";
    bool f=false;
    /* Create SQL statement */

     std::string sql;

    sql = "SELECT * FROM Datos_user WHERE (USUARIO= '" +autent+ "') AND (CONTRASENA='"+psw+"');";

    /*!
      Seleccionar si existen los datos, de lo contrario no realizaria la validacion, todo esto con la accion de -funcioncall-.
      */

    /* Execute SQL statement */
    // rc = sqlite3_exec(db, sql.c_str(), funcioncall, (void*)&f, &zErrMsg);
    //rc1 = sqlite3_exec(db, sql1.c_str(), funcionLlamada, (void*)data, &zErrMsg);


    if( rc != SQLITE_OK )
    {
         fprintf(stderr, "SQL error: %s\n", zErrMsg);
         sqlite3_free(zErrMsg);


    } else
    {
       fprintf(stdout, "Operation done successfully\n");
       return f ;
       cerrarDB();

    }

}

/*!
 * \brief base_da::edad
 *
 * Calcula la edad dentro de la base de datos, de manera automatica sin la necesidad de accion externa del usuario o paciente.
 *
 * \param ced , variable (numero de identificacion) que permite interactuar con la BD.
 *
 * \return un proceso de exito o fracaso de la funcion (booleano).
 */

int base_da::edad(int ced)
{   const char* data = "Callback function called";
    int ed, rc;
    char *zErrMsg = 0;
    stringstream sql;
    string edad;
    //sql.clear();
    sql << "(SELECT FECHANAC FROM Datos_user WHERE (DOCUMENTOID=" << ced << "))"; /*!< Comparacion del documento de identidad y la hora actual
                                                                                       para obtener la edad*/

     rc = sqlite3_exec(db, sql.str().c_str(), funcionLlamada, (void*)data, &zErrMsg);

    edad ="SELECT date ('now') - date ('"+ sql.str() +"');"; /*!< Proceso de resta, en el cual las dos variables anteriormente señaladas
                                                                  proveen de la edad actual -date('now') y */

    ed= atoi(edad.c_str()); /*!< Conversion de el string de edad a entero*/
    return ed;
}

/*
int base_da::funcioncall(void *f, int argc, char **argv, char **azColName)
{int i;

    //fprintf(stderr, "%s: ", (const char*)data);

    for(i = 0; i<argc; i++){
       printf("%s = %s \n", azColName[i], argv[i] ? argv[i] : "NULL");

    }
    //f=true;
    f=true;
    printf("\n");
    return 1;

}*/

int base_da::funcionLlamada(void *data, int argc, char **argv, char **azColName)
{int i;
    fprintf(stderr, "%s: ", (const char*)data);

    for(i = 0; i<argc; i++){
       printf("%s = %s \n", azColName[i], argv[i] ? argv[i] : "NULL");

    }
    ;
    printf("\n");
    return 1;

}


bool base_da::cerrarDB()
{
     sqlite3_close( db );

}
