#include "Player.h"

#include <iostream>

using namespace std;

Player :: Player(){
    name = "";
    age = 0;
    dead = false;
}

Player :: Player(string name_1, int age_1, bool dead_1){
    name = name_1;
    age = age_1;
    dead = dead_1;
}

string Player :: getName(){
    return name;
}

void Player :: setName(string name_1){
    name = name_1;
}

int Player :: getAge(){
    return age;
}

void Player :: setAge(int age_1){
    age = age_1;
}

bool Player :: getDead(){
    return dead;
}

void Player :: setDead(bool dead_1){
    dead = dead_1;
}
