//
// Created by emila on 11/2/2018.
//
#include <iostream>
using namespace std;

#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H

#endif //LAB1_ITEM_H

class Item {
    string name;
    string type;
    int weight;


public:

    Item(string n, string t, int w);

    string getName();

    string getType();

    int getWeight();

    void setName(string name);

    void setType(string type);

    void setWeight(int weight);

};