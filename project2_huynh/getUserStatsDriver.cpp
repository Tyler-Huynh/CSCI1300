// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 10

#include "Book.h"
#include "User.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//This function determines if the username matches a user in the array and calculated the average rating
//Parameter: username (string), users (array of objects), number of users stored (int), number of books stored (int)
//Return: an integer based upon whether the user is found and if they have rated books

int getUserStats(string username, User user[], int numUser, int numBook){
    double rating;
    double sum = 0;
    double averageRating;
    int count = 0;
    bool userFound = false;
    int userIndex = -1;

    //Case 1 if the user is found
    for (int i = 0; i < numUser; i++){
        if (user[i].getUsername() == username){
            userFound = true;
            userIndex = i;
        }
    }

    //Finding the average rating
    for (int j = 0; j < numBook; j++){
                rating = user[userIndex].getRatingAt(j); //Getting the rating
                
                    if (rating != 0){
                        count++; //Incrementing count
                    }
                
                    sum = sum + rating; //Adding the rating to the sum
    }

    //Case 2
    if (userFound == true){

            if (count == 0){ //If the index is equal to 0
                cout << username << " has not rated any books." << endl; //Output statement
                return 0;
            
            }else if (count != 0){ //If it does not equal 0
                
                averageRating = sum/count;
                cout << username << " rated" << " " << count << " books" << endl; //Output statements
                cout << username << "'s average rating was " << fixed << setprecision(2) << averageRating << endl;
                return 1;
            
            }
            }else if (userFound == false){ //If the user does not exist
                cout << username << " does not exist." << endl;
                return -3;
        }
    return 0;
}

int main(){
    //creating users array
    User user[3];
    //setting username and ratings 
    user[0].setUsername("Tyler1");
    user[0].setNumRatings(3);
    user[0].setRatingAt(0,1);
    user[0].setRatingAt(1,4);
    user[0].setRatingAt(2,2);

    //setting username and ratings 
    user[1].setUsername("Tyler2");
    user[1].setNumRatings(3);
    user[1].setRatingAt(0,0);
    user[1].setRatingAt(1,5);
    user[1].setRatingAt(2,3);

    //setting username and ratings 
    user[2].setUsername("Tyler3");
    user[2].setNumRatings(3);
    user[2].setRatingAt(0,0);
    user[2].setRatingAt(1,0);
    user[2].setRatingAt(2,0);

    //function call #1: success
    cout << getUserStats("Tyler1", user, 3, 3) << endl;

    //function call #2: success
    cout << getUserStats("Tyler2", user, 3, 3) << endl;

    //function call #3: there are no ratings
    cout << getUserStats("Tyler3", user, 3, 3) << endl;

    //function call #4: the user is not found
    cout << getUserStats("Random User", user, 3, 3) << endl;

}
