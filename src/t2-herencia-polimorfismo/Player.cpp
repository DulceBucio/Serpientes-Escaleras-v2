//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 31/05/2023
//

#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(int playerNumber, int square) { // Constructor by arguments
    this->playerNumber = playerNumber;
    this->square = square;
}

Player::~Player() {} // Destructor

void Player::printPlayer() { // Method that shows the player attributes
    cout << playerNumber << " ";
    cout << square << " ";
}