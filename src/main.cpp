/*
 * @author Paulo R. Almeida Filho
 * mail: palmeidaprogramming@gmail.com
 * simple find path using memoization
 * http://github.com/palmeidaprog/findpath_memoizaion
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void createMatrix(bool **m, int l, int c);
void printMatrix(bool **m, int l, int c);

// Arguments: lines and columns
int main(int argc, char *argv[]) {
    srand(time(NULL));
    int l, c;

    if(argc < 2) {
        cout << "Not enough arguments!\n" << endl;
        return 1;
    }
    l = (int) argv[0][0];
    c = (int) argv[1][0];
    bool m[l][c];
    createMatrix(m, l, c);
    printMatrix(m, l, c);

    return 0;
}

void createMatrix(bool **m, int l, int c) {

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            m[i][j] = rand()%2;
        }
    }
}

void printMatrix(bool **m, int l, int c) {

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            cout << "\t" << (m[i][j] ? "X" : " ");
        }
        cout << endl;
    }
}