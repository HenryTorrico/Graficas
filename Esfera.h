#include "Rayo.h"
class Esfera 
{
    public:
        Vec c; //centro
        double r; //radio
        Esfera(const Vec& c, double r) : c(c), r(r) {}
        double dot(const Vec& a, const Vec& b){return (a.x*b.x + a.y*b.y + a.z*b.z);}
        bool intersecta(const Ray& ray, double &t);
    
};