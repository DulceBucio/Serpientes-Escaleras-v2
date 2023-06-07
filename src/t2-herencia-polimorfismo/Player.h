//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 31/05/2023
//

#ifndef SERPIENTES_ESCALERAS_PLAYER_H
#define SERPIENTES_ESCALERAS_PLAYER_H
#include <iostream>
#include "Person.h"
using namespace std;
#pragma once

class Player: public Person {
private:
    int playerNumber;
    int square;
public:
    //Constructors
    Player() = default;
    Player(const int &playerNumber, const int &square): playerNumber(playerNumber), square(square) { };
    Player(const Player &playerCopy): playerNumber(playerCopy.playerNumber), square(playerCopy.square) { };
    Player(int,int);

    //Destructor
    ~Player();

    //Accessors
    int getPlayerNumber() { return playerNumber; }
    int getSquare() { return square; }

    //Mutators
    void setPlayerNumber(int playerNumber) { this->playerNumber = playerNumber; }
    void setSquare(int square) { this->square = square; }
    void printPlayer();

    // Operator overloading
    Player operator+(int value) const {
        return Player(*this) += value;
    }

    Player& operator+=(int value) {
        square += value;
        return *this;
    }
    friend ostream &operator<<(ostream &print, Player player)
    {
        print << player.getName() << " " << player.getPlayerNumber();
        return print;
    }
};


#endif //SERPIENTES_ESCALERAS_PLAYER_H