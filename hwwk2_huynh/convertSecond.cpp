#include <iostream>

using namespace std;

int main(){
 // User input for seconds and declaring seconds as variable
 // Print "Enter a number of seconds: _ "
    int seconds;
    cout << "Enter a number of seconds: " << endl;
    cin >> seconds;
 
 //Declaring variables; hours and minutes   
    int hours;
    int minutes; 

 // Equations used to convert seconds into hours and minutes with remainder accounted for  
    hours = seconds / 3600;
    
    seconds = seconds % 3600;

    minutes = seconds / 60;

    seconds = seconds % 60;
    
// Print " _ hour(s)", " _ minutes(s)", and " _ second(s)"  
    cout << hours;
    cout << " hour(s) ";
    cout << minutes;
    cout << " minute(s) ";
    cout << seconds;
    cout << " second(s) "; 
    return 0;
}   