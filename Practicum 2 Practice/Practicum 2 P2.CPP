#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int addOddMinusEven(int start, int end){
    int result = 0;

    for (int i = start; i<end; i++){
        if (i % 2 == 0){
            result = result - i;
        }else{
            result = result + i;
        }
    }
    return result;
}