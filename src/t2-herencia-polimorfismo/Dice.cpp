//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 31/05/2023
//


#include "Dice.h"
#include <iostream>
using namespace std;

int Dice::roll(){ // Generates a random number between 1 and the number of faces on the dice
    int facesNum = rand() % (faces - 1 + 1) + 1;
    return facesNum;
}

