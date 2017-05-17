#include <iostream>
#include <vector>
#include <fstream>
#include <string>

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
    Screen aux(20,20);



    /*aux.setBrush('x');
    Reta r;
    r.setPontos(0,2, 3, 10);
    r.draw(aux);

    Retangulo ret(2, 12, 3, 5);
    aux.setBrush('@');
    ret.draw(aux);


    Circulo c(11, 4, 3, 0);
    aux.setBrush('0');
    c.draw(aux);

    Circulo c2(11, 14, 3, 1);
    aux.setBrush('0');
    c2.draw(aux);*/









    aux.print();

    ofstream saida;

    saida.open("saida.txt");
    if(!saida.is_open()){
        exit(-2);
    }

    saida << aux;


    entrada.close();
    saida.close();

    return 0;
}

