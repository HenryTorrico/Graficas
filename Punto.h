#ifndef PUNTO_H
#define PUNTO_H
#include "Vec.h"
class Punto
{
    public:
    Punto();                                             // Constructor por defecto
    Punto(double n);                                     // Constructor
    Punto(double v_x, double v_y, double v_z);           // Constructor
    Punto(const Punto& p);                             // Constructor copia
    ~Punto();                                            // Destructor
    public:    
    double x, y, z;
};
#endif