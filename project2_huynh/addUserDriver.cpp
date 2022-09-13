// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 9

#include "Book.h"
#include "User.h"

#include <iostream>
#include <string>

using namespace std;

/*
* This function adds a user to the array of users
* Parameters: username, user[], book[], numUser, numRating, userArrSize
* Return: numUser + 1
*/

int addUser(string userName, User user[], int numRating, int numUser, int userArrSize){

    //Declared variables
    int ratings[numRating];

    //Case 1
    if (numUser >= userArrSize){
        return -2;
    }
    
    //Case 2
    //If a user with the same name already exists
    for (int i = 0; i <numUser; i++){
        if (user[i].getUsername() == userName){ //Name found
            return -1;
        }
    }

    //Case 3
    //If the username is an empty string
    if (userName.length() == 0){
        return -1;
    } 

    //Case 4
    for (int i = 1; i < numRating; i++){
        ratings[i] = 0;
    }

    user[numUser] = User (userName, ratings, numRating); //Adding more users to the array
    return numUser + 1;  
}

//Main function with declared variables
int main(){
    User user[1];
    int usersArrSize = 10;
    int numRatings = 5;
    user[0].setUsername("Donald");

    // Add 5 ratings given by the user “Donald”
    for(int i=0; i<numRatings; i++){
        user[0].setRatingAt(i, i);
    }

    int numUser = 1;

    //The user is successfully added
    int val = addUser("Knuth", user, numRatings, numUser, usersArrSize);
    cout << val << endl;

    //If the name already exist 
    int val2 =addUser("Donald", user, numRatings, numUser, usersArrSize);
    cout << val2 << endl;

    //If the user array is full
    int val3 =addUser("Joe", user, numRatings, 1, 1);
    cout << val3 << endl;

    // If the username is an empty string
    int val4 =addUser("", user, numRatings, numUser, usersArrSize);
    cout << val4 << endl;

}
