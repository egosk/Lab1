#include <iostream>
#include "character.h"
#include "menu.h"
#include "test.h"


int main() {
    Test *test1 = new Test;
    test1->test();
    /*World *wo = new World;
    Menu *men = new Menu;

    wo->createItems();
    wo->createMonsters();
    Character ch = men->createCharacter();
    tuple<Character, World> tup1 = men->action(ch, *wo);

    while (men->getFinish() == false){
       tup1 = men->action(get<0>(tup1), get<1>(tup1));
    } */

    return 0 ;
}