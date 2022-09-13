#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int CountLower(string letter){
    int lower = 0;
    if (letter.length() == 0){
        return -1;
    }else if(lower == 0){
        return -2;  
    }

        for (int i = 0; i<letter.length(); i++){
            if (letter[i]>='a' && letter[i] <= 'z'){
                lower +=1;
            }
        } 
    }
    return lower;
}