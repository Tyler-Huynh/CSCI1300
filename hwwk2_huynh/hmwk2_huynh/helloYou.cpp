#include <iostream>
#include <string>

using namespace std;

int main(){
 // User input for name and declaring "name" as a variable
 // Print "Enter you name: _ "   
    string name;
    cout << "Enter your name: "<< endl;
    cin >> name;

 // Print "Hello, _ !"   
    cout << "Hello, ";
    cout << name;
    cout << "!" << endl; 
    return 0;
}