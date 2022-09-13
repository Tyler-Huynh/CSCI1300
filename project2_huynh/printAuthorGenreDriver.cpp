// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 5

#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

/*
* This function takes the first letter of the author and finds the genre from there
* Parameters: genre, authorFirstLetter, book[], numBook
* Return: count
*/

int printAuthorGenre(string genre, char authorFirstLetter, Book book[], int numBook){
    //Declared variables 
    int count = 0;

    for (int i = 0; i <numBook; i++){
        if (book[i].getGenre() == genre){ //If it is the same genre
            if ((book[i].getAuthor())[0] == authorFirstLetter){ //If the first character is equal to eachother
                count++; //Incrementing the count variable
            }
        }
    }

    //If there are no matches
    if (count == 0){
        cout << "No titles found for this genre-author pair." << endl;
    
    //If there are matches
    }else{
        cout << "Here is a list of books that match this genre-author pair:" << endl;
            
            for (int i = 0; i < numBook; i++){
                if (book[i].getGenre() == genre){ //If it is the same genre  
                    if ((book[i].getAuthor()) [0] == authorFirstLetter){ //If it is the same first character
                        //Output statements
                        cout << book[i].getTitle() << " by ";
                        cout << book[i].getAuthor() << endl;  
                }
            }
        }
    }
return count;
}

//Main Function with declared variables
int main(){
    string genre;
    char authorFirstLetter;
    int numBook = 3;
    int genreLetter;
    string myfile;
    
    //Populating the various book arrays
    Book book[50];
    book[0].setTitle("The Martian");
    book[0].setAuthor("Andy Weir");
    book[0].setGenre("Fiction");

    book[1].setTitle("The Promised Land");
    book[1].setAuthor("Barack Obama");
    book[1].setGenre("Biography");

    book[2].setTitle("The Odyssey");
    book[2].setAuthor("Homer");
    book[2].setGenre("Fiction");

    //Output statments with respective matches and non-matches
    cout << printAuthorGenre("Fiction", 'A', book, numBook) << endl;

    cout << printAuthorGenre("Biography", 'L', book, numBook) << endl;

    cout << printAuthorGenre("Non-Fiction", 'O', book, numBook) << endl;
    
return 0;
}