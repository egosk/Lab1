//
// Created by emila on 11/2/2018.
//
#include <iostream>
#include <vector>

using namespace std;
#include "inventory.h"
//#include "item.h"


Inventory::Inventory(){
    maxCapacity = 10;
};

Inventory::Inventory(int max){
    maxCapacity = max;
};

int Inventory::getMaxCapacity(){
    return maxCapacity;
};
void Inventory::setMaxCapacity(int max){
    maxCapacity = max;
};

void Inventory::addItem(Item i){
    stock.push_back(i);
};



