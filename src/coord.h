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
    //int &path;

    int &getPath() const;
    int getX() const;
    int getY() const;
    
public:
    Coord(int x1, int y1);
    ~Coord();
};

}

#endif // _COORD_H_