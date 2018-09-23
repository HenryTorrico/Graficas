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
    Vec operator- (const Punto& p) const;           // Restar dos puntos
    Punto operator+ (const Vec& v) const;           // Sumar al punto un vector
    Punto operator- (const Vec& v) const;           // Restar al punto un vector
    Punto operator* (const double n) const;              // Multiplicar un punto por un numero
    friend Punto operator* (double n, const Punto& p); // Multiplicar un mumero por un punto
    public:    
    double x, y, z;
};
#endif