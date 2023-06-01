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

MyGame::MyGame(int userTiles, int userSnakes, int userLadders, int userNumPlayers, int userMaxTurns, int userReward, int userPenalty) {
    Board board(userTiles, userSnakes, userLadders);
    tiles = userTiles;
    snakes = userSnakes;
    ladders = userLadders;
    reward = userReward;
    penalty = userPenalty;
    maxTurns = userMaxTurns;
    turn = 1;
    numPlayers = userNumPlayers;
    players.resize(userNumPlayers);
    for (int i = 0; i < numPlayers; i++){
        players[i].setPlayerNumber(i+1);
        players[i].setSquare(1);
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
    if (finalSquare >= tiles) {
        finalSquare = tiles;
        currentType = 'N';
    }
    cout << currentDice << " " << currentType << " " << finalSquare << "\n";
    setTurn(getTurn()+1);
}

void MyGame::playGame() { // Controls the flow of the game by determining which player's turn it is and invoking
    // 'printTurn' to print the details of that turn
    int currentPlayerIndex = (turn % numPlayers) - 1;
    if (currentPlayerIndex == -1){
        currentPlayerIndex = numPlayers - 1;
    }
    printTurn(players[currentPlayerIndex]);
}

void MyGame::start() { // Begins the game, manages the turn-based gameplay, and determines the game's
    // outcome based on the max number of turns and players' positions on the board
    playGame();
    if (getTurn() > maxTurns) {
        cout << "The maximum number of turns has been reached... \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
    if (players[0].getSquare() >= tiles) {
        cout << "Player #1 is the winner!!! \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
    else if (players[1].getSquare() >= tiles){
        cout << "Player #2 is the winner!!! \n";
        cout << "-- GAME OVER -- \n";
        exit(0);
    }
}

MyGame::~MyGame() {}

