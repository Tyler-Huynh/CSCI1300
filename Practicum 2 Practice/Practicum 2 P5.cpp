#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int countVowels(string letter){ // The isVowel function
   // Declaring of the boolean 
    int count = 0;
    

   if (letter == ""){
               return -1;
    }else{

for (int i = 0; i<letter.length(); i++){ 
    
    if (letter[i] == 'a' || letter[i] == 'i' || letter[i] == 'e' || letter[i] == 'o' || letter[i] == 'u'){
        count++;
    }
}
}
return count;   
}