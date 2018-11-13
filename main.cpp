#include <iostream>
#include "character.h"
#include "menu.h"


int main() {

    World *wo = new World;
    Menu *men = new Menu;

    wo->createItems();
    wo->createMonsters();
    //cout << wo->getMonstersInWorld()[0].getName()<< endl;
    //cout <<"Monsters array size: "<<  wo->getAvailableItems().size()<< endl;
    //cout <<"Monsters array size: "<<  wo->getMonstersInWorld().size()<< endl;
    Character ch = men->createCharacter();
    tuple<Character, World> tup1 = men->action(ch, *wo);

    while (men->getFinish() == false){
       tup1 = men->action(get<0>(tup1), get<1>(tup1));
    }
    return 0 ;
}