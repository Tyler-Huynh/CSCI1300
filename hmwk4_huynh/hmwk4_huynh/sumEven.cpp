// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 4 - Question # 1

#include <iostream>

using namespace std;
// Declaring variable and asking for user input
int main(){
    int number;
    cout << "Enter a positive number: " << endl; 
    cin >> number;

    int sum=0;
// Beginning of loop statement
    for (int i=0; i<=number; i=i+2){
       sum=sum+i; 
    }
    cout << "Sum: " << sum << endl;
return 0;
}