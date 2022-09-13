// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 4 - Question # 5

#include <iostream>
#include <string>

using namespace std;

// Delcared variables and asked for user input of "height"
int main(){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int height;
    cout << "Enter the height: " << endl;
    cin >> height;
    int position = 0;
    
// Nested loop with if and else statements
    while (height >0){
        for (int i=0; i<height; i++){
            if (position==1){ //For beginning of loop with char "a"
                position=1; 
                cout << alphabet [position];
                position++;
            }else{
                if (position==26) position=0; //For ending the loop with char "z"
                    cout << alphabet [position];
                    position++;
            }
        }
    cout <<endl; // Beginning the next line of the triangle
    height --;
    }   
return 0;
}