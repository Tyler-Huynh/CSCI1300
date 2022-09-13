// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 2

#include <iostream>
#include <string>
#include "Planet.h"

using namespace std;

int maxRadius(Planet planets[], int scale){
    if (scale == 0){
        return -1;
    }
    
    int max = 0;

    for (int i = 0; i < scale; i++){
        if (planets[max].getRadius() < planets[i].getRadius()){
            max = i;
        }
    }
return max;
}