//
// Created by emila on 11/3/2018.
// class world - represents envirnment where character can collect items and fight
//

#include <iostream>
#include <vector>
#include "item.h"
#include "monster.h"


#ifndef LAB1_WORLD_H
#define LAB1_WORLD_H

class World {
    vector<Item> availableItems;
    vector<Monster> monstersInWorld;

public:
    void createMonsters();
    void createItems();

    vector<Monster> getMonstersInWorld();
    vector<Item> getAvailableItems();

    void updateMonsterInWorld(Monster mon1, int k);

    Item pickItem( int k);

    void deleteMonster(int k);
};
#endif //LAB1_WORLD_H
