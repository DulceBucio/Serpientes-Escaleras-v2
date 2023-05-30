//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//

#include <iostream>
#include "Board.h"

using namespace std;

Board::Board() { // Initializes the 'boxes' vector with 31 elements, each set to the character 'N'
    // It then sets specific elements of the vector to 'S' and 'L', representing the snakes and ladders
    //boxes[4] = 'S';
    //boxes[13] = 'S';
    //boxes[24] = 'S';
    //boxes[6] = 'L';
    //boxes[19] = 'L';
    //boxes[10] = 'L';
}

Board::Board(const vector<Tile*> &boxes, const int &numTiles) {
    for
}

void Board::printBoard() { // Prints the value pointed to by the iterator, followed by a newline character
    for (vector<char>::const_iterator it1 = boxes.begin(); it1 != boxes.end(); it1++){
        cout << *it1 << "\n";
    }
}

char Board::getType(int index) { // Returns the value at the specified index in the 'boxes' vector
    return boxes[index];
}