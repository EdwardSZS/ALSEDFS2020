#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;

int main(int argc,char* argv[]){
    vector<Geometrica*> vFig;
cout <<" Probando geométrica"<< endl;



    string path = argv[3];
    ifstream archivo;
    archivo.open(path);

    cout << "Se abrirá el archivo: " << path << endl;

    if(archivo.is_open()){
        // Aquí va el codigo que se va a hacer para leer el archivo
        ofstream archSal;

        archSal.open("Figuras_Geométricas.txt");
        if( archSal.is_open() ){
            //Geometrica* PG=0;
            size_t datoc=0,posc,poscd, datoc2=0;
            float r[10];
            int cont;
            do{
              getline(archivo, path);
              //datoc[cont] = atof( path.c_str() ) ;
              string tipo1;
              int tip,contaux=0;
             tipo1 = path.substr(0, 1 );
             tip=atoi(tipo1.c_str());
              if (tip==1){
                  while( datoc != string::npos ){
                      // Encontrando cada termino
                       string term;
                      posc= path.find(",", datoc2 + 1 );
                      poscd= path.find(",", datoc + 4 );


                      // cout << posM << " " << posm << endl;


                      //cout << posT1 << " " << posT2 << endl;
                      term = path.substr( posc, poscd-posc );
                      r[cont]= atof(term.c_str());
                      cont++;
                      datoc = posc;
                  }
                  Circulo a= Circulo( r[0],r[1],r[2] );
                  archSal <<"Círculo"<< a.perimetro() <<", "<<a.area()<<", "<<a.getX()<<", "<<a.getX()<< endl;
              }
              if(tip==2){
                  while( datoc != string::npos ){
                      // Encontrando cada termino
                       string term;
                      posc= path.find(",", datoc2 + 1 );
                      poscd= path.find(",", datoc + 4 );


                      // cout << posM << " " << posm << endl;


                      //cout << posT1 << " " << posT2 << endl;
                      term = path.substr( posc, poscd-posc );
                      r[cont]= atof(term.c_str());
                      cont++;
                      datoc = posc;
                  }
                  Cuadrado b= Cuadrado( r[0],r[1],r[2] );
                  archSal <<"Cuadrado"<< b.perimetro() <<", "<<b.area()<<", "<<b.getX()<<", "<<b.getX()<< endl;
              }
              if(tip==3){
                  while( datoc != string::npos ){
                      // Encontrando cada termino
                       string term;
                      posc= path.find(",", datoc2 + 1 );
                      poscd= path.find(",", datoc + 4 );


                      // cout << posM << " " << posm << endl;


                      //cout << posT1 << " " << posT2 << endl;
                      term = path.substr( posc, poscd-posc );
                      r[cont]= atof(term.c_str());
                      cont++;
                      datoc = posc;
                  }
                  Triangulo c= Triangulo( r[0],r[1],r[2],r[3] );
                   archSal <<"Triangulo"<< c.perimetro() <<", "<<c.area()<<", "<<c.getX()<<", "<<c.getX()<< endl;
                  }
              if(tip== 4){
                  while( datoc != string::npos ){
                      // Encontrando cada termino
                       string term;
                      posc= path.find(",", datoc2 + 1 );
                      poscd= path.find(",", datoc + 4 );


                      // cout << posM << " " << posm << endl;


                      //cout << posT1 << " " << posT2 << endl;
                      term = path.substr( posc, poscd-posc );
                      r[cont]= atof(term.c_str());
                      cont++;
                      datoc = posc;
                  }
                  Pentagono d= Pentagono( r[0],r[1],r[2],r[3] );
                   archSal <<"Pentágono"<< d.perimetro() <<", "<<d.area()<<", "<<d.getX()<<", "<<d.getX()<< endl;
                  }


              contaux++;


            }while(!archivo.eof());//mientras no sea el final
            archSal.close();
        }
    }


    return 0;
}
