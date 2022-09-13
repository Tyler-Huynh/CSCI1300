// CSCI 1300 Fall 2020
// Author: Tyler Huynh 
// Recitation: 306 - Sourav Chakraborty
// HW 8 - Question # 4

#include <iostream>
#include <vector>

using namespace std;

/*
* This function takes an integer value and converts it into binary and repeats it over without the use of a for or while loops.
* Parameters: integer
* Return: string
*/

string decimalToBinaryRecursive(int integer){
    
    //Declared variables
    string answer = ""; 
    int binary_num;

    // Case 1: if the integer is eaul to 0
    if (integer == 0){
        return "0";
    
    //Case 2: the recursive case
    }else{
        binary_num = integer % 2; //The remainder will be either 0 or 1 which are pieces of binary code

        answer = to_string(binary_num) + answer; //Adding the result to the string
            
       return decimalToBinaryRecursive(integer / 2) + answer; //Recalling the decimalToBinaryRecursive function and adding it to the string
    }

}

//Main function with test cases 
int main(){
    //Case 1: If the number entered is 0
    cout << decimalToBinaryRecursive(0) << endl;

    //Case 2: If the number entered is even
    cout << decimalToBinaryRecursive(4) << endl;

    //Case 3: If the number entered is odd
    cout << decimalToBinaryRecursive(9) << endl;
}
