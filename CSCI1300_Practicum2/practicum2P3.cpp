#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void naturalDiagonal(int num){
   i
  
  
  for (int i=1; i <= num ; i++)
  { 
     for (int j=1; j <= num; j++)
     {
         if (i == j) 
         {
            cout << i;
         }
         else 
         {
            cout << "*" << j << "*";
         }
         cout << endl;
     }
  }
}
