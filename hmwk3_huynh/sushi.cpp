// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 3 - Question # 3

#include <iostream>
#include <iomanip>

using namespace std;

// Declaring "sushiamount", "totalPrice", and "discount" as variables and asking for user input
int main(){
    double sushiamount;
    double totalPrice;
    double discount;
    cout << "Enter the number of sushi: " << endl;
    cin >> sushiamount;
// Invalid input sequence
    if(sushiamount<=0){
        cout << "Invalid input " << endl;
        return 0;
    }
    else if(sushiamount <10){
        totalPrice = sushiamount * 1.99;

        cout << "Total price: $" << fixed << setprecision(2) << totalPrice << endl;
    }
    else if(sushiamount >=10 && sushiamount <=19){ // 10% discount sequence
        totalPrice = sushiamount * 1.99;

        discount = totalPrice * 10/100;
        
        totalPrice = totalPrice - discount;
        
        cout << "Total price: $" << fixed << setprecision(2) << totalPrice << endl;
    
    }   
    else if(sushiamount >=20 && sushiamount <=49){ // 15% discount sequence
        totalPrice = sushiamount * 1.99;
        
        discount = totalPrice * 15/100;

        totalPrice = totalPrice - discount;

        cout << "Total price: $" << fixed << setprecision(2) << totalPrice << endl;

    }
        
    else if(sushiamount >=50 && sushiamount <=99){ // 20% discount sequence
        totalPrice = sushiamount * 1.99;
        
        discount = totalPrice * 20/100;

        totalPrice = totalPrice - discount;

        cout << "Total price: $" << fixed << setprecision(2) << totalPrice << endl;
    }
        
    else if(sushiamount >=100){         // 25% discount sequence
        totalPrice = sushiamount * 1.99;
        
        discount = totalPrice * 25/100;

        totalPrice = totalPrice -discount;

        cout << "Total price: $" << fixed << setprecision(2) << totalPrice << endl;
    }
    return 0;
}

    