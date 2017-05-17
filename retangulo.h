#ifndef RETANGULO_H
#define RETANGULO_H
#include "screen.h"
#include "figurageometrica.h"
/**
 * @brief A classe Retangulo
 */
class Retangulo : public FiguraGeometrica
{
private:
    int x0, y0;///coordenada correspondente ao ponto superrior esquerdo do retângulo
    int largura, altura;///variáveis que corresponde a largura e altura do retângulo
public:
    /**
     * @brief Retangulo - Contrutor
     * @param x0 coordenada x do ponto superior esquerdo do retangulo
     * @param y0 coordenada y do ponto superior esquerdo do retangulo
     * @param larg largura do retângulo
     * @param alt altura do retangulo
     */
    Retangulo(int x0, int y0, int larg, int alt);
    /**
     * @brief draw recebe uma tela e se desenha dentro dela
     * @param t é a tela
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
