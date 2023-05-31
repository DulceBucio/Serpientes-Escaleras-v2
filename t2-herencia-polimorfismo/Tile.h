//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 29/05/2023.
//

#ifndef T2_HERENCIA_POLIMORFISMO_TILE_H
#define T2_HERENCIA_POLIMORFISMO_TILE_H


class Tile {
protected:
    char type;
    int amount;
public:
    Tile() = default;
    Tile(const char &type, const int &amount): type(type), amount(amount) { };
    Tile(const Tile &tileCopy): type(tileCopy.type) { };
    char getType() { return  type; }
    void setType(const char &type) { this-> type = type; }
    virtual int getAmount() {return amount;}
    virtual void setAmount(const int &amount) { this->amount = amount; }
    virtual void print();
};


#endif //T2_HERENCIA_POLIMORFISMO_TILE_H
