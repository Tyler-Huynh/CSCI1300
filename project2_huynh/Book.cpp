// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 2

#include "Book.h"

using namespace std;

Book :: Book(){ //If the title, author, and genre are equal to an empty string
    title = "";
    author = "";
    genre = "";
}

Book :: Book(string title_1, string author_1, string genre_1){ //Parameterized constrcutors
    title = title_1;
    author = author_1;
    genre = genre_1;
}

string Book :: getTitle(){ //Returning title as the string
    return title;
}

void Book :: setTitle(string title_1){ //Setting the title to the user input 
   title = title_1; //Setting the title equal to the parameterized constructor 
}

string Book :: getAuthor(){ //Returning author as the string
    return author;
}

void Book :: setAuthor(string author_1){ //Setting the title to the user input
    author = author_1; //Setting the author equal to the parameterized constructor 
}

string Book :: getGenre(){ //Returning the genre as the string
    return genre;
}

void Book :: setGenre(string genre_1){ //Setting the genre to the user input
    genre = genre_1; //Setting the genre equal to the parameterized constructor 
}

