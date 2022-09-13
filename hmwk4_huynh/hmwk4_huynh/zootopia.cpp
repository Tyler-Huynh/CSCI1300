// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 4 - Question # 3

#include <iostream>

using namespace std;

// Delcaring variables and asking for user input
int main(){
    int animal;
    double hireScore;
    double agility;
    double strength;
    double speed;
    
    
    cout << "Select a numerical option:" << endl;
    cout << "=== menu ===" << endl;
    cout << "1. Fox " << endl;
    cout << "2. Bunny " << endl;
    cout << "3. Sloth " << endl;
    cout << "4. Quit " << endl;
    
    cin >> animal;

 // While loop with a switch sequence inside it      
        while (animal !=4){   
            switch (animal){
                case 1: // Fox
                    cout << "Enter agility: " << endl;
                    cin >> agility;
                    cout << "Enter strength: " << endl;
                    cin >> strength;
                    speed = 0;
                
                    hireScore = 1.8 * agility + 2.16 * strength + 3.24 * speed;

                    cout << "Hire Score: " << hireScore << endl;
             break;

                case 2: // Bunny
                    cout << "Enter agility: " << endl;
                    cin >> agility;
                    cout << "Enter speed: " << endl;
                    cin >> speed;
                    strength = 0;

                    hireScore = 1.8 * agility + 2.16 * strength + 3.24 * speed;

                    cout << "Hire Score: " << hireScore << endl;
            break;

                case 3: // Sloth
                    cout << "Enter strength: " << endl;
                    cin >> strength;
                    cout << "Enter speed: " << endl;
                    cin >> speed;
                    agility = 0;

                    hireScore = 1.8 * agility + 2.16 * strength + 3.24 * speed;

                    cout << "Hire Score: " << hireScore << endl;
            break;
                default: // Invalid input
                    cout << "Invalid option" << endl;
            break;
                }                
    cout << "Select a numerical option:" << endl;
    cout << "=== menu ===" << endl;
    cout << "1. Fox " << endl;
    cout << "2. Bunny " << endl;
    cout << "3. Sloth " << endl;
    cout << "4. Quit " << endl;
    
    cin >> animal; 
            }
    cout << "Good bye! " << endl;
return 0;    
}