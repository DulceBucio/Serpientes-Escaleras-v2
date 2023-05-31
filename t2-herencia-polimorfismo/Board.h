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
#include "Snake.h"
#include "Ladder.h"
using namespace std;


class Board {
    vector<Tile *> boxes;
    int numTiles, numSnakes, numLadders;
public:
    // Constructors
    Board(int numTiles, int numSnakes, int numLadders);
    Board(const Board &boardCopy): boxes(boardCopy.boxes) { };
    // Destructor
    ~Board() {};
    // Accessor
    //char getType(int);
    // Method
    void printBoard();
};


#endif //SERPIENTES_ESCALERAS_BOARD_H