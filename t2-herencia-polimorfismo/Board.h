//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//


#ifndef SERPIENTES_ESCALERAS_BOARD_H
#define SERPIENTES_ESCALERAS_BOARD_H
#include <iostream>
#include <vector>
#include "Tile.h"
using namespace std;


class Board {
    vector<Tile *> boxes;
    int numTiles;
public:
    // Constructors
    Board();
    Board(const vector<Tile*> &boxes, const int &numTiles): boxes(boxes), numTiles(numTiles) { };
    Board(const Board &boardCopy): boxes(boardCopy.boxes) { };
    // Destructor
    ~Board() {};
    // Accessor
    char getType(int);
    // Method
    void printBoard();
};


#endif //SERPIENTES_ESCALERAS_BOARD_H