// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 5 - Question # 5

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

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

int main(){ //Main function with delcared variables
    int pos;
    int size;
    char sep;
    int i=0;
    string str;
    string arr[size];

    cin >> sep; //Userinput
    cin >> size;

    for (int i=0; i < str.length(); i++){
        cin >> arr[i];
    }

    size = str.length();
    int output = split(str, sep, arr, size); //Calling the function
    cout << "arr["<< i << "]:" << arr[i] << endl; //Output statements
    cout << "Function returned value: " << output << endl;
}






