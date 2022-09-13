// CSCI 1300 Fall 2020
// Author: Tyler Huynh 
// Recitation: 306 - Sourav Chakraborty
// HW 8 - Question # 1

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vec; //Declaring the vector
    int num;
    int size = vec.size();
    
    cout << "Please enter a number: " << endl; //Output statement 
    cin >> num; //User input of number

    while (num != -1){
        if (num == 0 || num < -1){
            cout << "The number should be a positive integer or -1." << endl; //If the number entered is negative.
            size = vec.size();

        }else if (vec.empty()){ //If the vector is empty
            vec.push_back(num);
            size = vec.size();
        }else if (size == 1 && num % 5 == 0 && num % 3 == 0){ //edge class if the size is 1, it cannot delete twice
        
            vec.erase(vec.begin() + 0); //erasing the first element
            size = vec.size();

        }else if (size != 0 && num % 5 ==0 && num % 3 == 0){ //empty, divisible by 3 and 5
            vec.erase(vec.begin() + 0); //erasing the first element
            vec.pop_back(); //deletes last element
            size = vec.size();
        }else if (size != 0 && num %5 == 0){ //Divisible by 5
            vec.erase(vec.begin());
            size = vec.size();

        }else if (size !=0 && num %3 == 0){ //Divisible by 3
            vec.erase(vec.end() -1);
            size = vec.size();

        }else{
            vec.push_back(num); //Adding the number to the end
            size = vec.size();

        }
        cout << "Please enter a number: " << endl; //Asking for user input again
        cin >> num; 
    }

    if (vec.empty()){
            cout << "The vector is empty." << endl;  //If the vector is empty this will print
            
    }else if (vec.size() != 0){    
            cout << "The elements in the vector are: "; //Displaying the numbers in the vector
            
            int max = 0; //Declaring variables of min and max and setting them to 0
            int min = 1000;

            for (int i = 0; i < size; i++){
                cout << vec[i] << " ";
            }

            for(int i=0; i<size;i++){
                    if (i==0)
                    {
                        min = max = vec[i];
                    }
                    else if (vec[i] <= min){
                        min = vec[i];
                    
                    }else if (vec[i] >=  max){
                        max = vec[i];
                    }
            }
            cout << endl;
        cout << "Min = " << min << endl;
        cout << "Max = " << max << endl;
        }
    return 0;
    }
