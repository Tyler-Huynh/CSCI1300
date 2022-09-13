// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#ifndef dateh
#define dateh

#include <iostream>

using namespace std;

class Date{
    private:
        int day; //Number of days it takes for them 
        int month;
        int daysTraveled;
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30 ,31}; //Array of months and their days, value is days, index is month 

    public: 
        Date();
        Date( int day_1, int month_1, int daysTraveled_1);

        int getDay(); //Returns the day as an integer
        void setDay(int day_1); //Sets a new day 

        int getMonth(); //Returns the month as an integer
        void setMonth(int month_1); //Sets a new month

        int getDaysInMonth(int index); //Returns the days in a month to an integer
        void setDaysInMonth(int daysInMonth[12], int index); //Set new day

        int getDaysTraveled();
        void setDaysTraveled(int daysTraveled_1);

        void printDate(int daysPassed); //Prints the day

        string calcDate(int daysPassed); //Calculates the date
};
#endif