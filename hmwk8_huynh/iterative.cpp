// CSCI 1300 Fall 2020
// Author: Tyler Huynh 
// Recitation: 306 - Sourav Chakraborty
// HW 8 - Question # 3

#include <iostream>
#include <vector>

using namespace std;

/*
* This function takes an integer value and converts it into binary
* Parameters: integer
* Return: answer
*/

string decimalToBinaryIterative(int integer){

    //Declared variables
    string answer = "";
    int binary_num;

    if (integer == 0){ //If the integer that is entered is 0 than the answer should also be 0
        answer = "0";
    
    }else{

        while (integer != 0){
            binary_num = integer % 2;

            answer = to_string(binary_num) + answer;
            
            integer = integer / 2;  
        }
    }
return answer;
}

//Main function with test cases 
int main(){
    //Case 1: If the number entered is 0
    cout << decimalToBinaryIterative(0) << endl;

    //Case 2: If the number entered is even
    cout << decimalToBinaryIterative(4) << endl;

    //Case 3: If the number entered is odd
    cout << decimalToBinaryIterative(9) << endl;
}
