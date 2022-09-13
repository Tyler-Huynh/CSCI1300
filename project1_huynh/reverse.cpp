// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Project #1 - Question # 1

#include <iostream>
#include <string>

using namespace std;

/*
* This function takes the input from the user and reverses it
* Parameters: string and user input
* Return: nothing
*/

void reverse(string str){ // The reverse function itself
    for (int i=str.length()-1; i>=0; i--){  // A for loop  
        string character=str.substr(i,1);        
        cout << str[i]; // Printing the user input 
    }
}


int main(){ // Main function and declaring variables and asking for user input
    string writing;
    cin >> writing;

reverse(writing); // Reversing the user input 
cout << endl;
    
    return 0;
}