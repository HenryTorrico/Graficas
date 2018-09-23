#include "Punto.h"
#include "Rayo.h"
#ifndef ESFERA_H
#define ESFERA_H
class Esfera 
{
    public:
        Punto c;
        double r;
        Esfera(const Punto& ca, double rad): c(ca), r(rad) {};
        bool intersect(const Rayo& ray, double &t) const;
   
};
#endif