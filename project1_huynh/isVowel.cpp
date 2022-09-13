// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Project #1 - Question # 2

#include <iostream>
#include <string>

using namespace std;

/*
* This function takes the input from the user and determines if it is a vowel or not
* Parameters: character and user input
* Return: isVowel
*/

bool isVowel(char letter){ // The isVowel function
    bool vowel = true; // Declaring of the boolean 

    switch (letter){ // Switch statement containing different iterations of vowels
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

        default: // If the letter the user inputs is not a vowel 
            letter = false;
            vowel = false;
    }
return vowel;   
}

int main(){ // Mainfunction and delcaration of variables
    char letter;
    int Isvowel;
    cin >> letter;
    Isvowel = isVowel (letter); // Calling the isVowel function
    cout << Isvowel << endl; // Printing the if the vowel is a vowel of not
return 0;
}


