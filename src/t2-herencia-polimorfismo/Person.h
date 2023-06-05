//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 05/06/2023.
//

#ifndef T2_HERENCIA_POLIMORFISMO_PERSONA_H
#define T2_HERENCIA_POLIMORFISMO_PERSONA_H
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person() = default;
    Person(const string name): name(name) { };
    Person(const Person &personCopy): name(personCopy.name){ };
    ~Person() { };
    string getName() { return name;}
    void setName(const string &name) { this -> name = name; }
    void printPerson();
};


#endif //T2_HERENCIA_POLIMORFISMO_PERSONA_H
