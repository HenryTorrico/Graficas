#include <cmath>
#include "ColorRGB.h"
class Vec
{
    public:
    double x,y,z;
    Vec(double x, double y, double z);
    Vec operator + (const Vec& v) const; 
    Vec operator - (const Vec& v) const; 
    Vec operator * (double d) const; 
    Vec operator / (double d) const; 
    Vec normalize() const; 
};