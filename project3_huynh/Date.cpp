// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#include "Date.h"

#include <iostream>

using namespace std;

Date :: Date(){ //Default contructor
    day = 0;
    month = 0;
    daysTraveled = 0;
}

Date :: Date(int day1, int month1, int days_traveled1){ //Parameterized constructor 
    day = day1;
    month = month1;
    daysTraveled=days_traveled1;
}

int Date :: getDaysInMonth(int index){ //Returns the days in a month
    return daysInMonth[index];
}

void Date :: setDaysInMonth(int daysInMonth_1[], int index){ //Sets it equal to the parameterized constructor
    daysInMonth[index] = daysInMonth_1[index];
}

int Date :: getDay(){ //Returns day as an integer
    return day;
}

void Date :: setDay(int day_1){ //Sets it equal to the parameterized constructor 
    day = day_1;
}

int Date :: getMonth(){ //Returns month as an integer
    return month;
}

void Date :: setMonth(int month_1){ //Sets it equal to the parameterized construtor 
    month = month_1;
}

void Date :: printDate(int daysPassed){ //Prints the date
    day = day + daysPassed;

    int index = month - 1;

    //int daysInMonth = daysInMonth[index];

    cout << day << "/" << month << "/" << "1847" << endl;
}

int Date :: getDaysTraveled(){ //returns the days traveled
    return daysTraveled;
}

void Date :: setDaysTraveled(int days_traveled1){ //sets days traveled
    daysTraveled = days_traveled1;
}

