// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 3 - Question # 1

#include <iostream>
#include <iomanip>

using namespace std;

// Declaring "score1", "score2", and "score3" as variables as well as sequences for user input accordingly
int main(){
    int score1;
    cout << "Enter practicum 1 score: " << endl;
    cin >> score1;
    
    int score2;
    cout << "Enter practicum 2 score: " << endl;
    cin >> score2;
    
    int score3;
    cout << "Enter practicum 3 score: " << endl;
    cin >> score3;

    double avg; // Declared "avg" as variable

    avg = (double) (score1 + score2 + score3) / 3; // Calculations used to find practicum average

    // Passing practicum average
    if(avg >=67){
        cout << "Practicum average: " << fixed << setprecision(2) << avg << endl;
        cout << "You have a passing practicum average. " << endl;
    
    }else{
    
    // Retake practicum average
    if(avg <=67)
       cout << "Practicum average: " << fixed << setprecision(2) << avg << endl;
       cout << "You can retake practicums during the final. " << endl;    
    }
        return 0;
    }

   
    