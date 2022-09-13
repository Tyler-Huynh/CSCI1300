// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 1

#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

//Main function with declared variables
int main(){
    string title = "The Martian";
    string author = "Andy Weir";
    string genre = "Fiction";
    Book p6 = Book(title, author, genre);

    cout << "Title: " << p6.getTitle() << endl; //User output
    cout << "Author: " << p6.getAuthor() << endl;
    cout << "Genre: " << p6.getGenre() << endl;
    
    p6.setTitle("A Promised Land"); //Setting it equal to new values
    p6.setAuthor("Barack Obama");
    p6.setGenre("Memoir");

    cout << "Title: " << p6.getTitle() << endl; //User output again
    cout << "Author: " << p6.getAuthor() << endl;
    cout << "Genre: " << p6.getGenre() << endl;

return 0;
}