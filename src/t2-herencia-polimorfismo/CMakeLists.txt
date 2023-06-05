cmake_minimum_required(VERSION 3.23)
project(t2_herencia_polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(t2_herencia_polimorfismo snakes.cpp Tile.cpp Snake.cpp Ladder.cpp Board.cpp MyGame.cpp Dice.cpp Player.cpp Person.cpp)

