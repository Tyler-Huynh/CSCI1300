#ifndef priceh
#define priceh

#include <iostream>

using namespace std;

class Price{ //Price class
    private: //Declaring the members of the class
        double yokePrice;
        double foodPrice;
        double ammoPrice;
        double wagonPrice;
        double medKitPrice;
        double oxenPrice;

    public:
        Price(); //Default constructor
        Price(double yokePrice_1, double foodPrice_1, double ammoPrice_1, double wagonPrice_1, double medKitPrice_1, double oxenPrice_1); //Paramerterized constructor
            double getYokePrice(); //Returning the yokePrice as double
            void setYokePrice(double yokePrice_1); //Setting the yokePrice to the user input

            double getFoodPrice(); //Return the foodPrice as double
            void setFoodPrice(double foodPrice_1); //Setting the foodPrice to the user input

            double getAmmoPrice(); //Returning the ammoPrice as double
            void setAmmoPrice(double ammoPrice_1); //Setting the ammoPrice to the user input

            double getWagonPrice(); //Returing the wagonPrice as double
            void setWagonPrice(double wagonPrice_1); //Setting the wagonPrice to the user input

            double getMedKitPrice(); //Returing the medKitPrice as double
            void setMedKitPrice(double medKitPrice_1); //Setting the medKitPrice to the user input

            double getOxenPrice(); //Returing the oxenPrice as double 
            void setOxenPrice(double oxenPrice_1); //Setting the oxenPrice to the user input  

            double priceIncreas(Price price[]);

};
#endif