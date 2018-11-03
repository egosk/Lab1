//
// Created by emila on 11/1/2018.
//
#include <iostream>
#include "character.h"

Character::Character(){
    hp = 100;
    name = "Player1";
    isAlive = true;
}

Character::Character(string nm, int health){
  name = nm;
  hp = health;
  isAlive = true;
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
};




