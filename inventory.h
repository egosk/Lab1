//
// Created by emila on 11/2/2018.
// Inventory class- contains vector of items collected by character
//
#include <iostream>
#include "item.h"
#include <vector>

using namespace std;

#ifndef LAB1_INVENTORY_H
#define LAB1_INVENTORY_H

class Inventory{
    int maxCapacity;
    vector<Item> stock;
    vector<Item> weapons;

public:
     vector<Item> getStock() ;

    void setStock(const vector<Item> &stock);

     vector<Item> getWeapons() ;

    void setWeapons(const vector<Item> &weapons);


    Inventory();
    Inventory(int max);

    int getMaxCapacity();
    void setMaxCapacity(int max);
    void addItem(Item i);

};


#endif //LAB1_INVENTORY_H

