#include <fstream>
#include <iostream>
#include "Esfera.h"
using namespace std;
inline double dot(const Vec& a, const Vec& b) {
    return (a.x*b.x + a.y*b.y + a.z*b.z);
}
int main()
{
    const int H = 500;
    const int W = 500;

    const Vec black(0, 0, 0);
    const Vec red(255, 0, 0);

    const Esfera sphere(Vec(W*0.5, H*0.5, 50), 50);
  

    std::ofstream out("out.ppm");
    out << "P3\n" << W << ' ' << H << ' ' << "255\n";

    double t;
    Vec pix_col(black);

    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
        pix_col = black;
        const Rayo ray(Vec(x,y,0),Vec(0,0,1));
        if (sphere.intersect(ray, t)) {
            pix_col = (red)  ;
        }
        out << (int)pix_col.x << ' '
            << (int)pix_col.y << ' '
            << (int)pix_col.z << '\n';
        }
    }
    return 0;
}