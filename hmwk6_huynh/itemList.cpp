// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 6 - Question # 1

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){ // Main sequence with declared variables
    string file;

    cout << "Enter the file name: " << endl; //Print statement 
    getline (cin, file); //User input

    ifstream myfile(file); //Declaring myfile(s) as a variable

    if (myfile.fail()){ //If the file cannot open
        cout << "Could not open file. " << endl;
        return 0;
    }

    if(myfile.is_open()){
            string line;
            int numLine = 0; //Setting the posistion of the numLine in terms of the line of text
            int i=0;
            
                while (getline(myfile,line)){ //Sequence for printing the number of lines
                    if (line != ""){
                    numLine++;
                    }
                }
                cout << "The number of lines: " << numLine << endl; 

                myfile.clear(); //Resetting the position of the getline operator
                myfile.seekg(0); //Starting it at the beginning again
                float price[numLine]; //Making array for both price and name (product and price)
                string name[numLine];
           
                while (getline(myfile,line)){

                    stringstream ss(line);
                    string n; //Storing values for n and p to be used as arrays
                    string p;
                    string space;
                    getline (ss, n, ',');
                    name[i] = n;
                    getline (ss, space, ' ');
                    getline (ss, p, ',');
                    price[numLine]= stof(p); //Converting p as a string to a float (never worked kept getting error of invalid argument)
                    i++; 
                }

                string maxPrice; //Declaring the maxPrice/minPrice of an item
                string minPrice;
            
                double max = 0; //Setting the max equal to 0
                for (i=0; i < numLine; i++){ // Finding the max
                    if (price[i] > max){
                        max = price[i];
                        maxPrice = name[i];
                    }  
                }

                double min = max;
                for (i=0; i < numLine; i++){ //Finding the min
                    if (price[i] < min){
                        min = price[i];
                        minPrice = name[i];
                    }
                }
        }
return 0;
}
