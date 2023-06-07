//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 31/05/2023
//


#include "MyGame.h"
#include <iostream>
using namespace std;

MyGame::MyGame() { // Sets up the initial state of the game by initializing the max number of turns,
    // player numbers, and their starting positions on the board
    maxTurns = 30;
    turn.setTurn(1);
    players[0].setPlayerNumber(1);
    players[1].setPlayerNumber(2);
    players[0].setSquare(1);
    players[1].setSquare(1);
}

// Constructor based on the parameters decided by the user
MyGame::MyGame(int userTiles, int userSnakes, int userLadders, int userNumPlayers, int userMaxTurns, int userReward, int userPenalty) {
    Board board(userTiles, userSnakes, userLadders);
    tiles = userTiles;
    snakes = userSnakes;
    ladders = userLadders;
    reward = userReward;
    penalty = userPenalty;
    maxTurns = userMaxTurns;
    turn.setTurn(1);
    numPlayers = userNumPlayers;
    players.resize(userNumPlayers);
    for (int i = 0; i < numPlayers; i++){
        players[i].setPlayerNumber(i+1);
        players[i].setSquare(1);
    }
}

void MyGame::printTurn(Player &player) { // Prints the details of a player's turn
    Dice dice;
    cout << turn;
    cout << player;
    int initialSquare = player.getSquare();
    int currentDice = dice.roll();
    player.setSquare(initialSquare + currentDice);
    int finalSquare = player.getSquare();
    char currentType = board.getType(finalSquare);
    if (finalSquare < tiles) {
        if (currentType == 'L') {
            finalSquare = min(finalSquare + reward, tiles);
        } else if (currentType == 'S') {
            finalSquare = max(0, finalSquare - penalty);
        }
        turn++;
    }
    cout << currentDice << " " << currentType << " " << finalSquare << "\n";
}

void MyGame::playGame() { // Controls the flow of the game by determining which player's turn it is and invoking
    // 'printTurn' to print the details of that turn
    int currentPlayerIndex = (turn.getTurn() % numPlayers) - 1;
    if (currentPlayerIndex == -1){
        currentPlayerIndex = numPlayers - 1;
    }
    // Prints the players by turn
    for (currentPlayerIndex; currentPlayerIndex < numPlayers; currentPlayerIndex++){
        printTurn(players[currentPlayerIndex]);

    }
}

void MyGame::start() { // Begins the game, manages the turn-based gameplay, and determines the game's
    // outcome based on the max number of turns and players' positions on the board
    playGame();
    if (turn > maxTurns) {
        cout << "The maximum number of turns has been reached... \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
    for (int i = 0; i < numPlayers; ++i) {
        if (players[i].getSquare() >= tiles) {
            cout << "Player #" << i + 1 << " is the winner!!! \n";
            cout << "-- GAME OVER -- \n";
            exit(0);
        }
    }
}



MyGame::~MyGame() {}