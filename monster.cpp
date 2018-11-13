//
// Created by emila on 11/12/2018.
//

#include "monster.h"

int Monster::getHP() const {
    return HP;
}

int Monster::getStrength() const {
    return strength;
}





void Monster::setHP(int HP) {
    Monster::HP = HP;
}

void Monster::setStrength(int strength) {
    Monster::strength = strength;
}




Monster::Monster(string nm, int HP, int strength, int x_pos, int y_pos){
    Monster::name=nm;
    Monster::HP = HP;
    Monster::strength = strength;
  
}

const string &Monster::getName() const {
    return name;
}

void Monster::setName(const string &name) {
    Monster::name = name;
}

void  Monster::getDamage(int damage) {
    Monster::setHP(Monster::getHP()- damage);
}
