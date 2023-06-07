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
4. After successfully running the program, use the "A" key to start playing in automatic mode or the "M" key to start playing in manual mode.

Enjoy the Snakes and Ladders game!

## Classes
The game is composed of the following classes:
- Board
- Dice
- Tile
- Snake
- Ladder
- Person
- Player
- MyGame


- Board  
The "Board" class represents a game board for the "Snakes and Ladders" game. It contains a vector of "Tile" objects that represent each box on the board, whether a Tile could be a Snake or a Ladder. Additionally, it keeps track of the number of tiles, snakes, and ladders on the board. 
The class has the following member methods:
  - Board(): This is the default constructor for the Board class. It initializes the 'boxes' vector with 31 elements, each set to the character 'N'. It then sets specific elements of the vector to 'S' and 'L', representing the snakes and ladders.
  - Board(int numTiles, int numSnakes, int numLadders): This constructor allows creating a board object by specifying the number of tiles, snakes, and ladders. It fills the entire board with normal tiles, then randomly selects positions to replace with snakes and ladders.
  - Board(const Board& boardCopy): This is a copy constructor for the Board class. It creates a new board object with the same 'boxes' vector as the given board object.
  - ~Board(): This is the destructor for the Board class. It does not perform any specific cleanup since the board is managed by the vector class.
  - char getType(int index): This method returns the type of the tile at the specified index in the 'boxes' vector. It returns the character representation of the tile type, either 'N' for normal, 'S' for snake, or 'L' for ladder.
  - printBoard(): This function prints the current state of the board. It iterates over the vector of boxes and prints each box character on a new line.

- Dice  
The "Dice" class represents a dice used in the "Snakes and Ladders" game. It simulates the rolling of the dice and provides a random number between 1 and the number of faces on the dice.
The class has the following member methods:
  - Dice(const int &faces = 6): This is the constructor for the Dice class. It initializes the dice with the specified number of faces. By default, the dice is initialized with 6 faces.
  - Dice(const Dice &facesCopy): This is a copy constructor for the Dice class. It creates a new dice object with the same number of faces as the given dice object.
  - ~Dice(): This is the destructor for the Dice class. It does not perform any specific cleanup since the dice object does not require any dynamic memory allocation.
  - int roll(): This function simulates rolling the dice and returns a random number between 1 and the number of faces on the dice. It uses the rand() function from the <cstdlib> library to generate a random number within the range of faces and returns it.   
The number of faces on the dice is represented by the faces member variable, which is an integer. The constructor allows specifying the number of faces when creating a dice object. The roll() function utilizes this value to generate a random number within the valid range of faces.

- Tile  
The "Tile" class represents a tile on the game board. It serves as the base class for other specific tile types such as snakes and ladders. 
The class has the following member methods:
  - Tile(): This is the default constructor for the Tile class. It initializes a tile with the default type.
  - Tile(const char &type): This constructor allows creating a tile object by specifying the type. It initializes the tile with the specified type.
  - Tile(const Tile &tileCopy): This is a copy constructor for the Tile class. It creates a new tile object with the same type as the given tile object.
  - char getType(): This virtual function returns the type of the tile. It can be overridden in derived classes to provide specific behavior.
  - void setType(const char &type): This function sets the type of the tile to the specified value.
  - void print(): This function prints the type of the tile to the console.
  
- Snake  
The "Snake" class is a derived class of the "Tile" class. It represents a snake tile on the game board. 
The class has the following member methods:
  - Snake(): This is the default constructor for the Snake class. It initializes a snake tile with the default type.
  - Snake(const char &type): This constructor allows creating a snake tile object by specifying the type. It initializes the snake tile with the specified type.
  - ~Snake(): This is the destructor for the Snake class. It doesn't perform any specific cleanup since the snake tile object doesn't require any dynamic memory allocation.
  
- Ladder  
The "Ladder" class is a derived class of the "Tile" class. It represents a ladder tile on the game board. 
The class has the following member methods:
  - Ladder(): This is the default constructor for the Ladder class. It initializes a ladder tile with the default type.
  - Ladder(const char &type): This constructor allows creating a ladder tile object by specifying the type. It initializes the ladder tile with the specified type.
  - ~Ladder(): This is the destructor for the Ladder class. It doesn't perform any specific cleanup since the ladder tile object doesn't require any dynamic memory allocation.
  
