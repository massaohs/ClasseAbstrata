#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica{
private:
    int x0, y0;///Ponto da reta fornecido pelo usuário
    int x1, y1;///Ponto da reta fornecido pelo usuário
    /**
     * @brief CalcArredY faz o calculo para o arredondamento de y
     * @param ca variavel auxiliar que será usada para guardar o valor do coeficiente angular
     * @param x é o valor no eixo das abcissas da screen
     * @param yi coordenada em questão que estarpá envolvida no calculo
     * @return
     */
    int CalcArredY(float ca, int x, int yi);
    /**
     * @brief CalcArredX faz o calculo para o arredondamento de x
     * @param ca variavel auxiliar que será usada para guardar o valor do coeficiente angular
     * @param x é o valor no eixo das abcissas da screen
     * @param x0 coordenada em questão que estará envolvida no calculo
     * @return
     */
    int CalcArredX(float ca, int x, int x0);
public:

    Reta(int x0, int y0, int x1, int y1);///Construtor
    ///Este método serve para recuperar um ponto x da reta
    int getXPonto0();
    ///Este método serve para recuperar um ponto y da reta
    int getYPonto0();
    ///Este método serve para "setar" um ponto xy da reta
    void setPonto0(float mx, float my);
    ///Este método serve para recuperar um ponto x da reta
    int getXPonto1();
    ///Este método serve para recuperar um ponto y da reta
    int getYPonto1();
    ///Este método serve para "setar" um ponto xy da reta
    void setPonto1(float mx, float my);

    ///Este método serve para "setar" dois pontos de uma reta
    void setPontos(float mx0, float my0, float mx1, float my1);

    ///chama a tela e se desenha nela
    void draw(Screen &t);
};

#endif // RETA_H
