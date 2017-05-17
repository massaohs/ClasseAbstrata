#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    ifstream entrada;
    ofstream saida;

    entrada.open("entrada.txt");
    if(!entrada.is_open()){
        exit(-3);
    }
    saida.open("saida.txt");
    if(!saida.is_open()){
        exit(-2);
    }


    Screen *tela;
    Screen *arqtela;
    FiguraGeometrica *figura;

    string funcao;

    while(entrada >> funcao){
        cout << funcao << endl;

        if(funcao == "dim"){
            int largura, altura;
            entrada >> largura >> altura;
            tela = new Screen(altura, largura);
            arqtela = new Screen(altura, largura);

        }
        else if(funcao == "brush"){
            char brush;
            entrada >> brush;
            tela->setBrush(brush);
        }
        else if(funcao == "line"){

            int lx0,ly0, lx1, ly1;
            entrada >> lx0 >> ly0 >> lx1 >> ly1;
            figura = new Reta(lx0, ly0, lx1, ly1);
            figura->draw(*tela);
            figura->draw(*arqtela);
            cout << *tela;
            saida << *tela;
            delete(figura);
            tela->clear();
        }
        else if(funcao == "rectangle"){
            int rx0, ry0, rlarg,  ralt;
            entrada >> rx0 >> ry0 >> rlarg >> ralt;
            figura = new Retangulo(rx0, ry0, rlarg, ralt);
            figura->draw(*tela);
            figura->draw(*arqtela);
            cout << *tela;
            saida << *tela;
            delete(figura);
            tela->clear();
        }
        else if(funcao == "circle"){

            int cx0, cy0, craio, cfillmode;
            entrada >> cx0 >> cy0 >> craio >> cfillmode;
            figura = new Circulo(cx0, cy0, craio, cfillmode);
            figura->draw(*tela);
            figura->draw(*arqtela);
            cout << *tela;
            saida << *tela;
            delete(figura);
            tela->clear();
        }
    }

    saida << *arqtela;
    cout << *arqtela;

    entrada.close();
    saida.close();

    return 0;
}

