//
// Created by emila on 11/12/2018.
//
#include <iostream>
using namespace std;

#ifndef LAB1_MONSTER_H
#define LAB1_MONSTER_H

class Monster{
    string name;
    int HP;
    int strength;
    bool isAlive;

public:
    const string &getName() const;

    void setName(const string &name);

    Monster(string nm, int HP, int strength, int x_pos, int y_pos);

    int getHP() const;
    int getStrength() const;

    void setHP(int HP);
    void setStrength(int strength);

    void getDamage(int damage);

    void setIsAlive(bool alive);
    bool getIsAlive();
};

#endif //LAB1_MONSTER_H
