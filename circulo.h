#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief A classe Circulo
 */
class Circulo : public FiguraGeometrica
{
private:

    int x0, y0;
    int r;
    int fillmode;
    /**
     * @brief CalcAuxY Função auxiliar que retorna um valor inteiro referente ao modulo da distancia de y0 até +-yi;
     * @param x é o valor no eixo das abcissas da screen
     * @param r é o raio do circulo
     * @param x0 é a coordenada x do centro do circulo
     * @param y0 é a coordenada y do centro do circulo
     * @return
     */
    int CalcAuxY(int x, int r, int x0, int y0);
    /**
     * @brief CalcAuxX Função auxiliar que retorna um valor inteiro referente ao modulo da distancia de x0 até +-xi;
     * @param x é o valor no eixo das abcissas da screen
     * @param r é o raio do circulo
     * @param x0 é a coodenada x do centro do circulo
     * @param y0 é a coodenada y do centro do circulo
     * @return
     */
    int CalcAuxX(int x, int r, int x0, int y0);

public:
    /**
     * @brief Circulo
     * @param x0 é a coodenada x do centro do circulo
     * @param y0 é a coodenada y do centro do circulo
     * @param r é o raio do circulo
     * @param fillmode
     */
    Circulo(int x0, int y0, int r, int fillmode);
    /**
     * @brief draw vai criar a scrren
     * @param t
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H
