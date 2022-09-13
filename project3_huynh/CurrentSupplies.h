// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#ifndef currentsuppliesh
#define currentsuppliesh

#include <iostream>
#include <string>

using namespace std;

class CurrentSupplies{
    private:
        int food;
        int bullets;
        int wagon;
        int wagonParts;
        int med_kit;
        int oxen;
    
    public:
        CurrentSupplies();

        CurrentSupplies(int food_1, int bullets_1, int wagon_1, int med_kit1, int oxen_1, int wagonParts_1); //Paramerterized constructor

        int getFood(); //Returns food as an integer
        void setFood(int food_1); //Sets food equal to the input

        int getBullets(); //Returns bullets as an integer
        void setBullets(int bullets_1); //Sets the bullets equal to the input

        int getWagon(); //Returns wagon as an integer
        void setWagon(int wagon_1); //Sets the wagon equal to the input

        int getWagonParts();
        void setWagonParts(int wagonParts_1);

        int getMedKit(); //Returns medKit as an integer
        void setMedKit(int med_kit1); //Sets the medKit equal to input

        int getOxen(); //Return the oxen as an integer
        void setOxen(int oxen_1); //Sets the oxen equal to input

};
#endif
