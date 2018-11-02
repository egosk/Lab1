//
// Created by emila on 11/1/2018.
//
#include <iostream>
using namespace std;


#ifndef LAB1_CHARACTER_H
#define LAB1_CHARACTER_H

#endif //LAB1_CHARACTER_H

class Character{
private:
    int hp = 100; //nie wolno tu wartosci
    string name;
    bool isAlive;

public:
    Character();
    Character(string nm, int health);

    void setIsAlive(bool al);
    bool getIsAlive();

    void setHP(int health);
    int getHP();

    void setName(string nm);
    string getName();

    void printHP();
};