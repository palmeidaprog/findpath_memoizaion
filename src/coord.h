/*
 * @author Paulo R. Almeida Filho
 * mail: palmeidaprogramming@gmail.com
 * simple find path using memoization
 * http://github.com/palmeidaprog/findpath_memoizaion
 */

#ifndef _COORD_H_
#define _COORD_H_

namespace findpath {

class Coord {
    int const x;
    int const y;
    int &path;

    const int &getPath();

public:
    Coord(int x, int y);

};

}

#endif // _COORD_H_