// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Project #1 - Question # 3

#include <iostream>
#include <string>

using namespace std;

/*
* This function takes the input from the user and determines if it is a vowel or not
* Parameters: character and user input
* Return: isVowel
*/

bool isVowel(char letter){ // Same function from isVowel program in order to assist the numVowel function
    bool vowel = true;
    switch (letter){
        case 'a': 
            letter = 'a';
            vowel = true; 
        break;

        case 'e': 
            letter = 'e';
            vowel = true; 
        break;

        case 'i': 
            letter = 'i';
            vowel = true;  
        break;

        case 'o': 
            letter = 'o';
            vowel = true;  
        break;

        case 'u': 
            letter = 'u';
            vowel = true;  
        break;

        case 'A': 
            letter = 'A';
            vowel = true;  
        break;

        case 'E': 
            letter = 'E';
            vowel = true;  
        break;

        case 'I': 
            letter = 'I';
            vowel = true;  
        break;

        case 'O': 
            letter = 'O';
            vowel = true;  
        break;

        case 'U': 
            letter = 'U';
            vowel = true;  
        break;

        default:
            letter = false;
            vowel = false;
    }
return vowel;   
}

/*
* This function takes the input from the user and determines the number of vowels in a string
* Parameters: string and user input
* Return: Position
*/

int numVowels(string str){ // 
    int position=0;
    for (int i=0; i < str.length(); i++){
        if (isVowel(str[i])){ // Checking if there are vowels in the string
            position++; // Increasing the position at which the vowels are located at in the string
        }
    }
return position;
}

int main(){ // Main function with delcration of variables
    int position;
    string str;
    cin >> str; // Input from user
    position = numVowels(str); // Calling the "numVowel" function
    cout << position << endl; // Printing the number of vowels in user input string 
return 0;
}

