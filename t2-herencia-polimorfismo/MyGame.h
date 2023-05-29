//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//

#ifndef SERPIENTES_ESCALERAS_MYGAME_H
#define SERPIENTES_ESCALERAS_MYGAME_H
#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Dice.h"

class MyGame {
    int turn;
    Player players[2];
    Player currentPlayer;
    int maxTurns;
    Board board;
public:
    // Constructor
    MyGame();
    // Destructor
    ~MyGame();
    // Methods
    int getTurn() {return turn;}
    void setTurn(int turn) {this ->turn = turn;}
    void setMaxTurns(int maxTurns) {this ->maxTurns = maxTurns;}
    void printTurn(Player &player);
    void playGame();
    void start();
};

#endif //SERPIENTES_ESCALERAS_MYGAME_H