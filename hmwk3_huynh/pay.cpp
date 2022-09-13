// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 3 - Question # 2

#include <iostream>
#include <iomanip>

using namespace std;

// Declaring "hoursworked", " hourlypayrate", and "paycheck" as variables and also user input sequences
int main(){
    float hoursworked;
    cout << "Enter the number of hours worked " << endl;
    cin >> hoursworked;

    float hourlypayrate;
    cout << "Enter an hourly pay rate " << endl;
    cin >> hourlypayrate;

    float paycheck;

   // Invalid input sequences

    if(hoursworked < 0){ 
        cout << "Invalid input " << endl;
        return 0;
    }
    if (hourlypayrate < 0){
        cout << "Invalid input " << endl;
        return 0;
    }


    if(hoursworked > 40){
    
        paycheck = (( hoursworked - 40)* hourlypayrate * 1.5) + (40 * hourlypayrate); // Overtime payrate and paycheck
    
    }else{

        paycheck = hoursworked * hourlypayrate; // Normal paycheck without overtime pay
    }
    
    cout << "Paycheck: " << fixed << setprecision(2) << paycheck << endl;
        
        return 0;    
}