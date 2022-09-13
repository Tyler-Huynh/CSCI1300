#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

string repeat(string str, int n){
    string repeat;
    for (int i = 0; i <n; i++){
            repeat = repeat + str;
            repeat = repeat;
    }
    return repeat;
}