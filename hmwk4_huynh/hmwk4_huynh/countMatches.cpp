// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 4 - Question # 4

#include <iostream>
#include <string>

using namespace std;

// Delcaring variables and asking for user input
int main(){
    string string1;
    string string2;
    cout << "Enter the search string: " << endl;
    cin >> string1;
    cout << "Enter the substring to be searched: " << endl;
    cin >> string2;

    int Max = string2.length();
    int Min = string1.length();
    int found = 0;

// For sequence with if statement to find the number of occurrences
    for (int i=0; i<string1.length(); i++){
        if (string2 == string1.substr(i,Max)){
            found++;
        }
    }
// Output statement
    cout << "Number of occurrences: " << found << endl;
return 0;
}