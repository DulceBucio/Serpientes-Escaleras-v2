//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 29/05/2023.
//

#ifndef T2_HERENCIA_POLIMORFISMO_TILE_H
#define T2_HERENCIA_POLIMORFISMO_TILE_H


class Tile {
protected:
    char type;
public:
    Tile() = default;
    Tile(const char &type):type(type){ };
    Tile(const Tile &tileCopy): type(tileCopy.type) { };
    virtual char getType() { return  type; }
    void setType(const char &type) { this-> type = type; }
    virtual void print();
};


#endif //T2_HERENCIA_POLIMORFISMO_TILE_H
