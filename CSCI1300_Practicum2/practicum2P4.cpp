#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void printElgiliblePlayers(string playernam[], float age[], int num){
    
    for (int i = 0; i < num; i++){
        if (age[i] >= 4 || age[i] <= 6){
            cout << playernam[i] << " " << age[i] << endl;
        }
    }
}