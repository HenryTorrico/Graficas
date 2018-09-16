#include <fstream>
#include <iostream>
#include "Esfera.h"
using namespace std;
int main()
{
    const int W=500;  //
    const int H=500;

    
    //ColorRGB pixel_col[H][W];
    const Vec red(255,255,0);
    const Vec black(0,0,0);
    //ColorRGB red(255,0,0);
   // ColorRGB black(0,0,0);
    Esfera esfera(Vec(W/2,H/2,50),50);

    std::ofstream out("out.ppm");
    out << "P3\n" << W << ' ' << H << ' ' << "255\n";
    double t;
    Vec pix_col(black);
    //para cada pixel
    for(int y=0;y<H;y++)
    {
        for(int x=0;x<W;x++)
        {
            pix_col=black;
            //enviar rayo
            const Ray ray(Vec(x,y,0),Vec(0,0,1));
            //verificamos intersecciones
            //double t=20000;
            if(esfera.intersecta(ray,t))
            {
                //color the pixel;
                pix_col=red;
            }
            
        }
    }
    return 0;
}