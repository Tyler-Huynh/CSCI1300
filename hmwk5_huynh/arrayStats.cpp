// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 5 - Question # 2

#include <iostream>
#include <iomanip>

using namespace std;

double min; //Declared variables
double max;
double avg;

/*
* This function takes the input from the user and determines the avg between the max and min values
* Parameters: min, max
* Return: none
*/

void stats(double array[], int numbers){ //stats function
    double min = array[0]; //Delcared variables
    double max = array[0];
    double sum = 0;
    double avg;

    for (int i=0; i < numbers; i++){ //User input for the numbers in the array
        cin >> array[i];
    }
    
    for (int i=1; i < numbers; i++){ // Finding the min
        if (min > array[i]){
            min = array [i]; 
        } 
    }
    cout << "Min: " << fixed << setprecision(2) << min << endl; //Min output

    for (int i=1; i < numbers; i++){ // Finding the max
        if (max < array[i]){
            max = array [i];
        }
    }
    cout << "Max: " << fixed << setprecision(2) << max << endl; // Max output

    for (int i =0; i < numbers; i++){ //Taking the min and max values to find the avg
        sum = sum + array[i];
    }
    avg = sum / (double) numbers;
    cout << "Avg: " << fixed << setprecision(2) << avg << endl; // Output for avg

}

int main(){ // Main function with delcared variables
    int numbers;
    double arr[numbers];

    for (int i=0; i<numbers; i++){
        cin >> arr[numbers];
    }

    stats (arr, numbers); //Calling the function

return 0;
}

