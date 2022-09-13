// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#include "Milestones.h"

#include <iostream>

using namespace std;

Milestones :: Milestones(){ //Default constructor
    distance = 0;
    milestone_name = "";
}

Milestones :: Milestones(int distance_1, string milestonesName_1){ //Paramerterized constructor
    distance = distance_1;
    milestone_name = milestonesName_1;
}

int Milestones :: getDistance(){ //Returning distance as an integer
    return distance;
}

void Milestones :: setDistance(int distance_1){ //Setting it equal to the paramerterized constructor
    distance = distance_1;
}

string Milestones :: getMilestoneName(){ //Return milestone_name as a string
    return milestone_name;
}

void Milestones :: setMilestoneName(string milestonesName_1){ //setting it equal to the paramerterized constructor
    milestone_name = milestonesName_1;
}
