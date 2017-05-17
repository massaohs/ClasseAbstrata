#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica
{
private:
    int x0, y0;
    int r;
    int fillmode;

    int CalcAuxY(int x, int r, int x0, int y0); //Função auxiliar que retorna um valor inteiro referente ao modulo da distancia de y0 até +-yi;
    int CalcAuxX(int x, int r, int x0, int y0); //Função auxiliar que retorna um valor inteiro referente ao modulo da distancia de x0 até +-xi;

public:
    Circulo(int x0, int y0, int r, int fillmode);

    void draw(Screen &t);
};

#endif // CIRCULO_H
