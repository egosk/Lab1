//
// Created by emila on 11/2/2018.
//

#include "item.h"

Item::Item(string n, string t, int w, bool iw, int at){
  name = n;
  type = t;
  weight = w;
  isWeapon = iw;
  attack = at;
};

string Item::getName(){
    return name;
}

string Item::getType(){
    return type;
}

int Item::getWeight(){
    return weight;
}

void Item::setName(string name) {
    Item::name = name;
}

void Item::setType(string type) {
    Item::type = type;
}

void Item::setWeight(int weight) {
    Item::weight = weight;
}

bool Item::getIsWeapon() const {
    return isWeapon;
}

void Item::setIsWeapon(bool isWeapon) {
    Item::isWeapon = isWeapon;
}

int Item::getAttack() const {
    return attack;
}

void Item::setAttack(int attack) {
    Item::attack = attack;
}
