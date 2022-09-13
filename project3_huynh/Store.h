// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#ifndef storeh
#define storeh

#include <iostream>

using namespace std;

class Store{
    private: 
        //Different catgories of items bought
        int yokeBought;
        int ammoBought;
        int medKitBought;
        int wagonPartsBought;
        int foodBought;
        
        //Prices for the different categories 
        double yokePrice;
        double foodPrice;
        double ammoPrice;
        double wagonPartsPrice;
        double medKitPrice;
        
        //Money
        double balance;
        double spent;

    public:
        Store(); //Default constructor
        Store(int yokeBought_1, int ammoBought_1, int medKitBought_1, int wagonPartsBought_1, int foodBought_1, double balance_1, double spent_1, double yokePrice_1, double foodPrice_1, double ammoPrice_1, double wagonPartsPrice_1, double medKitPrice_1); //Parameterzied constructor

        int getYokeBought(); //Returns yokeBought as int
        void setYokeBought(int yokeBought_1); //Setting the yokeBought to the user input

        int getAmmoBought(); //Returns the ammoBought as int
        void setAmmoBought(int ammoBought_1); //Setting the yokeBought to the user input

        int getMedKitBought(); //Returns the medKitBought as int
        void setMedKitBought(int medKitBought_1); //Setting the medKitBought to the user input

        int getWagonPartsBought(); //Returns the wagonBought as int
        void setWagonPartsBought(int wagonPartsBought_1); //Setting the wagonBought to the user input

        int getFoodBought(); //Returns the foodBought as int
        void setFoodBought(int foodBought_1); //Setting the foodBought to the user input

        double getBalance(); //Returns the balance as double
        void setBalance(double balance_1); //Calculates the remaining balance

        double getSpent(); //Returns how much is spent
        void setSpent(int foodBought_1, int yokeBought_1, int ammoBought_1, int wagonPartsBought_1, int medKitBought_1); //Setting the itemsBought to the user input

        double getYokePrice(); //Returning the yokePrice as double
        void setYokePrice(double yokePrice_1); //Setting the yokePrice to the user input

        double getFoodPrice(); //Return the foodPrice as double
        void setFoodPrice(double foodPrice_1); //Setting the foodPrice to the user input

        double getAmmoPrice(); //Returning the ammoPrice as double
        void setAmmoPrice(double ammoPrice_1); //Setting the ammoPrice to the user input

        double getWagonPartsPrice(); //Returing the wagonPrice as double
        void setWagonPartsPrice(double wagonPartsPrice_1); //Setting the wagonPrice to the user input

        double getMedKitPrice(); //Returing the medKitPrice as double
        void setMedKitPrice(double medKitPrice_1); //Setting the medKitPrice to the user input

        void priceIncrease (int distance); //Determines the price increase

        void printBill();
};
#endif
