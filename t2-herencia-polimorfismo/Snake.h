//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 30/05/2023.
//

#ifndef T2_HERENCIA_POLIMORFISMO_SNAKE_H
#define T2_HERENCIA_POLIMORFISMO_SNAKE_H
#include "Tile.h"

class Snake: public Tile{
public:
    Snake() = default;
    Snake(const char &type, const int &amount): Tile(type, amount) { };
    ~Snake() { };
    void print();
};


#endif //T2_HERENCIA_POLIMORFISMO_SNAKE_H
