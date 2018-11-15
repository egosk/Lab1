//
// Created by emila on 11/3/2018.
// menu class - interface to test features
//

#include <iostream>
#include <tuple>
#include "world.h"

using namespace std;


#ifndef LAB1_MENU_H
#define LAB1_MENU_H

class Menu{
    bool finish  = false;


public:
    tuple<Character, World> result(Character characte, World worl);

    Character createCharacter();
    tuple<Character,World> action(Character ch, World w);
    bool checkIfCorrectInput(string in, char an);
    bool getFinish();
};


#endif //LAB1_MENU_H
