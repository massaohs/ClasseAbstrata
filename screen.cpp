#include <iostream>
#include <fstream>
#include "screen.h"
#include <vector>
using namespace std;

Screen::Screen(int nl, int nc){
    nlin = nl;
    ncol = nc;
    mat = vector<vector<char>>(nlin, vector<char>(ncol, '-'));
}

void Screen::setPixel(int x, int y){
    mat[x][y] = brush;
}

void Screen::clear(){
    for(int i =0; i<nlin*ncol;i++){
        mat[0][i] = 0;
    }
}
void Screen::setBrush(char brush)
{
    this->brush = brush;
}

void Screen::print()
{
    for(int i=0; i<nlin; i++){
        for(int j=0; j<ncol; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

/*ostream &Screen::operator<<(ostream &os, Screen &t)
{
    for(int i =0; i<nlin;i++){
        for(int j =0; j<ncol; j++){
            os.operator <<(mat[i][j]);
            os.operator <<(" ");
        }
        os.operator <<(endl);
    }
}*/
