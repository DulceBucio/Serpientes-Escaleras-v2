//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//

#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Dice.h"
#include "MyGame.h"
using namespace std;

int main() {
    bool activeGame;
    activeGame = true;
    cout << "Press C to continue next turn, or E to end the game: \n";
    char answer;
    MyGame currentGame;
    while (activeGame){ // Enter a loop that continues until the game state becomes inactive
        cin >> answer;
        cin.ignore();
        if (answer == 'C') { // Check if the player wants to continue the game
            currentGame.start();
        }
        else if (answer == 'E') { // Check if the player wants to end the game
            cout << "Thanks for playing!!! \n";
            cout << "-- GAME OVER -- \n";
            activeGame = false;
        }
        else { // Handle invalid user input
            cout << "Invalid option, please press C to continue next turn or E to end the game" << "\n";
        }
    }
    return 0;
};