//
// Created by emila on 11/3/2018.
//

#include "world.h"

void World::createItems() {
    availableItems.push_back(Item("Key", "tool", 1));
    availableItems.push_back(Item("Knife", "coldsteel", 1));
    availableItems.push_back(Item("Revolver", "firearm", 1));
    availableItems.push_back(Item("Axe", "coldsteel", 1));
    availableItems.push_back(Item("Spear", "coldsteel", 1));

}

vector<Item> World::getAvailableItems() {
    return availableItems;
}

int World::checkHowManyItemsAvailable(vector<Item> availableItems){
    return availableItems.size();
}

Item World::pickItem(int k){
    Item temp = availableItems[k];
    availableItems.erase(availableItems.begin()+k);
    return temp;
}

