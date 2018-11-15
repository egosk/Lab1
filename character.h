//
// Created by emila on 11/1/2018.
// Class character - main class in excercise1
//character described with parameters
// can fight with monsters and collect items
//
#include <iostream>
#include "inventory.h"
#include "monster.h"

using namespace std;


#ifndef LAB1_CHARACTER_H
#define LAB1_CHARACTER_H

class Character{
private:
    int hp ;
    string name;
    bool isAlive;
    Inventory inv;
    int strength;

public:
    Character();
    Character(string nm, int health);

    Monster attack(Monster mon, Item weapon);

    void setIsAlive(bool al);
    bool getIsAlive();

    void setHP(int health);
    int getHP();

    void setName(string nm);
    string getName();


    void addToInventory(Item it);
    Inventory getInventory();

    void getDamage(int damage);




};


#endif //LAB1_CHARACTER_H


