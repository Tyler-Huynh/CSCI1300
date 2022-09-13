// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#include "Store.h"

#include <iostream>

using namespace std;

Store :: Store(){ //Default constructor
    foodPrice = 0;
    yokePrice = 0;
    ammoPrice = 0;
    wagonPartsPrice = 0;
    medKitPrice = 0;
    foodBought = 0;
    yokeBought = 0;
    ammoBought = 0;
    wagonPartsBought = 0;
    medKitBought = 0;
    balance = 0;
    spent = 0;
}

Store :: Store(int yokeBought_1, int ammoBought_1, int medKitBought_1, int wagonPartsBought_1, int foodBought_1, double balance_1, double spent_1, double yokePrice_1, double foodPrice_1, double ammoPrice_1, double wagonPartsPrice_1, double medKitPrice_1){ //Parameterized constructor
    foodPrice = foodPrice_1;
    yokePrice = yokePrice_1;
    ammoPrice = ammoPrice_1;
    wagonPartsPrice = wagonPartsPrice_1;
    medKitPrice = medKitPrice_1;
    foodBought = foodBought_1;
    yokeBought = yokeBought_1;
    ammoBought = ammoBought_1;
    wagonPartsBought = wagonPartsBought_1;
    medKitBought = medKitBought_1;
    balance = balance_1;
    spent = spent_1;
}

double Store :: getFoodPrice(){ //Returning the foodPrice as double
    return foodPrice;
}
        
void Store :: setFoodPrice(double foodPrice_1){ //Setting the foodPrice to the user input
    foodPrice = foodPrice_1;
}
        
double Store :: getYokePrice(){ //Returning the yokePrice as double
    return yokePrice;
}
        
void Store :: setYokePrice(double yokePrice_1){ //Setting the yokePrice to the user input
    yokePrice = yokePrice_1;
}
        
double Store :: getAmmoPrice(){ //Returning the ammoPrice as double
    return ammoPrice;
}
        
void Store :: setAmmoPrice(double ammoPrice_1){ //Setting the ammoPrice to the user input
    ammoPrice = ammoPrice_1;
}

double Store :: getWagonPartsPrice(){ //Returning the wagonPrice as double
    return wagonPartsPrice;
}
        
void Store :: setWagonPartsPrice(double wagonPartsPrice_1){ //Setting the wagonPrice to the user input
    wagonPartsPrice = wagonPartsPrice_1;
}
        
double Store :: getMedKitPrice(){ //Returning the medKitPrice as double
    return medKitPrice;
}
        
void Store :: setMedKitPrice(double medKitPrice_1){ //Setting the medKitPrice to the user input
    medKitPrice = medKitPrice_1;
}

void Store :: priceIncrease(int fortNum){ //Determines price increase
    //Depending on what fort the player's group stops at, there is a different multiplier
    foodPrice = (1+(.25*fortNum)) * foodPrice;
    yokePrice = (1+(.25*fortNum)) * yokePrice;
    ammoPrice = (1+(.25*fortNum)) * ammoPrice;
    wagonPartsPrice = (1+(.25*fortNum)) * wagonPartsPrice;
    medKitPrice = (1+(.25*fortNum)) * medKitPrice;
}

int Store :: getFoodBought(){ //Returns foodBought as int
    return foodBought;
}

void Store :: setFoodBought(int foodBought_1 ){ //Setting the foodBought to the user input
    foodBought = foodBought_1;
}

int Store :: getYokeBought(){ //Returns yokeBought as int
    return yokeBought;
}

void Store :: setYokeBought(int yokeBought_1){ //Setting the yokeBought to the user input
    yokeBought = yokeBought_1;
}

int Store :: getAmmoBought(){ //Returns ammoBought as int
    return ammoBought;
}

void Store :: setAmmoBought(int ammoBought_1){ //Setting the ammoBought to the user input
    ammoBought = ammoBought_1;
}

int Store :: getWagonPartsBought(){ //Returns wagonBought as int
    return wagonPartsBought;
}

void Store :: setWagonPartsBought(int wagonPartsBought_1){ //Setting the wagonBought to the user input
    wagonPartsBought = wagonPartsBought_1;
}

int Store :: getMedKitBought(){ //Returns medKitBought as int
    return medKitBought;
}

void Store :: setMedKitBought(int medKitBought_1){ //Setting the medKitBought to the user input
    medKitBought = medKitBought_1;
}

double Store :: getSpent(){ //Returns the amount spent by the player
    return spent;
}

void Store :: setSpent(int foodBought_1, int yokeBought_1, int ammoBought_1, int wagonBought_1, int medKitBought_1){ //Calculates the amount spent when the player enters the store
    spent = foodBought_1 * foodPrice + yokeBought_1 * yokePrice + ammoBought_1 * ammoPrice + wagonBought_1 * wagonPartsPrice + medKitBought_1 * medKitPrice;
}

double Store :: getBalance(){
    return balance;
}

void Store :: setBalance(double balance_1){ //Calculates the remaining balance the player has
    balance = balance_1;
}

void Store :: printBill(){ //Prints out the bill
    cout << "HERE IS YOUR BILL: " << endl;
    cout << "YOKES BOUGHT: " << getYokeBought() << " " << "SPENT: $" << getYokeBought()*getYokePrice() << endl;
    cout << "FOOD BOUGHT: " << getFoodBought() << " " << "SPENT: $" << getFoodBought()*getFoodPrice() << endl;
    cout << "BOXES OF BULLETS BOUGHT: " << getAmmoBought() << " " << "SPENT: $" << getAmmoBought()*getAmmoPrice() << endl;
    cout << "WAGON PARTS BOUGHT: " << getWagonPartsBought() << " " << "SPENT: $" << getWagonPartsBought()*getWagonPartsPrice() << endl;
    cout << "MEDICAL KITS BOUGHT: " << getMedKitBought() << " " << "SPENT: $" << getMedKitBought()*getMedKitPrice() << endl;
    cout << "REMAINING BALANCE: $" << getBalance()<<endl;
    cout << endl;
}
