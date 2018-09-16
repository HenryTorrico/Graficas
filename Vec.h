#include <cmath>
#include "ColorRGB.h"
class Vec
{
    public:
            
            double x,y,z;
            Vec(double x, double y, double z) : x(x), y(y), z(z) {}
            Vec operator - (const Vec& v) const { return Vec(x-v.x, y-v.y, z-v.z); }

};