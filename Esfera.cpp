#include "Esfera.h"

bool Esfera::intersecta(const Ray& ray, double &t)
{
    const Vec o=ray.o;
    const Vec d=ray.d;
    const Vec oc=o-c;
    
    const double b= 2*dot(oc,d);
    const double c=dot(oc,oc)-r*r;
    double disc=b*b-4*c;
    if(disc<1e-4) return false;
    else
    {
        disc=sqrt(disc);
        const double t0=-b-disc;
        const double t1=-b+disc;
        t=(t0<t1)? t0:t1;
        return true;
    }
}