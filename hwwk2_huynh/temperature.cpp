#include <iostream>
#include <iomanip>

using namespace std;

int main(){
// User input for Fahrenheit and declaring fahrenheit and celsius as variable
// Print "Enter a temperature in Fahrenheit: _ "    
    double fahrenheit, celsius;
    cout << "Enter a temperature in Fahrenheit: " << endl;
    cin >> fahrenheit;

// Equation used to convert Fahrenheit to celsius     
    celsius = (5.00/9.00)*(fahrenheit-32);

// Print "The temperature in _ degress Fahrenheit is _ degrees celsius"
    cout << "The temperature ";
    cout << fahrenheit;
    cout << " degrees Fahrenheit ";
    cout << "is ";
    cout << fixed << setprecision(2); 
    cout << celsius;
    cout << " degrees Celsius. " << endl;
    return 0;
}
    

