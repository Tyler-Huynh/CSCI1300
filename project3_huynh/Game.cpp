// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#include "Store.h"
#include "Player.h"
#include "date.h"
#include "Milestones.h"
#include "CurrentSupplies.h"
#include "Game.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;

Game :: Game(){
    days = 0;
}

Game :: Game(int days_1){
    days = days_1;
}

void Game :: gameStart(){
    cout << "THIS PROGRAM SIMULATES A TRIP OVER THE OREGON TRAIL FROM INDEPENDENCE," << endl;
    cout << "MISSOURI TO OREGON CITY, OREGON IN 1947. YOUR FAMILY OF FIVE WILL COVER" << endl;
    cout << "THE 2040 MILE OREGON TRAIL IN 5-6 MONTHS --- IF YOU MAKE IT ALIVE." << endl;

    /*
    1. Have the player enter a leader name and the name of the other players
    2. Place the players into the player array
    3. Set the starting balance to $1600
    4. Set the starting inverntory in the wagon
    5. Allow the player to choose the start date 03/28/1847 or to choose between 03/01/1847 and 05/01/1847.
    6. Input should be in month and day
    7. Based upon th start date they choose, update the date object
    8. Set days=0
    9. Call the store function to allow them to visit the store before the go on their journey
    */
    
}

void Game :: menu(){ //Prints the menu (taking turns)
    /*
    1. Prints out a status update
        a. date
        b. miles traveled
        c. distance until the next milestone
        d. food
        e. bullets (ammo)
        f. cash
    2. Options: Rest, continue, hunt, quit
    3. Have the player choose an option
    4. Depending on the option, call the function 
    */
} 

void Game :: rest(){ 
    /*
    1. Add 1-3 days
    2.Subtract 3lbs of food, per person, per day
    */
}

void Game :: contnueOn(){
    /*
    1. Update inverntory to subtract 3lbs of food per person
    2. Update days to make 2 weeks pass
    3. Update the distance by adding 70 - 140
    */
}

void Game :: store(){ //When the player enter the store
    //Printing out the prompt

}
