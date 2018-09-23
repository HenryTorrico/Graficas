#include "Esfera.h"
inline double dot(const Vec& a, const Vec& b) {
    return (a.x*b.x + a.y*b.y + a.z*b.z);
    }

bool Esfera::intersect(const Rayo& ray, double &t)const {
    const Vec o = ray.o;
    const Vec d = ray.d;
    const Vec oc = o - c;
    const double b = 2 * dot(oc, d);
    const double c = dot(oc, oc) - r*r;
    double disc = b*b - 4 * c;
    if (disc < 1e-4) return false;
    disc = sqrt(disc);
    const double t0 = -b - disc;
    const double t1 = -b + disc;
    t = (t0 < t1) ? t0 : t1;
    return true;       
}