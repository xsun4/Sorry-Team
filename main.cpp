#include <iostream>
#include "game_board.h"
#include "piece.h"

using namespace std;

int main() {
    Spaces my_space;
    vector<Spaces> game_board;
    for (int i = 1; i <= 60; i++){
        bool has_piece;
        game_board.push_back(Spaces(has_piece, i ));
    }


    cout << "The outside ring of the game board has " << game_board.size()<< " pieces" << endl;

    return 0;
}