//
// Created by emila on 11/3/2018.
//

#include <iostream>
#include "world.h"


#ifndef LAB1_MENU_H
#define LAB1_MENU_H

class Menu{
    bool finish  = false;

public:
    int g = 0;

    Character createCharacter();
    void action(Character ch, World w);
    bool checkIfCorrectInput(string in, char an);
    void setFinish(bool f);
    bool getFinish();
    bool wantToQuit(char ch);
};


#endif //LAB1_MENU_H
