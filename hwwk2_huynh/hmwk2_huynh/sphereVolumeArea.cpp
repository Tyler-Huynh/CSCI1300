#include <iostream>
#include <cmath>

using namespace std;

int main(){
// User enters input for radius and declaring variable for radius
// Print "Enter a radius: _ "  
    double radius;
    cout << "Enter a radius: " << endl;
    cin >> radius;

// Declaring variable for surface area and volume
    double volume;
    double surfacearea;

// Equations used to calculate surfacearea and volume based on user input
    surfacearea = (4*M_PI*pow(radius,2));
    
    volume = (4*M_PI*pow(radius,3))/3;

// Print "Volume: _ " and "Surface area: _ " 
    cout << "Volume: ";
    cout << volume << endl;
    cout << "Surface area: ";
    cout << surfacearea << endl;
    return 0;
}