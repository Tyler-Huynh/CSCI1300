// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 5 - Question # 3

#include <iostream>
#include <iomanip>

using namespace std;

/*
* This function take an elements(number) from an array and inserts it into a different position
* Parameters: arr, numElements, scale, and newElemens
* Return: numElements
*/

int insert(int arr[], int numElements, int scale, int newElements){ //insert function with return
    if (numElements >= scale){ //If user inserts more elements than the scale 
        return numElements;
    }

    int position = numElements; //The position of a new element

    for  (int i=0; i<numElements; i++){ //Traversing the array to find the position
        if (newElements < arr[i]){
            position = i;
            break;
        }
    }
    
    for (int i = numElements-1; i >= position; i--){ //Inserting the new element into the array
        arr[i+1] = arr[i]; 
    }
    arr[position] = newElements;
    return (numElements +1);
}

int main(){ //Main function with delcared variables
    int numElements;
    int arr[numElements];
    int newElements;
    int scale;
    int result;

    cin >> numElements; //User input
    cin >> newElements;

    for (int i=0; i < numElements; i++){
        cin >> arr[i];
    }

    result = insert(arr, numElements, scale, newElements); //Calling the function
    cout << result; //Output for results
}