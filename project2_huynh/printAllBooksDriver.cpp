// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 3

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

int main(){
    Book book[50];
    int numBook;

    book[0].setTitle("Michael Jackson Biography");
    book[0].setAuthor("Michael Jackson");
    book[0].setGenre("Biography");

    book[1].setTitle("Gordon Ramsey Cookbook");
    book[1].setAuthor("Gordon Ramsey");
    book[1].setGenre("Cookbook");

    book[2].setTitle("The Life of Pi");
    book[2].setAuthor("Yann Martel");
    book[2].setGenre("Fiction");

    numBook = 3;

    printAllBooks(book, numBook);
return 0;
}