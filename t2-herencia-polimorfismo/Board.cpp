//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//

#include <iostream>
#include "Board.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

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
    srand(time(0)); // Use current time as seed for random generator

    this->numTiles = numTiles;
    // Fill the entire board with normal tiles
    for (int i = 0; i < numTiles; i++) {
        this->boxes.push_back(new Tile('N'));
    }

    // Change random tiles to Snakes
    for (int i = 0; i < numSnakes; i++) {
        int pos = rand() % numTiles;
        delete this->boxes[pos];
        this->boxes[pos] = new Snake('S');
    }

    // Change random tiles to Ladders
    for (int i = 0; i < numLadders; i++) {
        int pos = rand() % numTiles;
        delete this->boxes[pos];
        this->boxes[pos] = new Ladder('L');
    }
}
//}

void Board::printBoard() { // Prints the value pointed to by the iterator, followed by a newline character
    for (auto iterador: boxes)
        iterador->print();
}

