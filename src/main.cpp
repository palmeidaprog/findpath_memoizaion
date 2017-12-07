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

bool **createMatrix(int l, int c);
void printMatrix(bool **m, int l, int c);

// Arguments: lines and columns
int main(int argc, char *argv[]) {
    srand(time(NULL));
    int l, c;
    bool **m;

    if(argc < 2) {
        cout << "Not enough arguments!\n" << endl;
        return 1;
    }
    l = atoi(argv[1]);
    c = atoi(argv[2]);
    m = createMatrix(l, c); 
    printMatrix(m, l, c);

    return 0;
}

bool **createMatrix(int l, int c) {
    bool **m = new bool*[l];

    cout << "Creating matrix " << l << " by " << c << endl;

    for(int i = 0; i < l; i++) {
        m[i] = new bool[c];
        for(int j = 0; j < c; j++) {
            m[i][j] = rand()%2;
        }
    }

    return m;
}

void printMatrix(bool **m, int l, int c) {

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if(i == 0 && j == 0) {
                cout << "\tS";
            }
            else if(i == l - 1 && j == c - 1) {
                cout << "\tE";
            }
            else {
                cout << "\t" << (m[i][j] ? "X" : "_");
            }
        }
        cout << endl;
    }
}