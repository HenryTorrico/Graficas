#include "Punto.h"
Punto::Punto(): x(0), y(0), z(0)
{}
Punto::Punto(double n): x(n), y(n), z(n)
{}
Punto::Punto(double v_x, double v_y, double v_z)
{}
Punto::Punto(const Punto& p): x(p.x), y(p.y), z(p.z)
{}
Punto::~Punto()
{}

// Restar dos puntos --------------------------------------------------------------------------------------------------
Vec Punto::operator-(const Punto& p) const{
    return (Vec(x - p.x, y - p.y, z - p.z));
}
// Sumar al punto un vector -------------------------------------------------------------------------------------------
Punto Punto::operator+(const Vec& v) const
{
    return (Punto(x + v.x, y + v.y, z + v.z));
}
// Retar al punto un vector -------------------------------------------------------------------------------------------
Punto Punto::operator-(const Vec& v) const
{
    return (Punto(x - v.x, y - v.y, z - v.z));
}
// Multiplicar un punto por un numero ---------------------------------------------------------------------------------
Punto Punto::operator*(const double n) const 
{
    return (Punto( x * n, y * n, z * n));
}
// Multiplicar un numero por un punto ---------------------------------------------------------------------------------
Punto operator*(double n, const Punto& p)
{
    return (Punto(n * p.x , n * p.y, n * p.z));
}