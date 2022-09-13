// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 3

#ifndef milestonesh
#define milestonesh

#include <iostream>
#include <string>

using namespace std;

class Milestones{
        private:
            int distance;
            string milestone_name;

        public:
            Milestones();

            Milestones(int distance_1, string milestones_name1); //Paramertierized constructors

            int getDistance();
            void setDistance(int distance_1);

            string getMilestoneName();
            void setMilestoneName(string milestone_name1);

            void sort(string filename, Milestones milestones[], int num_of_milestones); //Stores milestones into an array

};
#endif