- Person
  
The Person class is a basic class that models a simple entity: a person with a name. This class can serve as a foundational class for more complex classes.
The class has the following member methods:
  - Person(): A default constructor that creates a new Person object.
  - Person(const string name): A parameterized constructor that creates a new Person object with a given name.
  - Person(const Person &personCopy): A copy constructor that creates a new Person object as a copy of an existing one.
  - ~Person(): The destructor that cleans up a Person object when it is no longer needed.
  - string getName(): A member function that retrieves the name of the Person object.
  - void setName(const string &name): A member function that sets the name of the Person object.
  - void printPerson(): A member function that prints the information of the Person object. The definition for this function is not provided in the class, and needs to be implemented.
  
- Player  
The "Player" class represents a player in the "Snakes and Ladders" game. It keeps track of the player's number and current square position on the game board.
The class has the following member methods:
  - Player(): This is the default constructor for the Player class, which initializes the player's attributes with default values.
  - Player(const int &playerNumber, const int &square): This constructor allows creating a player object by specifying the player's number and initial square position.
  - Player(const Player &playerCopy): This is a copy constructor for the Player class. It creates a new player object with the same attributes as the given player object.
  - Player(int playerNumber, int square): This is an alternative constructor that takes the player's number and initial square position as arguments. It initializes the player object with the specified values.
  - ~Player(): This is the destructor for the Player class. It doesn't perform any specific cleanup since the player object doesn't require any dynamic memory allocation.
  - void init(int playerNumber): This method initializes the player with a given player number and sets the square to 1. It takes an integer playerNumber as a parameter and sets the player's number using the setPlayerNumber method with the given value. It also sets the player's current square position to 1 using the setSquare method.
  - int getPlayerNumber(): This accessor function returns the player's number.
  - int getSquare(): This accessor function returns the player's current square position on the game board.
  - void setPlayerNumber(int playerNumber): This mutator function sets the player's number to the specified value.
  - void setSquare(int square): This mutator function sets the player's current square position to the specified value.
  - void printPlayer(): This method prints the player's attributes, including the player's number and current square position, to the console.
  - Player operator+(int value): 
  - Player& operator+=(int value):
  - ostream& operator<< (ostream &print, Player& player):
  
- MyGame  
The "MyGame" class represents the game logic for the "Snakes and Ladders" game. It manages the players, the game board, and the gameplay.
The class has the following member methods:
  - MyGame(): This is the constructor for the MyGame class. It sets up the initial state of the game by initializing the maximum number of turns, player numbers, and their starting positions on the board.
  - MyGame(int userTiles, int userSnakes, int userLadders, int userNumPlayers, int userMaxTurns, int userReward, int userPenalty): This constructor allows creating a game object by specifying the number of tiles, snakes, ladders, number of players, maximum turns, reward, and penalty. It creates a game board with the specified parameters, initializes the players with their player numbers and starting positions, and sets other game-related attributes.
  - ~MyGame(): This is the destructor for the MyGame class. It doesn't perform any specific cleanup since the game object doesn't require any dynamic memory allocation.
  - int getTurn(): This accessor function returns the current turn number.
  - void setTurn(int turn): This mutator function sets the current turn number to the specified value.
  - void setMaxTurns(int maxTurns): This mutator function sets the maximum number of turns for the game.
  - void printTurn(Player &player): This method prints the details of a player's turn, including the turn number, player's attributes, dice roll, type of square landed on, and final square position. It also updates the player's square position based on the dice roll and any special square types encountered.
  - void playGame(): This method controls the flow of the game by determining which player's turn it is and invoking the "printTurn" method to print the details of that turn.
  - void start(): This method begins the game, manages the turn-based gameplay, and determines the game's outcome based on the maximum number of turns and players' positions on the board.
By using the "MyGame" class, you can create an instance of the game and start playing by calling the "start" method.

## Credits
This "Snakes and Ladders" game was developed by Dulce Bucio and Desirée Espinosa, based on the classic board game.
