// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 6

#include "User.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Main function with declared variables
int main(){
    string username = "The Martian";
    int ratings[3] = {1, 2, 3};
    int numRatings = 4;

    //Parameterized constructor
    User p6 = User(username, ratings, numRatings);

    cout << "Username: " << p6.getUsername() << endl;  //User output
    cout << "Ratings: " << p6.getRatingAt(0) << endl;
    cout << "Number of Ratings: " << p6.getNumRatings() << endl;
    
    //Setting parameters equal to new values
    p6.setUsername("Username_1");
    p6.setRatingAt(0, 3);
    p6.setNumRatings(5);

    //New output
    cout << "Username: " << p6.getUsername() << endl; 
    cout << "Ratings: " << p6.getRatingAt(0) << endl;
    cout << "Number of Ratings: " << p6.getNumRatings() << endl;

return 0;
}