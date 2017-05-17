#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica{
private:
    int x0, y0;
    int x1, y1;
    int CalcArredY(float ca, int x, int yi);
    int CalcArredX(float ca, int x, int x0);
public:
    Reta();

    int getXPonto0();
    int getYPonto0();
    void setPonto0(float mx, float my);

    int getXPonto1();
    int getYPonto1();
    void setPonto1(float mx, float my);


    void setPontos(float mx0, float my0, float mx1, float my1);


    void draw(Screen &t);
};

#endif // RETA_H
