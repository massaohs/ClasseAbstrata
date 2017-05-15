#include "reta.h"
#include <iostream>

Reta::Reta()
{
}




int Reta::getXPonto0()
{
    return x0;
}
int Reta::getYPonto0()
{
    return y0;
}
void Reta::setPonto0(float mx, float my)
{
    x0=mx;
    y0=my;
}


int Reta::getXPonto1(){
    return x1;
}
int Reta::getYPonto1(){
    return y1;
}
void Reta::setPonto1(float mx, float my){
    x1 = mx;
    y1 = mx;
}


void Reta::setPontos(float mx0, float my0, float mx1, float my1){
    x0 = mx0; y0 = my0;
    x1 = mx1; y1 = my1;
}

void Reta::draw(Screen &t){
    int yi;  // variavel auxiliar para guardar o valor do Yi que será calculado pela função CalcArredY
    float ca; // variavel auxiliar que será usada para guardar o valor do coeficiente angular
    ca = (float)(y1-y0)/(x1-x0); // coeficiente angular
    for (int i = x0; i<=x1; i++){
        yi = CalcArredY(ca, i-x0, y0); // calcula cada coordenada Yi do ponto
        t.setPixel(i, yi);
    }

}

int Reta::CalcArredY(float ca, int x, int y0){
    float y1 = (ca*x + y0);
    int aux = y1;
    float aux2 = y1-aux;

    if(aux2>=0.5){
        return y1+1;
    }
    else{
        return y1;
    }
}
