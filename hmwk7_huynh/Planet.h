// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 1

#ifndef planeth
#define planeth

#include <string>

using namespace std;

class Planet{
    private:
    string planetName;
    double planetRadius;

    public:
    Planet();
    Planet(string planetName, double planetRadius);

        string getName();
        void setName(string planetName);

        double getRadius();
        void setRadius(double planetRadius);
        
        double getVolume();
     
};
#endif