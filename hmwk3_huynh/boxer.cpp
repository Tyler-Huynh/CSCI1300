// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 3 - Question # 4

#include <iostream>
#include <iomanip>

using namespace std;

// Declaring weight 1-3 as variables and user input for weight
int main(){
    int weight1;
    int weight2;
    int weight3;
    cout << "Enter boxers' weights " << endl;
    cin >> weight1;
    cin >> weight2;
    cin >> weight3;

// If and else statements for the weights with ascending and descending order as well as neither along with calculations
    if( weight1 < weight2 && weight2 < weight3){
        
        cout << "Ascending order" << endl;
    }
    else if ( weight1 > weight2 && weight2 > weight3){

        cout << "Descending order" << endl;
    }else{
        
        cout << "Neither" << endl;
    }
    return 0;
}