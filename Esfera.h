#include "Rayo.h"
class Esfera 
{
    public:
        Vec c;
        double r;
        Esfera(const Vec& ca, double rad): c(ca), r(rad) {};
        Vec getNormal(const Vec& pi) const;
        bool intersect(const Rayo& ray, double &t) const;
   
};