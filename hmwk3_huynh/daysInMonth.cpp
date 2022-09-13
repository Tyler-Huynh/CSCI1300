// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 3 - Question # 5

#include <iostream>

using namespace std;

// User input for both month and year as well as declaring year and month as variables
int main(){
    int year;
    cout << "Enter a year: " << endl;
    cin >> year; 

    int month;
    cout << "Enter a month: " << endl;
    cin >> month;

// Invalid option sequence
if (month < 1 || month >12){
    cout << "Invalid month " << endl;
    return 0;
}

// Switch statement depending on the users input for year along with calculations for that input
    switch (month){
    case 2: 
    if (year >1582){
        if (year%100 == 0 && year%400 != 0){ // Non leap year
            cout << "28 days" << endl;
    
        }else if (year%4 == 0 || year%400 == 0){ // Leap year
            cout << "29 days" << endl;
    
        }else if (year%4 != 0){              // Non leap year
                cout << "28 days" << endl;
        }
    }

    if (year <1582){       
        if (year%4 == 0){
            cout << "29 days" << endl; // Leap year
    
        }else if(year%4 !=0){
            cout << "28 days" << endl; // Non leap year
    }
    }

    break;
// Months that have 31 days 
    case 1:                  
        cout<< "31 days " << endl; 
            break;
    case 3: 
        cout<< "31 days " << endl; 
            break;
    case 5: 
        cout<< "31 days " << endl; 
            break;
    case 7: 
        cout<< "31 days " << endl; 
            break;
    case 8: 
        cout<< "31 days " << endl; 
            break;
    case 10: 
        cout<< "31 days " << endl; 
            break;
    case 12: 
        cout<< "31 days " << endl; 
            break;
    
    break;
// Months that have 30 days
    case 4: 
        cout<< "30 days " << endl; 
            break;
    case 6: 
        cout<< "30 days " << endl; 
            break;
    case 9: 
        cout<< "30 days " << endl;
            break;
    case 11: 
        cout<< "30 days " << endl; 
            break;
    break;    
    }
return 0;
}

