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
    Inventory::weapons.push_back(Item("Bare hands", "coldsteel", 1, true, 5));
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
    if (i.getIsWeapon() == true){
        weapons.push_back(i);
    }
}

 vector<Item> Inventory::getStock()  {
    return stock;
}

void Inventory::setStock(const vector<Item> &stock) {
    Inventory::stock = stock;
}

vector<Item> Inventory::getWeapons()  {
    return weapons;
}

void Inventory::setWeapons(const vector<Item> &weapons) {
    Inventory::weapons = weapons;
};



