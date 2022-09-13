#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double num1;
    cout << "Enter first number: " << endl;
    cin >> num1;
    double num2;
    cout << "Enter second number: " << endl;
    cin >> num2;
    double num3;
    cout << "Enter third number: " << endl;
    cin >> num3;


    if (num1 >=num2 && num1 >=num3){
        cout << "The largest number is " << num1 <<endl;
    } else if (num2 >=num1 && num2 >=num3){
        cout << "The largest number is " << num2 << endl;
    } else if (num3 >=num1 && num3 >=num2){
        cout << "The largest number is " << num3 << endl;
    }
return 0;    
}