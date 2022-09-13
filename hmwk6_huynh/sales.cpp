// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 6 - Question # 2

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
* This function is taking a string and splitting it and is inserting it into an array and outputing the max number if pieces
* Parameters: str, sep, arr, size
* Return: pos
*/

int split(string str, char sep, string arr[], int size){ //split function
    int pos = 0; //Delcared variables
    string substr;
    string word = "";
   
    for (int i=0; i < str.length(); i++){ //Traversing the array to find the seperator
        if (str[i] != sep){
            word = word + str[i]; //Creating the word
        
        }else if (str[i] == sep){
            arr[pos] = word;
            pos++;
            word = ""; //Resetting the word
        }
    }
        if (word == ""){ //If the word is equal to nothing
            return 0;

        }else if (pos >= size){ //If the amount of words that are split is larger than the size
            return -1;

        }else if (word.length() == 0 || size == 0){
            return 0;
        
        }else{ 
            arr[pos] = word;
            pos++;
        }

    return pos;  
}

/*
* This function is reading a file and printing out employee names and printing out their sales
* Parameters: names[], file, sales[][12], size
* Return: e
*/

int read_sales(string names[], string file, int sales[][12], int size){

    ifstream myfile(file); //Declaring line as function and calling for the file
    string line;

    myfile.open(file); //If the file is open

    int numLine = 0; //Setting the position of the numLine to 0

    string arr[100];
    int scale;
    string number;
    int e = 0;

    if (myfile.is_open()){
        while (getline(myfile, line)){
            if (line[0]>='A' && line[0]<='Z'){ //If the line is a name                  
                names[e]=line;  
            }else if(line.length() == 0){
                for (e = 0; e<10; e++){
                    char com;
                    scale >> number[e] >> com;
                }
            
            }else{
                split(line , ',', arr, 12); //Calling for the split function
                int sold = stoi(arr[1]); 
            }
        }
        myfile.close(); //Closing the file
    }
    return size;
}

int main(){ // Main function with declared variables
    string file = "sales.txt"; //Letting the file be found
    string employee_names[100];
    int sold[100][12];
    int size;
    int results;

     results = read_sales(employee_names, file, sold, size); //Calling for the read_sales function

     cout << results << endl; //Printing out the results 

    return 0; 
}