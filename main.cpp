#include <iostream>
#include <vector>
#include <fstream>

#include "screen.h"
using namespace std;

int main()
{
    Screen aux(3,3);
    aux.setBrush('@');
    aux.setPixel(2,2);
}

