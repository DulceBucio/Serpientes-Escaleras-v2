//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 19/05/2023
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Tile.h"
#include "Snake.h"
#include "Ladder.h"
#include "Board.h"
#include "MyGame.h"
using namespace std;

int main() {
    srand(time(0));
    char gameMode;
    bool activeGame;
    activeGame = true;
    int userTiles, userSnakes, userLadders, userPenalty, userReward, userPlayers, userMaxTurns;
    cout << "Welcome \n";
    cout << "Enter the number of tiles for your board \n";
    cin >> userTiles;
    cout << "Enter the number of snakes for your board \n";
    cin >> userSnakes;
    cout << "Enter the number of ladders for your board \n";
    cin >> userLadders;
    cout << "Enter the penalty value for your board \n";
    cin >> userPenalty;
    cout << "Enter the reward value for your board \n";
    cin >> userReward;
    cout << "Enter the number of players for your game \n";
    cin >> userPlayers;
    cout << "Enter the max number of turns for your game \n";
    cin >> userMaxTurns;
    cout << "Press A for Automatic mode, or M for Manual mode \n";
    cin >> gameMode;
    cin.ignore();

    MyGame currentGame(userTiles, userSnakes, userLadders, userPlayers, userMaxTurns, userReward, userPenalty);

    if (gameMode == 'A') { // Automatic mode
        while (activeGame){ // Enter a loop that continues until the game state becomes inactive
            currentGame.start();
            }
        }

    else if (gameMode == 'M'){
        cout << "Press C to continue next turn, or E to end the game: \n";
        char answer;
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
            else {  //Handle invalid user input
                cout << "Invalid option, please press C to continue next turn or E to end the game" << "\n";
            }
        }
    }


    return 0;
};