//
// Created by emila on 11/3/2018.
//

#include "world.h"

void World::createItems() {
    availableItems.push_back(Item("Knife", "coldsteel", 1, true, 5));
    availableItems.push_back(Item("Revolver", "firearm", 1, true, 25));
    availableItems.push_back(Item("Axe", "coldsteel", 1, true, 10));
    availableItems.push_back(Item("Key", "tool", 1, false, 0));
    availableItems.push_back(Item("Spear", "coldsteel", 1, true, 20));

}

void World::createMonsters() {
    monstersInWorld.push_back(Monster("Monster1", 30, 5, 25, 25));
    monstersInWorld.push_back(Monster("Monster2", 30, 5, 70, 25));
    monstersInWorld.push_back(Monster("Monster3", 50, 5, 25, 50));
}

vector<Item> World::getAvailableItems() {
    return availableItems;
}

Item World::pickItem(int k){
    Item temp_item = availableItems[k];
    availableItems.erase(availableItems.begin()+k);
    return temp_item;
}

vector<Monster> World::getMonstersInWorld() {
    return monstersInWorld;
}

void World::updateMonsterInWorld(Monster mon1, int k) {
    monstersInWorld[k] = mon1;
}

void World::deleteMonster(int k) {
    monstersInWorld.erase(monstersInWorld.begin()+k);
}

