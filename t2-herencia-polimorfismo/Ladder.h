//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// TC1030 - 31/05/2023
//

#ifndef T2_HERENCIA_POLIMORFISMO_LADDER_H
#define T2_HERENCIA_POLIMORFISMO_LADDER_H
#include "Tile.h"

class Ladder: public Tile {
public:
    Ladder() = default;
    Ladder(const char &type): Tile(type) { };
    ~Ladder() { };
};


#endif //T2_HERENCIA_POLIMORFISMO_LADDER_H
