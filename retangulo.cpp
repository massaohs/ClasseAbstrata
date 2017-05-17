#include "retangulo.h"


Retangulo::Retangulo(int mx, int my, int larg, int alt)
{
    x0 = mx;
    y0 = my;
    largura = larg;
    altura = alt;
}

void Retangulo::draw(Screen &t)
{
    for(int j=y0; j<y0+altura; j++){
        t.setPixel(x0, j);
        t.setPixel(x0+largura-1, j);
    }

    for(int i=x0; i<x0+largura; i++){
        t.setPixel(i, y0);
        t.setPixel(i, y0+altura-1);
    }

}


