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
    entrada.open("entrada.txt");
    if(!entrada.is_open()){
        exit(-3);
    }



    vector <FiguraGeometrica*> figuras;

    string str;
    int largura, altura;
    char brush;
    int lx0,ly0, lx1, ly1;
    int rx0, ry0, rlarg,  ralt;
    int cx0, cy0, craio, cfillmode;
    int i = 0;
    while(entrada >> str){
        if(str == "dim"){
            entrada >> largura >> altura;
            cout << largura << "  " << altura << endl;
        }
        else if(str == "brush"){
            entrada >> brush;
        }
        else if(str == "line"){
            entrada >> lx0 >> ly0 >> lx1 >> ly1;
            figuras[i] = Reta(lx0, ly0, lx1, ly1);
        }
        else if(str == "rectangle"){
            entrada >> rx0 >> ry0 >> rlarg >> ralt;
        }
        else if(str == "circle"){
            entrada >> cx0 >> cy0 >> craio >> cfillmode;
        }
    }





    ofstream saida;

    saida.open("saida.txt");
    if(!saida.is_open()){
        exit(-2);
    }



    entrada.close();
    saida.close();

    return 0;
}

