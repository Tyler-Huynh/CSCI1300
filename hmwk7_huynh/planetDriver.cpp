// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 1

#include "Planet.h"
#include <iostream>

using namespace std;

int main(){
    string name = "Coruscant";
    double radius = 420, newRadius = 69;
    Planet p6 = Planet(name, radius);
    
    cout << "Planet Name: " << p6.getName() << endl; 
    cout << "Planet Radius: " << p6.getRadius() << endl;
    cout << "Planet Volume: " << p6.getVolume() << endl;
    p6.setName("Tatooine");
    
    p6.setRadius(newRadius);
    cout << "Planet Name: " << p6.getName() << endl; 
    cout << "Planet Radius: " << p6.getRadius() << endl;
    cout << "Planet Volume: " << p6.getVolume() << endl;

return 0;
}


