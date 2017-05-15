#ifndef RETANGULO_H
#define RETANGULO_H
#include "screen.h"
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
    int x0, y0;
    int largura, altura;
public:
    Retangulo(int x0, int y0, int larg, int alt);

    void draw(Screen &t);
};

#endif // RETANGULO_H
