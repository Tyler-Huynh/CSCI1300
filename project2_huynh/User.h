// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 6

#ifndef userh
#define userh

#include <string>

using namespace std;

class User{
    private:
    string username;
    int ratings[50];
    int numRatings;
    int static const size = 50;

    public:
    User(); //Default constructor
    User(string username, int ratings[], int numRatings); //Parameterized constructor
    string getUsername(); //Returns the username
    void setUsername(string username); //Setting the username to the user input

    int getRatingAt(int index); //Returns the rating at a specific point
    bool setRatingAt(int index, int value); //Setting the rating to the user input

    int getNumRatings(); //Returns the numRatings at an int
    void setNumRatings(int numRatings); //Setting the numRatings to the user input

    int getSize(); //Returns the size 
    
};
#endif