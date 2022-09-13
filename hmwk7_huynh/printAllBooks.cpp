// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 7 - Question # 5

#include <iostream>
#include <string>
#include <iomanip>
#include "Book.h"

using namespace std;

/*
* This function takes an array of books and print it out accordingly 
* Parameters: book[], numBook
* Return: none
*/

void printAllBooks(Book book[], int numBook){ 
    if (numBook <= 0){ //If the number of books is less than or equal to 0
        cout << "No books are stored" << endl;
    
    }else{
        
        cout << "Here is a list of books" << endl; //Prints out the list of books
            
            for (int i = 0; i < numBook; i++){
                cout << book[i].getTitle() << " by ";
                cout << book[i].getAuthor() << endl;  
        }
    }
}