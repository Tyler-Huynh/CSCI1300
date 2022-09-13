// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 5 - Question # 4

#include <iostream>
#include <iomanip>

using namespace std;

/*
* This function is trying to find the maximum number of each row that is being inputed
* Parameters: arr, row
* Return: sum
*/

int maxSum(int arr[][10], int row){ //maxSum function
    double sum = 0; // Setting the position
    for (int i=0; i < row; i++){ 
        int max = -10000000;
        for (int j=0; j < 10; j++){ //Finding the max elements (number) in every row
            if (max < arr[i][j]){
                max = arr[i][j];
            }  
        }
        sum += max; //Adding the max number to each sum
    }
   return sum;
}

int main(){ //Main function with delcared variables
    float sum;
    int row;
    int arr[row][10];
    int input;
    cin >> row;
    
    for (int i=0; i < row; i++){
        for (int j=0; j<10; j++){ //User input
            cin >> input;
            arr[i][j] = input;
        }
    }

    sum = maxSum(arr, row); //Calling the function
    cout << sum << endl; //Output for sum
}