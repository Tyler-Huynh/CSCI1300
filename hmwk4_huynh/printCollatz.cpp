// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 4 - Question # 2

#include <iostream>

using namespace std;

// Declaring variable of "number" and asking for user input
int main(){
    int number;
    cout << "Enter a positive number: " << endl;
    cin >> number;

// While loop for user input and variable 
    while (number>=1){
        cout << number << endl;
        if (number==1){
        break;
        }else if (number%2==0){
            number=number/2;
        }else{
            number=3*number+1;
        }
    }
return 0;
}