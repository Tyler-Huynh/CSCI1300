// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 6 - Question # 3

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

int main(){ //Main function with declared variables
    string file;

    cout << "Enter the file name: " << endl; //Print statement for user input of file
    cin >> file; //User input

    ifstream myfile; //Opening the file
    myfile.open(file); 

    string line; //Declared variables of the college pre-requisites
    string name;
    double SAT;
    double GPA;
    int inter;
    int tier;
    int sem_1;
    int sem_2;
    int sem_3;
    int sem_4;

    if (myfile.fail()){ //If the file cannot open
        cout << "Could not open file. " << endl;
        return 0;
    }

    cout << endl; //Print statement for the results
    cout << "Results: " << endl;
    
    getline (myfile, line);
    while (getline(myfile, line)){
       bool can = true;
            
            if (line[0]=='S') //If the line is equal to 'S' or Students on the text file
            {
                continue; 
            }

            else if(line[0]!='S') //If it does not equal then it shall continue instead
            {

            string a[9]; //Setting the array equal to the amount of variables

            int value = split (line,',', a,9); //Calling for the print statement

            name=a[0]; //Putting the different variables into the array and converting them
            SAT = stod(a[1]);
            GPA = stod(a[2]);
            inter = stoi(a[3]);
            tier = stoi(a[4]);
            sem_1 = stoi(a[5]);
            sem_2 = stoi(a[6]);
            sem_3 = stoi(a[7]);
            sem_4 = stoi(a[8]);
            }

            //Making it so that the GPA is equal to 10
            GPA = 2*GPA;

            //Making it so that the SAT is equal to 10
            SAT = SAT/160;

            //Equation and declaration of the overall
            double overall;
            overall = .40 * GPA + .30 * SAT + .20 * tier + .1 * inter;

            string criteria;

        //Conditionals for the determining the criteria 
        if(overall >= 6){
            can = true;
            criteria = "score";
        
        }else if (inter == 0 || GPA-SAT>2){
            if (overall >=5){
                can = true;
                criteria = "outlier";
            
            }else{
                can = false;
            }
        
        }else if(sem_1 < sem_2 && sem_2 < sem_3 && sem_3 < sem_4){
            if (overall >= 5){
                can = true;
                criteria = "grade improvement";

            }else{
                can = false;
            }
        }else{
                can = false;
            
            }if (can == true){
                cout << name << "," << overall << "," << criteria << endl;
            
            }else{
                cout << name << "," << overall << endl;
            }
        
    }
    myfile.close(); //Closing the file
    return 0; //Return value
}