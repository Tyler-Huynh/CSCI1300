// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Homework 3 - Question # 6

#include <iostream>

using namespace std;

// User input for ad personalization and delcaring "option" as variable
int main(){
    int option;
    cout << "How personalized should the ad be? (1-3) " << endl;
    cin >> option;
// If statement for Invalid option 
    if (option <1 || option >3)
        cout << "Invalid option. " << endl;

    string dog;
    
    switch (option)
    {
// If and else sequence for option 1 from user input and declaring variable of "dog"
    case 1:
        cout << "Do you own a dog? " << endl;
        cin >> dog;
        if (dog=="yes" || dog=="Yes"){
            cout << "Meat's the need of dogs like yours! " << endl;
        
    }else{
        cout << "Dirty mouth? Clean it up with new Orbit Raspberry Mint. " << endl;
    }
    break;

    int friends;
// If and else sequence for option 2 from user input and declaring variable of "friends"
    case 2:
        cout << "How many Facebook friends do you have? " << endl;
        cin >> friends;
        if (friends >=500){
            cout << "Don't like cleaning up after your dog? Call Doody Free to sign up for backyard cleanup or dog walking service. " << endl;
    }else{
        if (friends <=500){
            cout << "Who doesn't need another cat? Adopt a shelter pet right meow. " << endl;
        }
    }
    break;

    int zipcode;
    int age;
// If and else sequence for option 3 from user input and delcaring variable of "zipcode" and "age"
    case 3:
        cout << "What is your zip code? " << endl;
        cin >> zipcode;

        cout << "What is your age? " << endl;
        cin >> age;

        if (zipcode >=80301 && zipcode <=80310 && age >=25){
            cout << "You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike. " << endl;

    }else{
        if (zipcode >=80301 && zipcode <=80310 && age <=25){
            cout << "Looking for dinner that won't break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen. " << endl;

    }else{
        cout << "Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO. " << endl;
    }
    }
    break;
    
    }
return 0;
}