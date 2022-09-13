#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double gallonsused;
    cout << "Enter the number of gallons used: " << endl;
    cin >> gallonsused;

    double lowusagelimit;
    cout << "Enter the low usage limit: " << endl;
    cin >> lowusagelimit;

    
    double cost;

    if(gallonsused <=lowusagelimit){
        cost = gallonsused * 0.012;
        cout << "Water bill: " << cost << endl; 
    }
    else if(gallonsused >=lowusagelimit){
        cost = gallonsused * 0.018;
        cout << "Water bill: " << cost << endl; 
    }
    
return 0;  
}

