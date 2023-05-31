//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 30/05/2023.
//

#ifndef T2_HERENCIA_POLIMORFISMO_LADDER_H
#define T2_HERENCIA_POLIMORFISMO_LADDER_H
#include "Tile.h"

class Ladder: public Tile {
public:
    Ladder() = default;
    Ladder(const char &type, const int &amount): Tile(type, amount) { };
    ~Ladder() { };
    void print();
};


#endif //T2_HERENCIA_POLIMORFISMO_LADDER_H
