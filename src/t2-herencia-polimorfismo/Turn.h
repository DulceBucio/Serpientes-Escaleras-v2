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

    Turn& operator++() {
        ++turn;
        return *this;
    }

    Turn operator++(int) {
        Turn temp = *this;
        ++turn;
        return temp;
    }

    bool operator>(const int value) const {
        return turn > value;
    }

    friend ostream& operator<< (ostream &print, Turn& turn) {
        print << turn.getTurn() << " ";
        return print;
    }
};


#endif //T2_HERENCIA_POLIMORFISMO_TURN_H
