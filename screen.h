#ifndef SCREEN_H
#define SCREEN_H
#include <vector>

using namespace std;

class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor da classe
  Screen(int nlin, int ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  void print();

  // envia a tela para um stream de saida
 // friend std::ostream& operator<<(ostream &os, Screen &t);
};
#endif // SCREEN_H

