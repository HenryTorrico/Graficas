#include "Vec.h"
class Ray
{
    public:
        Vec o; //origen
        Vec d; //destino
        Ray(const Vec& o, const Vec& d) : o(o), d(d) {}

};