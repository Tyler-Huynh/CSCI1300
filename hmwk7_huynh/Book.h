// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 3

#ifndef bookh
#define bookh

#include <string>

using namespace std;

class Book{
    private: //Declaring the members of the class
    string title;
    string author;
    string genre;

    public:
    Book();
    Book(string title, string author, string genre);
    string getTitle(); //Returning title as the string
    void setTitle(string title); //Setting the title to the user input 

    string getAuthor(); //Returning author as the string
    void setAuthor(string author); //Setting the title to the user input

    string getGenre(); //Returning the genre as the string
    void setGenre(string genre); //Setting the genre to the user input
    
};
#endif