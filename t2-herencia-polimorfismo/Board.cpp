//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//

#include <iostream>
#include "Board.h"

using namespace std;

//Board::Board() { // Initializes the 'boxes' vector with 31 elements, each set to the character 'N'
    // It then sets specific elements of the vector to 'S' and 'L', representing the snakes and ladders
    //boxes[4] = 'S';
    //boxes[13] = 'S';
    //boxes[24] = 'S';
    //boxes[6] = 'L';
    //boxes[19] = 'L';
    //boxes[10] = 'L';
//}

Board::Board(int numTiles, int numSnakes, int numLadders) {
    this->numTiles = numTiles;
    for (int i = 0; i < numTiles; i++) {
        this->boxes.push_back(new Tile('N', 1));
    }
}
//}

void Board::printBoard() { // Prints the value pointed to by the iterator, followed by a newline character
    for (auto iterador: boxes)
        iterador->print();
}

