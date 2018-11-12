//
// Created by emila on 11/3/2018.
//

#include <iostream>
#include <vector>
#include "item.h"


#ifndef LAB1_WORLD_H
#define LAB1_WORLD_H

class World {
    vector<Item> availableItems;
    // vetor<monters>
public:

    void createItems();

    vector<Item> getAvailableItems();

    Item pickItem( int k);

    int checkHowManyItemsAvailable(vector<Item> availableItems);

};
#endif //LAB1_WORLD_H
