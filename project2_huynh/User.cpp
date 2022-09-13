// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 6

#include "User.h"

#include <iostream>
#include <string>

using namespace std;

User :: User(){ //If the username and numRating dont equal anything
    username = "";
    numRatings = 0;

    for (int i = 0; i < size; i++){
        ratings[i] = 0;
    }
}

User :: User(string username_1, int ratings_1[], int numRatings_1){ //Parameterized Constructors
    username = username_1;
    numRatings = numRatings_1;
    for (int i = 0; i < size; i++){
        ratings[i] = ratings_1[i];
    }
}

string User :: getUsername(){ //Returning the username as a string
    return username; 
}

void User :: setUsername(string username_1){ //Setting the username equal to user input
    username = username_1; //Setting the username equal to the parameterized constructor 
}

int User :: getRatingAt(int index){ //Setting the rating at a specific index
    int value = 0;
        if (index >= size || index < 0){
            value = -1;
        }else{
            value = ratings[index];
        }
return value;
}

bool User :: User :: setRatingAt(int index, int value){ //Setting the rating at a specific index
    if (index < size && index >= 0 && value >= 0 && value <=5){
        ratings[index] = value;
        return true;
    }else{
        return false;
    }
}

int User :: getNumRatings(){ //Returns the numRating as an integer
    return numRatings; 
}

void User :: setNumRatings(int numRatings_1){ //Setting the numRatings equal to the user input
    numRatings = numRatings_1; //Setting the numRatings equal to the paramerterized constructor
}

int User :: getSize(){ //Returning size as an integer
    return size;
}

