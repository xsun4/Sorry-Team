//
// Created by Robert Baranov on 4/2/18.
//

#include "piece.h"

Piece::Piece() {
    color = red;
    location = 0;
}

Piece::Piece(Color c, int loc) {
    color = c;
    location = loc;
}

Piece::~Piece() {

}

Color Piece::get_color() const {
    return color;
}

int Piece::get_location() const {
    return location;
}

void Piece::set_color(Color c) {
    color = c;
}

void Piece::set_location(int loc) {
    location = loc;
}

void Piece::move(int delta_spaces) {
    location = location + delta_spaces;
}


