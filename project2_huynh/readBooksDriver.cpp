// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 2

#include <iostream>
#include <string>
#include <fstream>
#include "Book.h"

using namespace std;

//Calling the split function
int split(string str, char sep, string arr[], int size);

/*
* This function opens a file and reads from it and fills the array with the various information
* Parameters: file, book[], numBookStore, bookArrSize
* Return: value
*/

int readBooks(string file, Book book[], int numBookStore, int bookArrSize){
    int value; //Return value

    ifstream myfile; //Opening the file
    myfile.open(file);

    string line;

    if (numBookStore == bookArrSize){ //When the numBookStore is equal to the capacity(50)
        value = -2;
    
    }else if (myfile.fail()){ //If the file fails to open
        value = -1;
    
    }else if (numBookStore < bookArrSize){ //If numBook is less than the array size
        
        while (getline (myfile, line)){
            
            string a[50]; //Setting the array equal to 50

            if (line.length() != 0){ //If the line is not equal to 0
                split (line , ',', a, 50); //Implementing the split function

                Book b(a[1], a[0], a[2]); //Filling the array at various indexes or spots in the line

                book[numBookStore] = b; //Setting the book array equal to the new array of b

                numBookStore++; 
                value = numBookStore; 

                if (numBookStore == bookArrSize){
                    value = numBookStore;
                    break;
                } 
            }
        }
    }else{
        value = -1;
    }
    return value; //Returning value
}

/*
* This function is taking a string and splitting it and is inserting it into an array and outputing the max number if pieces
* Parameters: str, sep, arr, size
* Return: pos
*/

int split(string str, char sep, string arr[], int size){ //split function
    int pos = 0; //Delcared variables
    string substr;
    string word = "";
   
    for (int i=0; i < str.length(); i++){ //Traversing the array to find the seperator
        if (str[i] != sep){
            word = word + str[i]; //Creating the word
        
        }else if (str[i] == sep){
            arr[pos] = word;
            pos++;
            word = ""; //Resetting the word
        }
    }
        if (word == ""){ //If the word is equal to nothing
            return 0;

        }else if (pos >= size){ //If the amount of words that are split is larger than the size
            return -1;

        }else if (word.length() == 0 || size == 0){
            return 0;
        
        }else{ 
            arr[pos] = word;
            pos++;
        }

    return pos;  
}

int main(){

    //declared variables
    Book book[50]={};
    string myfile;
    int numBooksStored=0;

    //file name input
    cin >> myfile;

    //calling the function: user input filename and empty books array
    cout << readBooks(myfile, book, numBooksStored, 50) << endl;

}