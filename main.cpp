#include <iostream>
#include <vector>
#include <fstream>

#include "screen.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;

int main()
{

    Screen aux(20,20);
    aux.setBrush('x');
    Reta r;
    r.setPontos(0,0, 10, 10);
    r.draw(aux);

    Retangulo ret(12, 12, 6, 4);
    aux.setBrush('@');
    ret.draw(aux);


    aux.print();
    return 0;
}

