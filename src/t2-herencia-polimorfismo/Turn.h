//
// Created by PC BULLOCK on 06/06/2023.
//

#ifndef T2_HERENCIA_POLIMORFISMO_TURN_H
#define T2_HERENCIA_POLIMORFISMO_TURN_H
#include <iostream>
using namespace std;

class Turn {
    int turn;
public:
    Turn() = default;
    Turn(int): turn(turn) {};
    int getTurn() {return turn;}
    void setTurn(int turn) {this ->turn = turn;}
};


#endif //T2_HERENCIA_POLIMORFISMO_TURN_H
