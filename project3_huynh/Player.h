// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#ifndef playerh
#define playerh

#include <iostream>
#include <string>
using namespace std;

class Player{
    private:
        string name; //Player name
        int age; //Player age
        bool dead; //If the player is dead
        bool Health;

    public:
        Player();
        Player(string name_1, int age_1, bool dead_1, bool health_1); //Parameterized constructors
        
        string getName(); //Returns the name as a string
        void setName(string name_1); //Sets the name to input

        int getAge(); //Returns the age as an integer
        void setAge(int age_1); //Sets the age to input

        bool getDead(); //Returns dead as bool
        void setDead(bool dead_1); //Sets dead to input

        bool getHealth(); //Returns health as bool
        void setHealth(bool health_1); //Sets health as bool

        void sort(string name_1, bool dead_1, Player players[]); //Sorts players into an array
    };
#endif
