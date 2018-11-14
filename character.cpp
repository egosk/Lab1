//
// Created by emila on 11/1/2018.
//
#include <iostream>
#include "character.h"

Character::Character(){
    hp = 100;
    name = "Player1";
    isAlive = true;
    strength = 10;
}

Character::Character(string nm, int health){
  name = nm;
  hp = health;
  isAlive = true;
  strength = 10;
};

void Character::setIsAlive(bool alive){
    isAlive = alive;
};
bool Character::getIsAlive(){
    return isAlive;
};

void Character::setHP(int health){
    hp = health;
};

int Character::getHP(){
    return hp;
};

void Character::setName(string nm){
    name = nm;
};

string Character::getName(){
    return name;
};

void Character::addToInventory(Item it){
    inv.addItem(it);
};

Inventory Character::getInventory(){
    return inv;
}

Monster Character::attack(Monster mon, Item weapon) {
    if (weapon.getType() == "coldsteel"){
        mon.setHP(mon.getHP()- weapon.getAttack());
        getDamage(mon.getStrength());
        if (Character::getHP()<=0){
            Character::setIsAlive(false);
        }
        if (mon.getHP()<=0){
            mon.setIsAlive(false);
        }
        return mon;
    }
    else if(weapon.getType() == "firearm"){
        mon.setHP(mon.getHP()- weapon.getAttack());
        if (mon.getHP()<=0){
            mon.setIsAlive(false);
        }
        return mon;
    }

}

void Character::getDamage(int damage) {
    Character::setHP(Character::getHP()- damage);
};




