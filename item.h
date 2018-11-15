//
// Created by emila on 11/2/2018.
// Class item - models one item which character can collect
//
#include <iostream>
using namespace std;

#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H

class Item {
    string name;
    string type;
    int weight;
    bool isWeapon;
    int attack;

public:
    int getAttack() const;
    void setAttack(int attack);
    Item(string n, string t, int w, bool isWeapon, int attack);
    bool getIsWeapon() const;
    void setIsWeapon(bool isWeapon);
    string getName();
    string getType();
    int getWeight();
    void setName(string name);
    void setType(string type);
    void setWeight(int weight);

};

#endif //LAB1_ITEM_H

