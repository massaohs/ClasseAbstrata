#include "reta.h"
#include <iostream>

Reta::Reta(int x0, int y0, int x1, int y1)
{
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
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
    y1 = my;
}


void Reta::setPontos(float mx0, float my0, float mx1, float my1){
    x0 = mx0; y0 = my0;
    x1 = mx1; y1 = my1;
}

void Reta::draw(Screen &t){
    float ca; // variavel auxiliar que será usada para guardar o valor do coeficiente angular
    int Dy = y1-y0;
    int Dx = x1-x0;

    if(Dx>=Dy){
        int yi;  // variavel auxiliar para guardar o valor do Yi que será calculado pela função CalcArredY
        ca = (float)Dy/Dx; // coeficiente angular
        for (int i = x0; i<=x1; i++){
            yi = CalcArredY(ca, i-x0, y0); // calcula cada coordenada Yi do ponto
            t.setPixel(i, yi);
        }
    }
    else{
        int xi;  // variavel auxiliar para guardar o valor do Xi que será calculado pela função CalcArredX
        ca = (float)Dx/Dy; // coeficiente angular
        for (int j = y0; j<=y1; j++){
            xi = CalcArredX(ca, j-y0, x0); // calcula cada coordenada Yi do ponto
            t.setPixel(xi, j);
        }
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

int Reta::CalcArredX(float ca, int x, int x0){
    float x1 = (ca*x + x0);
    int aux = x1;
    float aux2 = x1-aux;

    if(aux2>=0.5){
        return x1+1;
    }
    else{
        return x1;
    }
}
