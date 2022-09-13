// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 5 - Question # 1

#include <iostream>
#include <string>

using namespace std;

int main(){ //Main function
    float temps[10] = {-459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67}; //Array for this number
        for (int i=0; i<10; i++){
            cout << temps[i] << endl; //Output for temps
        }
    cout << endl;

    string colors [5] = {"Red", "Blue", "Green", "Cyan", "Magenta"}; //Array for colors
        for (int i=0; i<5; i++){
            cout << colors [i] << endl; //Output for colors
        }
    cout << endl;

    int sequence[100]; // Array for 1-100
        for (int i=0; i<100; i++){
            sequence[i] = i + 1;
            cout << sequence[i] << endl; //Output for sequence
        }
    cout << endl;
    
    char letters[52];
        int pos=0; //Setting the position to 0
        for (int i=0; i<52; i=i+2){
            letters[i] = (char)65+pos; //Increment for capital letters
            letters[i+1] = (char)97+pos; //Increment for lowercase letters
            pos++;
            cout << letters[i] << " " << letters[i+1] << endl; //Output for letters
        }
    cout << endl;

return 0;  
}
