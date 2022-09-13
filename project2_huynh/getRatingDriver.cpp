// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 8

#include "Book.h"
#include "User.h"

#include <iostream>
#include <string>

using namespace std;

//Calling the helper function
string lower(string str);

/*
* This function gets the user rating of a book
* Parameters: username, title, user[], book[], numUser, numBook
* Return: the rating of the book
*/

int getRating(string username, string title, User user[], Book book[], int numUser, int numBook){
    //Declared variables
    int value = -3;
    int userIndex, bookIndex;

    bool checkUser = false;
    bool checkBook = false;

    //Finding if the username is a match
    for (int i = 0; i < numUser; i++){
        if (lower(user[i].getUsername()) == lower(username)){ //If the name is found
            userIndex = i;
            checkUser = true;
        }
    }

    //Finding if the book is a match
    for (int j = 0; j < numBook; j++){
        if (lower(book[j].getTitle()) == lower(title)){ //If the title is found
            bookIndex = j;
            checkBook = true;
        }
    }

    //Getting the rating if there is a match for book and user
    if (checkUser == true && checkBook == true){
        value = user[userIndex].getRatingAt(bookIndex);

    //No match
    }else{
        value = -3;
    }
return value;
}

/*
* This function makes a whole string lowercase
* Parameters: str
* Return: newstr
*/

string lower(string str){
    //Declared variables
    string newstr="";

    for (int i=0; i<str.length(); i++)
    {
        str[i] = tolower(str[i]);
        
        newstr = newstr + str[i];
    }

return newstr;
}

//Main function with declared variables
int main(){ 
  //creating the books array
    Book book[3];

    //setting title and author
    book[0].setTitle("The Martian");
    book[0].setAuthor("Andy Weir");

    //setting title and author 
    book[1].setTitle("Star Wars - The Old Republic: Revan");
    book[1].setAuthor("Drew Karpyshyn");

    //setting title and author 
    book[2].setTitle("The Hunger Games");
    book[2].setAuthor("Suzanne Collins");

    //printing values in each book object
    cout<<"Books: "<<endl;
    cout<<book[0].getTitle()<<" by "<<book[0].getAuthor()<<endl;
    cout<<book[1].getTitle()<<" by "<<book[1].getAuthor()<<endl;
    cout<<book[2].getTitle()<<" by "<<book[2].getAuthor()<<endl;

    //creating the users array
    User user[2];

    //setting username and ratings for Mags1
    user[0].setUsername("Tyler1");
    user[0].setNumRatings(3);
    user[0].setRatingAt(0,1);
    user[0].setRatingAt(1,4);
    user[0].setRatingAt(2,2);

    //setting username and ratings for Mags2
    user[1].setUsername("Tyler2");
    user[1].setNumRatings(3);
    user[1].setRatingAt(0,0);
    user[1].setRatingAt(1,5);
    user[1].setRatingAt(2,3);

    //printing out the user objects
    cout<<"Users and their ratings: "<<endl;
    cout<<user[0].getUsername()<<" : "<<user[0].getRatingAt(0)<<","<<user[0].getRatingAt(1)<<","<<user[0].getRatingAt(2)<<endl;
    cout<<user[1].getUsername()<<" : "<<user[1].getRatingAt(0)<<","<<user[1].getRatingAt(1)<<","<<user[1].getRatingAt(2)<<endl;

    //function call #1: both exist 
    cout << getRating("Tyler1", "Star Wars - The Old Republic: Revan", user, book, 2, 3) <<endl;

    //function call #2: title does not exist
    cout << getRating("Tyler1", "Random Book", user, book, 2, 3) << endl;

    //function call #3: user does not exist
    cout << getRating("Random User", "The Martian", user, book, 2, 3) << endl;

    //function call #4: both don't exist
     cout << getRating("Random User", "Random Book", user, book, 2, 3) << endl;
}