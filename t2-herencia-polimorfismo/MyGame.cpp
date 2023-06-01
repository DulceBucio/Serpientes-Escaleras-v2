//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//


#include "MyGame.h"
#include <iostream>
using namespace std;

MyGame::MyGame() { // Sets up the initial state of the game by initializing the max number of turns,
    // player numbers, and their starting positions on the board
    maxTurns = 30;
    turn = 1;
    players[0].setPlayerNumber(1);
    players[1].setPlayerNumber(2);
    players[0].setSquare(1);
    players[1].setSquare(1);
}

MyGame::MyGame(int userTiles, int userSnakes, int userLadders, int numPlayers, int userMaxTurns, int userReward, int userPenalty) {
    Board board(userTiles, userSnakes, userLadders);
    reward = userReward;
    penalty = userPenalty;
    maxTurns = userMaxTurns;
    players.resize(numPlayers);
    for (int i = 0; i < numPlayers; i++){
        players[i].init(i);
    }
}

void MyGame::printTurn(Player &player) { // Prints the details of a player's turn
    //srand(time(0));
    cout << turn << " ";
    Dice dice;
    player.printPlayer();
    int initialSquare = player.getSquare();
    int currentDice = dice.roll();
    player.setSquare(player.getSquare()+currentDice);
    char currentType = board.getType(player.getSquare());
    if (currentType == 'S') {
        player.setSquare(player.getSquare()-penalty);
    }
    if (currentType == 'L') {
        player.setSquare(player.getSquare()+reward);
    }

    int finalSquare = player.getSquare();
    if (finalSquare >= 30) {
        finalSquare = 30;
        currentType = 'N';
    }
    cout << currentDice << " " << currentType << " " << finalSquare << "\n";
    setTurn(getTurn()+1);
}

void MyGame::playGame() { // Controls the flow of the game by determining which player's turn it is and invoking
    // 'printTurn' to print the details of that turn
    if (turn%2 == 1) { printTurn(players[0]); }
    else if (turn%2 == 0) { printTurn(players[1]); }
}

void MyGame::start() { // Begins the game, manages the turn-based gameplay, and determines the game's
    // outcome based on the max number of turns and players' positions on the board
    playGame();
    if (getTurn() > maxTurns) {
        cout << "The maximum number of turns has been reached... \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
    if (players[0].getSquare() > 30) {
        cout << "Player #1 is the winner!!! \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
    else if (players[1].getSquare() > 30){
        cout << "Player #2 is the winner!!! \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
}

MyGame::~MyGame() {}

