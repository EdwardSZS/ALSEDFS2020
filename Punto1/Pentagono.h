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
 * @param x
 * @param y
 */
Pentagono(float l,float a, float x, float y);
float area();
float perimetro();
private: 
	float _lado;
    float _apotema;
Pentagono();
};

#endif //_PENTAGONO_H
