#include "User.h"
#include "Book.h"

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


string lower(string str);

void getRecommendations(string username, User user[], Book book[], int numUser, int numBook){
    bool checkUser, checkBook, checkRating = true;
    int userIndex, bookIndex = 0;
    int ratings[numBook];
    int count;
    int numRating;


    /*for (int i = 0; i < numUser; i++){ //If the username does exist
        if (lower(user[i].getUsername()) == lower(username)){
            checkUser = true;
            break;
        }
    }
    */

    for (int i = 0; i < numUser; i++){ //If the username doesnt exist
        if (lower(user[i].getUsername()) != lower(username)){
            //checkUser = false;
            userIndex = i;
            cout << username << " does not exist." << endl;
            
        }
    break;
    }
    /*for (int i = 1; i < numBook; i++){
        ratings[bookIndex] = user[i].getRatingAt(i);

            if (ratings[bookIndex] != 0){
                count++;
            }
        bookIndex++;
    }
    */

    for (int j = 0; j < numBook; j++){
         if (user[j].getRatingAt(bookIndex) != ratings[100]){
            //checkBook = false;
            bookIndex = j;
            cout << "There are no reccomendations for " << username << " at present." << endl;
            
        }
        break;
    }

    for (int t = 2; t < numRating; t++){
        if(user[t].getRatingAt(bookIndex) == ratings[0]){
            //checkRating = false;
            numRating = t;
            cout << "Here is the list of recommendations " << numBook << endl;
            //break;
        }
    }
    
    
    
    
}

string lower(string str){
    //Declared variables
    string newstr="";

    for (int i=0; i<str.length(); i++)
    {
        str[i] = tolower(str[i]);
        
        newstr = newstr + str[i];
    }

return newstr;
}