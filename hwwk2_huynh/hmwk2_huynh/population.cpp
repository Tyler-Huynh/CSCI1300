#include <iostream>

using namespace std;

int main(){
 // User input for current population and declaring variable of population
 // Print "Enter the current population: _ " 
    int population;
    cout << "Enter the current population: " << endl;
    cin >> population;

// Number of births per year
    population = population + 3942000;

// Number of deaths per year
    population = population - 2628000;

// Number of immigrants per year
    population = population + 1168000;

// Print "The population in one year _ "
    cout << "The population in one year: "; 
    cout << population << endl;
    return 0;
}