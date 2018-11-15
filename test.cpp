//
// Class used to test implemented classed for lab1 PROI
// Created by emila on 11/14/2018.
//

using namespace std;
#include <iostream>
#include "test.h"
#include "world.h"
#include "character.h"
#include "menu.h"


void Test::test() {
    //creating a world were the character will be based
    World *wo = new World;
    wo->createItems();
    wo->createMonsters();

    //creating character, printing character's initial parameters
    Character *character1 = new Character("Example1", 20);
    cout << "Character was created for you. " << endl << "Name: " << character1->getName() << endl ;
    cout << "HP: " << character1->getHP() << endl << "Is alive? " << character1->getIsAlive() << endl;
    if ((character1->getInventory().getStock().size()) > 0){
        cout << "Items in your inventory: " << endl;
        for (int i = 0; i < (character1->getInventory().getStock().size()); i++){
            cout << i+1 << ". " << character1->getInventory().getStock()[i].getName() << endl ;
        }
    }
    else {
        cout << "Your inventory is empty." <<endl;
    }

    //stop
    cout << "Insert a and press enter to continue" << endl;
    char answer;
    cin >> answer ;
    answer = tolower(answer);
    while (answer != 'a') {
        cout << "Please insert 'a'" << endl;
        cin >> answer;
        answer = tolower(answer);
    }

    //picking items from the world
    cout << "We will pick up some items available in the world" << endl;
    if ((wo->getAvailableItems().size()) > 0){
        cout << "Available items: " << endl;
        for (int i = 0; i < (wo->getAvailableItems().size()); i++){
            cout << i+1 << ". " << wo->getAvailableItems()[i].getName() << endl ;
        }
    }
    else {
        cout << "No items to collect." <<endl;
    }
    cout << "We are picking items no 3 & 2" <<endl;
    character1->addToInventory(wo->pickItem(2));
    character1->addToInventory(wo->pickItem(1));
    if ((wo->getAvailableItems().size()) > 0){
        cout << "Items which remained in the world after picking up those 2: " << endl;
        for (int i = 0; i < (wo->getAvailableItems().size()); i++){
            cout << i+1 << ". " << wo->getAvailableItems()[i].getName() << endl ;
        }
    }
    else {
        cout << "No items to left." <<endl;
    }

    //inventory after picking up some things
    if ((character1->getInventory().getStock().size()) > 0){
        cout << "Items in your inventory: " << endl;
        for (int i = 0; i < (character1->getInventory().getStock().size()); i++){
            cout << i+1 << ". " << character1->getInventory().getStock()[i].getName() << endl ;
        }
    }
    else {
        cout << "Your inventory is empty." <<endl;
    }

    //stop
    cout << "Insert a and press enter to continue" << endl;
    cin >> answer ;
    answer = tolower(answer);
    while (answer != 'a') {
        cout << "Please insert 'a'" << endl;
        cin >> answer;
        answer = tolower(answer);
    }

    //fighting a monster
    cout << "Monsters in the world before fighting them: " << endl;
    for (int i = 0; i < (wo->getMonstersInWorld().size()); i++){
        cout << i+1 << ". " << wo->getMonstersInWorld()[i].getName() << endl ; //dodaj obrazenie
    }
    cout << "Figthing monster2 with revolver. After evert attack monster's and character's hp printed." << endl;

    Monster temp_mon =wo->getMonstersInWorld()[1];
    cout << "Monster's HP at the beggining of fight: " <<wo->getMonstersInWorld()[1].getHP() << endl;
    cout << "Character's HP at the beggining of fight: " << character1->getHP() <<endl;

    while (wo->getMonstersInWorld()[1].getIsAlive() == true) {
        Monster temp_mon = character1->attack(wo->getMonstersInWorld()[1],
                                              character1->getInventory().getWeapons()[2]);
        wo->updateMonsterInWorld(temp_mon, 1);
        cout << "Monster's HP: " <<temp_mon.getHP() << endl;
        cout << "Character's HP: " << character1->getHP() <<endl;
    }

    if(character1->getIsAlive()== true) {
        if (wo->getMonstersInWorld()[1].getIsAlive() == false) {
            cout << "Monster was killed: " << temp_mon.getName() << endl;
            wo->deleteMonster(1);
        }
    }
    else{
        cout << "You have been killed" << endl;
        exit(0);
    }

    //stop
    cout << "Insert a and press enter to continue" << endl;
    cin >> answer ;
    answer = tolower(answer);
    while (answer != 'a') {
        cout << "Please insert 'a'" << endl;
        cin >> answer;
        answer = tolower(answer);
    }


    //fighting monster3 with coldsteel
    cout << "Figthing monster3 with axe. After every attack monster's and character's hp printed." << endl;
    temp_mon =wo->getMonstersInWorld()[1];
    cout << "Monster's HP at the beggining of fight: " <<wo->getMonstersInWorld()[1].getHP() << endl;
    cout << "Character's HP at the beggining of fight: " << character1->getHP() <<endl;

    while (wo->getMonstersInWorld()[1].getIsAlive() == true) {
        Monster temp_mon = character1->attack(wo->getMonstersInWorld()[1],
                                              character1->getInventory().getWeapons()[1]);
        wo->updateMonsterInWorld(temp_mon, 1);
        cout << "Monster's HP: " <<temp_mon.getHP() << endl;
        cout << "Character's HP: " << character1->getHP() <<endl;
    }

    if(character1->getIsAlive()== true) {
        if (wo->getMonstersInWorld()[1].getIsAlive() == false) {
            cout << "Monster was killed: " << temp_mon.getName() << endl;
            wo->deleteMonster(1);
        }
    }
    else{
        cout << "You have been killed" << endl;
        exit(0);
    }

}
