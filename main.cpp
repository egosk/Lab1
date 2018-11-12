#include <iostream>
#include "character.h"
#include "menu.h"


int main() {

    World *wo = new World;
    wo->createItems();
    //Item temp = wo->pickItem(3);

    //cout << temp.getName() <<endl;

    tuple<Character, World> tup1;



    Menu *men = new Menu;
    Character ch = men->createCharacter();
    tup1 = men->action(ch, *wo);

    while (men->getFinish() == false){
       tup1 = men->action(get<0>(tup1), get<1>(tup1));
       //bcout << "twoj inwentarz: "<< ch.getInventory().stock[1].getName() <<endl;

    }
    return 0 ;
    //return 0;
}