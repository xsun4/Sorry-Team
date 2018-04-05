//
// Created by Robert Baranov on 4/2/18.
//

#ifndef UNTITLED5_PIECE_H
#define UNTITLED5_PIECE_H

#include <iostream>
#include <string>


using namespace std;
enum Color {red,blue,green,yellow};

class Piece{
private:
    Color color;
    int location;
public:
    Piece();
    Piece(Color c, int loc);
    ~Piece();

    Color get_color() const;
    int get_location() const;

    void set_color(Color c);
    void set_location(int loc);

    void move(int delta_spaces);

};

#endif //UNTITLED5_PIECE_H
