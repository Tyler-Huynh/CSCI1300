#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int sumOfMultiples(int seed, int cap){
    int sum =0;
    for (int i = 1; i <= cap; i++){
        if (i % seed == 0){
            sum = sum + i;
        }else{
            sum = sum;
        }
    }
    return sum;
}