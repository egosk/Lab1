//
// Created by emila on 11/2/2018.
//
#include <iostream>
#include "item.h"
#include <vector>

using namespace std;

#ifndef LAB1_INVENTORY_H
#define LAB1_INVENTORY_H

#endif //LAB1_INVENTORY_H

class Inventory{
    int maxCapacity;

public:
    vector<Item> stock;


    Inventory();
    Inventory(int max);

    int getMaxCapacity();
    void setMaxCapacity(int max);
    void addItem(Item i);
};
