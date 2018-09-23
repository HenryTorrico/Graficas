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
