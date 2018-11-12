#include <iostream>
#include "character.h"
#include "menu.h"


int main() {

    World *wo = new World;
    wo->createItems();
    //Item temp = wo->pickItem(3);

    //cout << temp.getName() <<endl;



    Menu *men = new Menu;
    Character ch = men->createCharacter();
    men->action(ch, *wo);

    while (men->getFinish() == false){
       men->action(ch, *wo);
       //bcout << "twoj inwentarz: "<< ch.getInventory().stock[1].getName() <<endl;

    }
    return 0 ;
    //return 0;
}