// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#ifndef GAME_H
#define GAME_H

#include "Store.h"
#include "Player.h"
#include "Milestones.h"
#include "CurrentSupplies.h"
#include "Date.h"

#include <iostream>
#include <string>

using namespace std;

class Game{
    private: 
       
        Player player[5];
        Milestones milestones_1[15];
        Milestones progress_1;
        CurrentSupplies currentSupplies;
        Store store_1;
        Date date_1;

    public:
        Game();

        void gameStart();
        void menu();  //printsMenu
        int rest(); 
        int continueOn();
        void store(bool if_start); //When the player decides to use the store
        int hunt();
        int hunt2(int animal); //When the player wants to hunt, has puzzles within it
        int misfortunes(); //Random misfortunes using random numbers
        int raiders(); //Includes puzzles
        void gameEnd(); //Function when the player loses or the game ends
        void statusUpdate(int days_passed); //Prints out the status update
        void sortMilestones(string file, Milestones milestones[], int numMilestones); 
        void sortPlayer(string leader, string player_1, string player_2, string player_3, string player_4, Player player, int numPlayer); //Puts players into an array
        void ranking(); //Sorting algorithm, ranks the amount of time each player took and how long they lasted on the trail
        bool puzzles(int puzzleChoice); //Holds the puzzles for the various occurences 
        int ifMilestone(int start, int end);
        int fromMilestone(int distance); 
        bool checkGameEnd();
};

#endif