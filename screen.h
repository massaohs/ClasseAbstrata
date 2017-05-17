#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <fstream>

using namespace std;
/**
 * @brief A classe Screen
 */
class Screen{
private:
    /**
   * @brief nlin armazena o número de linhas que a sceen terá
   */
  int nlin, ncol;

  /**
   * @brief ncol armazena o número de colunas que a screen terá
   */
  char brush;

  /**
   * @brief mat armazena a matriz da tela
   */
  vector< vector<char> > mat;
public:
  /**
   * @brief Screen - Construtor da classe
   * @param nlin número de linhas
   * @param ncol número de colunas
   */
  Screen(int nlin, int ncol);

  /**
   * @brief setPixel desenha um pixel na matriz usando o caractere guardado em brush
   * @param x para "setar" um pixel na matriz
   * @param y para "setar" um pixel na matriz
   */
  void setPixel(int x, int y);

  ///limpa a tela
  void clear();

  /**
   * @brief setBrush muda o caractere de desenho
   * @param brush armazena o caractere
   */
  void setBrush(char brush);
  ///Imprime um pixel
  void print();

  /// envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);
};
#endif // SCREEN_H

