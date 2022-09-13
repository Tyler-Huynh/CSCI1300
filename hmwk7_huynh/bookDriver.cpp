// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 3

#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    string title = "The Martian";
    string author = "Andy Weir";
    string genre = "Fiction";
    Book p6 = Book(title, author, genre);

    cout << "Title: " << p6.getTitle() << endl; 
    cout << "Author: " << p6.getAuthor() << endl;
    cout << "Genre: " << p6.getGenre() << endl;
    
    p6.setTitle("A Promised Land");
    p6.setAuthor("Barack Obama");
    p6.setGenre("Memoir");

    cout << "Title: " << p6.getTitle() << endl; 
    cout << "Author: " << p6.getAuthor() << endl;
    cout << "Genre: " << p6.getGenre() << endl;

return 0;
}