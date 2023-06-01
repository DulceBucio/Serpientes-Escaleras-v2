# Snakes and Ladders

This repository contains an implementation of the popular board game "Snakes and Ladders" in the C++ programming language. The objective of the game is to move across a board using dice rolls, avoiding snakes while seeking to climb ladders to reach the goal.

## Instructions
1. Clone the repository by running the following command in your terminal:
```
git clone https://github.com/DulceBucio/Serpientes-Escaleras.git
```
2. Open the directory of the file using the full path on your operating system:
```
cd ...\Serpientes-Escaleras\src
```
3. Run the program using one of the following methods:

a) Using an IDE:

Open the src directory in your preferred IDE.
Compile and run the source files *.cpp within the project.
b) Using the command line (g++ compiler):

Execute the following command in the terminal:

```
g++ *.cpp -o program
```
Then, run the generated program with the following command:
```
./program
```
4. After successfully running the program, use the "C" key to start playing or the "E" key to exit the program.

Enjoy the Snakes and Ladders game!

## Classes
The game is composed of the following classes:
-Tile
-Snake
-Ladder
- Board  
The "Board" class represents a game board for the "Snakes and Ladders" game. It manages the state of the board and provides methods to interact with it.
The class has the following member methods:
  - Board(): This is the constructor for the Board class. It initializes the board by creating a vector of characters representing the boxes on the board. Each box is initially set to 'N' (normal box). However, certain boxes are marked with 'S' (snake) or 'L' (ladder) at specific indices.
  - ~Board(): This is the destructor for the Board class. It does not perform any specific cleanup since the board is managed by the vector class.
  - printBoard(): This function prints the current state of the board. It iterates over the vector of boxes and prints each box character on a new line.
  - getType(int index): This function returns the type of the box at the specified index. It retrieves the character representing the box type from the vector of boxes and returns it.  

- Dice  
The "Dice" class represents a dice used in the "Snakes and Ladders" game. It simulates the rolling of the dice and provides a random number between 1 and the number of faces on the dice.
The class has the following member methods:
  - Dice(const int &faces = 6): This is the constructor for the Dice class. It initializes the dice with the specified number of faces. By default, the dice is initialized with 6 faces.
  - Dice(const Dice &facesCopy): This is a copy constructor for the Dice class. It creates a new dice object with the same number of faces as the given dice object.
  - ~Dice(): This is the destructor for the Dice class. It does not perform any specific cleanup since the dice object does not require any dynamic memory allocation.
  - int roll(): This function simulates rolling the dice and returns a random number between 1 and the number of faces on the dice. It uses the rand() function from the <cstdlib> library to generate a random number within the range of faces and returns it.   
The number of faces on the dice is represented by the faces member variable, which is an integer. The constructor allows specifying the number of faces when creating a dice object. The roll() function utilizes this value to generate a random number within the valid range of faces.
  
- Player  
The "Player" class represents a player in the "Snakes and Ladders" game. It keeps track of the player's number and current square position on the game board.
The class has the following member methods:
  - Player(): This is the default constructor for the Player class, which initializes the player's attributes with default values.
  - Player(const int &playerNumber, const int &square): This constructor allows creating a player object by specifying the player's number and initial square position.
  - Player(const Player &playerCopy): This is a copy constructor for the Player class. It creates a new player object with the same attributes as the given player object.
  - Player(int playerNumber, int square): This is an alternative constructor that takes the player's number and initial square position as arguments. It initializes the player object with the specified values.
  - ~Player(): This is the destructor for the Player class. It doesn't perform any specific cleanup since the player object doesn't require any dynamic memory allocation.
  - int getPlayerNumber(): This accessor function returns the player's number.
  - int getSquare(): This accessor function returns the player's current square position on the game board.
  - void setPlayerNumber(int playerNumber): This mutator function sets the player's number to the specified value.
  - void setSquare(int square): This mutator function sets the player's current square position to the specified value.
  - void printPlayer(): This method prints the player's attributes, including the player's number and current square position, to the console.
  
- MyGame  
The "MyGame" class represents the game logic for the "Snakes and Ladders" game. It manages the turns, players, board, and game flow.
The class has the following member methods:
  - MyGame(): This is the constructor for the MyGame class. It sets up the initial state of the game by initializing the maximum number of turns, player numbers, and their starting positions on the board.
  - ~MyGame(): This is the destructor for the MyGame class. It doesn't perform any specific cleanup since the game object doesn't require any dynamic memory allocation.
  - int getTurn(): This accessor function returns the current turn number.
  - void setTurn(int turn): This mutator function sets the current turn number to the specified value.
  - void setMaxTurns(int maxTurns): This mutator function sets the maximum number of turns for the game.
  - void printTurn(Player &player): This method prints the details of a player's turn, including the turn number, player's attributes, dice roll, type of square landed on, and final square position. It also updates the player's square position based on the dice roll and any special square types encountered.
  - void playGame(): This method controls the flow of the game by determining which player's turn it is and invoking the "printTurn" method to print the details of that turn.
  - void start(): This method begins the game, manages the turn-based gameplay, and determines the game's outcome based on the maximum number of turns and players' positions on the board. It calls the "playGame" method and checks for game over conditions.  
By using the "MyGame" class, you can create an instance of the game and start playing by calling the "start" method.

## Credits
This "Snakes and Ladders" game was developed by Dulce Bucio and Desirée Espinosa, and is based on the classic board game.
