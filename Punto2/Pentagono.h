/**
 * Project Untitled
 */


#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"


class Pentagono: public Geometrica {
public: 
	
/**
 * @param l
 * @param a
 * @param x
 * @param y
 */

    float area();
    float perimetro();
Pentagono(float l, float a,float x=0, float y=0);
private: 
	float _lado;
    float _apotema;
Pentagono();
};

#endif //_PENTAGONO_H
