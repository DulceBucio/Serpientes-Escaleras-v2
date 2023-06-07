//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 31/05/2023
//

#ifndef SERPIENTES_ESCALERAS_MYGAME_H
#define SERPIENTES_ESCALERAS_MYGAME_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "Board.h"
#include "Dice.h"

class MyGame {
    int turn, numPlayers, maxTurns;
    vector<Player> players;
    Player currentPlayer;
    Board board;
    int penalty, reward, tiles, snakes, ladders;
public:
    // Constructor
    MyGame();
    MyGame(int, int, int, int, int, int, int);
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