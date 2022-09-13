#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void printSeriesMinusThrees(int n) {    
    int result = 0;
    int count = 1;
    while(count <= n ){
        if (count == 1){
            // adding for the 1st number 
            result += count;
            cout << count;
        }
        else if (count%3 != 0) {
            // If the number is not divisible by 3, add it to sum and print
            result += count;
            cout << " + " << count; 
        }
        else {
            // number is divisible by 3, it gets subtracted from the result. 
            result -= count;
            cout << " - " << count; 
        }
    }
    cout << endl << "Result of the series is " << result << endl;
}
    
    
    
    
   