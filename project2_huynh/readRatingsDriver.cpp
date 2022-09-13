// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 7

#include "User.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Calling the split function
int split(string str, char sep, string arr[], int size);

/*
* This function opens a file and reads from it and fills the array with the various information
* Parameters: file, book[], numBookStore, bookArrSize
* Return: value
*/

int readRatings(string file, User user[], int numUserStored, int userArrSize, int maxCol = 50){
    //Declared variables
    int value;
    string line;

    //Reading the file
    ifstream myfile;
    myfile.open(file);

    //Case 1
    if (numUserStored >= userArrSize){
        return -2;
    
    //Case 2
    }else if (myfile.fail()){
        return -1;
    
    //Case 3
    }else if (numUserStored < userArrSize){
        while (getline(myfile, line)){
            if (line.length() != 0){ //If the string is not empty
                string arr[51];

                int col = split(line, ',', arr, 51); //Calling the split function

                user[numUserStored].setUsername(arr[0]); 

                int index=0;
                int ratings;
            
                for (int i = 1; i < col; i++){
                    ratings = stoi (arr[i]);
                    user[numUserStored].setRatingAt(index, ratings);
                    index++;
                }

                numUserStored++; //Incrementing the user index

                value = numUserStored; //The return value
                
                //If the numUser stored is at max capacity
                if (numUserStored == userArrSize){
                    value = numUserStored;
                    break;
                }
            }   
        }
    }
return value;
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

//Main Function
int main()
{
    //declared variables
    string filename;
    User user[10];
    int numUsersStored;
    int usersArrSize;

    //user input of parameters
    cin >> filename;
    cin >> numUsersStored;
    cin >> usersArrSize;

    //function call...returns the number of users stored
    cout << readRatings(filename,user,numUsersStored,usersArrSize,50) << endl;
}