// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 1

#include "Planet.h"
#include <cmath>

using namespace std;

Planet :: Planet(){ //Default constructor 
    planetName = "";
    planetRadius = 0.0;
    
}

Planet :: Planet(string planetName_1, double planetRadius_1){ //Paramatized Constructor
    planetName = planetName_1;
    planetRadius = planetRadius_1;
}

string Planet :: getName(){
    return planetName;
}

void Planet :: setName(string planetName_1){
   planetName = planetName_1;
}

double Planet :: getRadius(){
    return planetRadius;
}

void Planet :: setRadius(double planetRadius_1){
    planetRadius = planetRadius_1;
}

double Planet :: getVolume(){
    double volume;
    return volume = (4.0 * M_PI * pow(planetRadius,3))/3.0;
}




