// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project #1 - Question # 4

#include <iostream>
#include "Book.h"
#include <string>

using namespace std;

/*
* This function determines how many books in an array are the same genre
* Parameters: genre, book[], numBook
* Return: count
*/

int countGenre(string genre, Book book[], int numBook){
    int count = 0; //Setting the count variable to 0

    for (int i = 0; i <numBook; i++){
        if (book[i].getGenre() == genre){ //When it is the same genre
            count++; //Increasing the count variable by one
        }
    }
return count;
}

//Main function with declared variables
int main(){
    string genre;
    Book book[50];
    int numBooksStored;
    int genreMatches;

    cin >> genre;
    cin >> numBooksStored;

    genreMatches = countGenre(genre, book, numBooksStored);
}