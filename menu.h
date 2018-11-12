//
// Created by emila on 11/3/2018.
//

#include <iostream>
#include <tuple>
#include "world.h"

using namespace std;


#ifndef LAB1_MENU_H
#define LAB1_MENU_H

class Menu{
    bool finish  = false;
    //tuple<Character, World> result(Character charact, World worl);

public:
    int g = 0;

    //struct result;
    tuple<Character, World> result(Character characte, World worl);

    Character createCharacter();
    tuple<Character,World> action(Character ch, World w);
    bool checkIfCorrectInput(string in, char an);
    void setFinish(bool f);
    bool getFinish();
    bool wantToQuit(char ch);
};


#endif //LAB1_MENU_H
