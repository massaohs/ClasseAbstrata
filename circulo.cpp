#include "circulo.h"
#include <cmath>
#include <iostream>
using namespace std;


Circulo::Circulo(int x0, int y0, int r, int fillmode){
    this->x0 = x0;
    this->y0 = y0;
    this->r = r;
    this->fillmode=fillmode;
}

void Circulo::draw(Screen &t)
{
//1a Parte: DESENHA-SE APENAS O CONTORNO DO CÍRCULO

    if(fillmode==0){
        int AuxYi;
        int AuxXi;
        for(int i=x0-r; i<=x0+r; i++){
            if(i==x0-r || i==x0+r){
                t.setPixel(i,y0);
            }
            else if(i==x0){
                t.setPixel(i, y0+r);
                t.setPixel(i, y0-r);
            }
            else{
                AuxYi = CalcAuxY(i, r, x0, y0);
                t.setPixel(i, y0+AuxYi);
                t.setPixel(i, y0-AuxYi);

                int j = (y0-r)+(i-(x0-r));
                AuxXi = CalcAuxX(j, r, x0, y0);
                t.setPixel(x0+AuxXi, j);
                t.setPixel(x0-AuxXi, j);
            }

        }
    }
    //2a Parte: DESENHA-SE CIRCULO TODO PREENCHIDO
    else if(fillmode==1){
        int AuxYi;
        int AuxXi;
        for(int i=x0-r; i<=x0+r; i++){
            AuxYi = CalcAuxY(i, r, x0, y0);
            t.setPixel(i, y0+AuxYi);
            t.setPixel(i, y0-AuxYi);

            int j = (y0-r)+(i-(x0-r));
            AuxXi = CalcAuxX(j, r, x0, y0);
            t.setPixel(x0+AuxXi, j);
            t.setPixel(x0-AuxXi, j);
            for(int k=y0-AuxYi+1; k<y0+AuxYi; k++){
                t.setPixel(i, k);
            }
            for(int w=x0-AuxXi+1; w<x0+AuxYi; w++){
                t.setPixel(w, j);
            }
        }
    }
    else{
        exit(-1);
    }

}

int Circulo::CalcAuxY(int x, int r, int x0, int y0)
{
    float yi;
    yi = y0 + sqrt(r*r + 2*x0*x - x*x - x0*x0);
    int aux = yi;
    float aux2 = yi-aux;
    if(aux2>=0.5){
        aux = aux+1;
    }
    return (aux-y0);
}

int Circulo::CalcAuxX(int y, int r, int x0, int y0)
{
    float xi;
    xi = x0 + sqrt(r*r + 2*y0*y - y*y - y0*y0);
    int aux = xi;
    float aux2 = xi-aux;
    if(aux2>=0.5){
        aux = aux+1;
    }
    return (aux-x0);
}

