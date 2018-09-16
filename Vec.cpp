#include "Vec.h"
Vec Vec::normalize() const {
    double mg = sqrt(x*x + y*y + z*z);
    return Vec(x/mg,y/mg,z/mg);
}

Vec::Vec(double x, double y, double z) : x(x), y(y), z(z) {}
Vec Vec::operator + (const Vec& v) const { return Vec(x+v.x, y+v.y, z+v.z); }
Vec Vec::operator - (const Vec& v) const { return Vec(x-v.x, y-v.y, z-v.z); }
Vec Vec::operator * (double d) const{ return Vec(x*d, y*d, z*d); }
Vec Vec::operator / (double d) const { return Vec(x/d, y/d, z/d); }