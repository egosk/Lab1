#include <iostream>
#include "character.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Character *chara = new Character;

    std::cout << "Alive: " << chara->getIsAlive() << std::endl;
    std::cout << "HP: " << chara->getHP() << std::endl;
    std::cout << "Name: " << chara->getName() << std::endl;

    Character *char2 = new Character("Mike", 101);

    std::cout << "Alive: " << char2->getIsAlive() << std::endl;
    std::cout << "HP: " << char2->getHP() << std::endl;
    std::cout << "Name: " << char2->getName() << std::endl;

    Item *it = new Item("Key", "tool", 3);
    char2->addToInventory(*it);
    Inventory i = char2->getInventory();
    std::cout << "Inventory:" << i.stock[0].getName() <<std::endl;

    return 0;
}