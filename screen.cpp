#include <iostream>
#include "screen.h"
#include <vector>
using namespace std;

Screen::Screen(int nl, int nc){
    nlin = nl;
    ncol = nc;
    mat = vector<vector<char>>(nlin, vector<char>(ncol, ' '));
}

void Screen::setPixel(int x, int y){
    mat[y][x] = brush;
}

void Screen::clear(){
    for(int i =0; i<nlin*ncol;i++){
        mat[0][i] = ' ';
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

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.nlin;i++){
        for(int j=0; j<t.ncol; j++){
            os<<(t.mat[i][j]) << " ";
        }
        os<<(endl);
    }
    return os;
}
