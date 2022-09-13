// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#include "CurrentSupplies.h"

using namespace std;

CurrentSupplies :: CurrentSupplies(){ //If the member functions are equal to nothing
    food = 0;
    bullets = 0;
    wagon = 0;
    med_kit = 0;
    wagonParts = 0;
    oxen = 0;
}

CurrentSupplies :: CurrentSupplies(int food_1, int bullets_1, int wagon_1, int med_kit1, int wagonParts_1, int oxen_1){ //Parameterized constructor
    food = food_1;
    bullets = bullets_1;
    wagon = wagon_1;
    med_kit = med_kit1;
    wagonParts = wagonParts_1;
    oxen = oxen_1;
}

int CurrentSupplies :: getFood(){ //Returning food as integer
    return food;
}

void CurrentSupplies :: setFood(int food_1){
    food = food_1; //Setting food equal to the paramerterized constructor
}

int CurrentSupplies :: getBullets(){ //Returning bullets as integer
    return bullets;
}

void CurrentSupplies :: setBullets(int bullets_1){
    bullets = bullets_1; //Setting bullets equal to the paramerterized constructor
}

int CurrentSupplies :: getWagon(){
    return wagon;
}

void CurrentSupplies :: setWagon(int wagon_1){
    wagon = wagon_1;
}

int CurrentSupplies :: getWagonParts(){
    return wagonParts;
}

void CurrentSupplies :: setWagonParts(int wagonParts_1){
    wagonParts = wagonParts_1;
}

int CurrentSupplies :: getMedKit(){
    return med_kit;
}

void CurrentSupplies :: setMedKit(int med_kit1){
    med_kit = med_kit1;
}

int CurrentSupplies :: getOxen(){
    return oxen;
}

void CurrentSupplies :: setOxen(int oxen_1){
    oxen = oxen_1;
}




