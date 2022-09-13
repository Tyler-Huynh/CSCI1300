// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Project #1 - Question # 4

#include <iostream>
#include <string>

using namespace std;

/*
* This function takes the input from the user and determines the similarityScore between the two seqeunces
* Parameters: sequence1 and 2 and user input
* Return: similarityScore
*/

double calcSimScore (string sequence1, string sequence2){
    float hammingDistance = 0;
    float similarityScore = 0;
    int sequence1_length = sequence1.length();
    int sequence2_length = sequence2.length();

    if (sequence1_length ==0 && sequence2_length ==0){ //If there user inputs two empty strings
        return 0;
    
    }else if (sequence1_length == sequence2_length){ //If user inputs two strings of the same length
        
        for (int i=0; i<=sequence1.length(); i++){
            if (sequence1[i] == sequence2[i]){
                hammingDistance = hammingDistance; //Match
            
            } else if (sequence1[i] != sequence2[i]){ //No match
                hammingDistance++;
            }
        }     
        similarityScore = (sequence1_length - hammingDistance)/sequence1_length; //If the two sequences the user inputs are different lengths    
    
    }else if (sequence1_length != sequence2_length){ 
        similarityScore = 0; //No similarity score is present
    }
return similarityScore; //Return similarityScore
}

int main(){ // Main function with delcaration of variables
    string sequence1;
    string sequence2;

    double similarityScore;

    cin >> sequence1; //User input for sequence1 and 2
    cin >> sequence2;

    similarityScore = calcSimScore(sequence1,sequence2); //Calling the function

    cout << similarityScore << endl; //Output
    return 0;
}



