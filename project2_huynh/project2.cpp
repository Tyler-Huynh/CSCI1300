// CSCI 1300 Fall 2020
// Author: Tyler Huynh and Maggie Zhu
// Recitation: 306 - Sourav Chakraborty
// Project 2 - Question # 11

#include "Book.h"
#include "User.h"

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

//Calling the function
void printAllBooks(Book book[], int numBook);
int countGenre(string genre, Book book[], int numBook);
int printAuthorGenre(string genre, char authorFirstLetter, Book book[], int numBook);
int split(string str, char sep, string arr[], int size);
int readBooks(string file, Book book[], int numBookStore, int bookArrSize);
int addUser(string userName, User user[], int numRating, int numUser, int userArrSize);
int readRatings(string file, User user[], int numUserStored, int userArrSize, int maxCol);
int getRating(string username, string title, User user[], Book book[], int numUser, int numBook);
int getUserStats(string username, User user[], int numUser, int numBook);
string lower(string str);

//Main function
int main(){
    //Declared variables
    string choice;
    int choice_1;
    bool menu = false;
    Book book[50];
    User user[100];
    string myfile;
    int readBook = 0;
    int currentUsers = 0;
    string genre;
    int totalBooks = 0;
    int numBook;
    char authorFirstLetter;
    string authorFirstLetterInput;
    int authorGenreMatch;
    string username_1;
    int value;
    int numRating;
    int numUser;
    int userArrSize;
    int maxCol = 50;
    int retrievedRating = 0;
    string title;
    int userStatResult;
    

    //While loop
    while (menu == false){
        
        //Menu
        cout << "Select a numerical option:" << endl;
        cout << "======Main Menu=====" << endl; 
        cout << "1. Read books from file" << endl;
        cout << "2. Print all books" << endl;
        cout << "3. Book-count by genre" << endl;
        cout << "4. Filter books by genre, author" << endl;
        cout << "5. Add user" << endl;
        cout << "6. Read ratings" << endl;
        cout << "7. Get rating" << endl;
        cout << "8. Get user statistics" << endl;
        cout << "9. Quit" << endl;
        
        //User input
        getline(cin, choice);
        choice_1 = stoi(choice);

            //Switch statment
            switch (choice_1){
                case 1:{ //Option 1
                    //Prompt and user input
                    cout << "Enter a book file name: " << endl;
                    getline(cin, myfile);

                    if (myfile != ""){
                        //Calling the readBooks function
                        readBook = readBooks(myfile, book, readBook, 50);

                        //Output
                        if (readBook == -1){
                            cout << "No books saved to the database." << endl;
                        
                        }else if (readBook == -2){
                            cout << "Database is already full. No books were added." << endl;
                        
                        }else if (readBook == 50){
                            cout << "Database is full. Some books may have not been added." << endl;
                        
                        }else{
                            cout << "Total books in the database: " << readBook << endl;
                        }
                    }
                 break;
                }
                case 2:{//Option 2
                    //Calling the printAllBooks function
                    printAllBooks(book, readBook);
                    break;
                }
                case 3:{ //Option 3
                    //Prompt and user input
                    cout << "Enter the genre: " << endl;
                    getline(cin, genre);

                    if (genre != ""){
                        //Calling the countGenre function
                        totalBooks = countGenre(genre, book, readBook);

                        //Output
                        cout << "Total " << genre << " books in the database: " << totalBooks << endl;
                    }
                    break;
                }
                case 4:{ //Option 4
                    //Prompt and user input
                    cout << "Enter the genre: " << endl;
                    getline(cin, genre);

                    //Prompt and user input
                    cout << "Enter first char of author name: " << endl;
                    getline(cin, authorFirstLetterInput);
                    authorFirstLetter = authorFirstLetterInput[0];

                    if (genre != "" && authorFirstLetterInput != ""){
                        //Calling the printAuthorGenre function
                        authorGenreMatch = printAuthorGenre(genre, authorFirstLetter, book, readBook);

                        //Output
                        cout << "Number of titles found for this filter: " << authorGenreMatch << endl;
                    }
                    break;
                }
                case 5:{ //Option 5
                    //Prompt and user input
                    cout << "Enter a user name: " << endl;
                    getline(cin, username_1);

                if (username_1 != ""){
                    //Calling the addUser function
                    currentUsers = addUser(username_1, user, numRating, currentUsers, 100);

                    if (currentUsers == -2){
                        cout << "Database is already full. User cannot be added." << endl;
                    
                    }else if (currentUsers == -1){
                         cout << "User already exists or the username is empty." << endl;
                    }else{
                         cout << "Welcome, " << username_1 << "!" << endl;
                    }
                }
                    break;
                    
                }
                case 6:{ //Option 6
                    //Prompt and input
                    cout << "Enter the ratings file name: " << endl;
                    getline(cin,myfile);

                if (myfile != ""){
                    //Calling the function
                    currentUsers = readRatings(myfile, user, currentUsers, 100, 50);

                    //Conditionals
                    if (currentUsers == -1){ 
                        cout << "No ratings saved to the database." << endl;
                    
                    }else if (currentUsers == -2){
                        cout << "Database is already full. No ratings were added" << endl;
                    
                    }else if(currentUsers == 100){
                        cout << "Database is full. Some ratings may have not been added." << endl;

                    }else{
                        cout << "Total users in the database: " << currentUsers << endl;
                    }
                }
                    break; 
                    
                }
                case 7:{ //Option 7
                    //Prompt and input
                    cout << "Enter a user name: " << endl;
                    getline(cin,username_1);

                    cout << "Enter a book title: " << endl;
                    getline(cin,title);

                    if (username_1 != "" && title != ""){
                        //Calling the function
                        retrievedRating = getRating(username_1, title, user, book, currentUsers, readBook);

                        //Conditionals
                        if (retrievedRating != -3){
                            cout << username_1 << " rated " << title << " with " << retrievedRating << endl;
                        
                        }else{
                            cout << username_1 << " or " << title << " does not exist." <<endl;
                        }
                    }
                    break;
                }
                case 8:{ //Option 8
                    //Prompt and input
                    cout << "Enter a user name: " << endl;
                    getline(cin,username_1);

                    if (username_1 != ""){
                        //Calling function
                        userStatResult = getUserStats(username_1, user, currentUsers, readBook);
                    }
                    break;
                }
                case 9:{ //Option 9
                    //Prompt 
                    cout << "Good bye!" << endl;
                    menu = true;
                    break;
                }
                default:{
                    cout << "Invalid input." << endl;
                    break;   
                }
            }   
    }
}

/*
* This function takes an array of books and print it out accordingly 
* Parameters: book[], numBook
* Return: none
*/

void printAllBooks(Book book[], int numBook){ 
    if (numBook <= 0){ //If the number of books is less than or equal to 0
        cout << "No books are stored" << endl;
    
    }else{
        
        cout << "Here is a list of books" << endl; //Prints out the list of books
            
            for (int i = 0; i < numBook; i++){
                cout << book[i].getTitle() << " by ";
                cout << book[i].getAuthor() << endl;  
        }
    }
}

/*
* This function determines how many books in an array are the same genre
* Parameters: genre, book[], numBook
* Return: count
*/

int countGenre(string genre, Book book[], int numBook){
    int count = 0; //Setting the count variable to 0

    for (int i = 0; i <numBook; i++){
        if (book[i].getGenre() == genre){ //When it is the same genre
            count++; //Increasing the count variable by one
        }
    }
return count;
}

/*
* This function takes the first letter of the author and finds the genre from there
* Parameters: genre, authorFirstLetter, book[], numBook
* Return: count
*/

int printAuthorGenre(string genre, char authorFirstLetter, Book book[], int numBook){
    //Declared variables 
    int count = 0;

    for (int i = 0; i <numBook; i++){
        if (book[i].getGenre() == genre){ //If it is the same genre
            if ((book[i].getAuthor())[0] == authorFirstLetter){ //If the first character is equal to eachother
                count++; //Incrementing the count variable
            }
        }
    }

    //If there are no matches
    if (count == 0){
        cout << "No titles found for this genre-author pair." << endl;
    
    //If there are matches
    }else{
        cout << "Here is a list of books that match this genre-author pair:" << endl;
            
            for (int i = 0; i < numBook; i++){
                if (book[i].getGenre() == genre){ //If it is the same genre  
                    if ((book[i].getAuthor()) [0] == authorFirstLetter){ //If it is the same first character
                        //Output statements
                        cout << book[i].getTitle() << " by ";
                        cout << book[i].getAuthor() << endl;  
                }
            }
        }
    }
return count;
}

/*
* This function opens a file and reads from it and fills the array with the various information
* Parameters: file, book[], numBookStore, bookArrSize
* Return: value
*/

int readBooks(string file, Book book[], int numBookStore, int bookArrSize){
    int value; //Return value

    ifstream myfile; //Opening the file
    myfile.open(file);

    string line;

    if (numBookStore == bookArrSize){ //When the numBookStore is equal to the capacity(50)
        value = -2;
    
    }else if (myfile.fail()){ //If the file fails to open
        value = -1;
    
    }else if (numBookStore < bookArrSize){ //If numBook is less than the array size
        
        while (getline (myfile, line)){
            
            string a[50]; //Setting the array equal to 50

            if (line.length() != 0){ //If the line is not equal to 0
                split (line , ',', a, 50); //Implementing the split function

                Book b(a[1], a[0], a[2]); //Filling the array at various indexes or spots in the line

                book[numBookStore] = b; //Setting the book array equal to the new array of b

                numBookStore++; 
                value = numBookStore; 

                if (numBookStore == bookArrSize){
                    value = numBookStore;
                    break;
                } 
            }
        }
    }else{
        value = -1;
    }
    return value; //Returning value
}

/*
* This function is taking a string and splitting it and is inserting it into an array and outputing the max number if pieces
* Parameters: str, sep, arr, size
* Return: pos
*/

int split(string str, char sep, string arr[], int size){ //split function
    int pos = 0; //Delcared variables
    string substr;
    string word = "";
   
    for (int i=0; i < str.length(); i++){ //Traversing the array to find the seperator
        if (str[i] != sep){
            word = word + str[i]; //Creating the word
        
        }else if (str[i] == sep){
            arr[pos] = word;
            pos++;
            word = ""; //Resetting the word
        }
    }
        if (word == ""){ //If the word is equal to nothing
            return 0;

        }else if (pos >= size){ //If the amount of words that are split is larger than the size
            return -1;

        }else if (word.length() == 0 || size == 0){
            return 0;
        
        }else{ 
            arr[pos] = word;
            pos++;
        }

    return pos;  
}


/*
* This function adds a user to the array of users
* Parameters: username, user[], book[], numUser, numRating, userArrSize
* Return: numUser + 1
*/

int addUser(string userName, User user[], int numRating, int numUser, int userArrSize){

    //Declared variables
    int ratings[numRating];

    //Case 1
    if (numUser >= userArrSize){
        return -2;
    }
    
    //Case 2
    //If a user with the same name already exists
    for (int i = 0; i <numUser; i++){
        if (user[i].getUsername() == userName){ //Name found
            return -1;
        }
    }

    //Case 3
    //If the username is an empty string
    if (userName.length() == 0){
        return -1;
    } 

    //Case 4
    for (int i = 1; i < numRating; i++){
        ratings[i] = 0;
    }

    user[numUser] = User (userName, ratings, numRating); //Adding more users to the array
    return numUser + 1;  
}

/*
* This function opens a file and reads from it and fills the array with the various information
* Parameters: file, book[], numBookStore, bookArrSize
* Return: value
*/

int readRatings(string file, User user[], int numUserStored, int userArrSize, int maxCol){
    //Declared variables
    int value;
    string line;

    //Reading the file
    ifstream myfile;
    myfile.open(file);

    //Case 1
    if (numUserStored >= userArrSize){
        return -2;
    
    //Case 2
    }else if (myfile.fail()){
        return -1;
    
    //Case 3
    }else if (numUserStored < userArrSize){
        while (getline(myfile, line)){
            if (line.length() != 0){ //If the string is not empty
                string arr[51];

                int col = split(line, ',', arr, 51); //Calling the split function

                user[numUserStored].setUsername(arr[0]); 

                int index=0;
                int ratings;
            
                for (int i =1; i < col; i++){
                    ratings = stoi (arr[i]);
                    user[numUserStored].setRatingAt(index, ratings);
                    index++;
                }

                numUserStored++; //Incrementing the user index

                value = numUserStored; //The return value
                
                //If the numUser stored is at max capacity
                if (numUserStored == userArrSize){
                    value = numUserStored;
                    break;
                }
            }   
        }
    }
return value;
}

/*
* This function gets the user rating of a book
* Parameters: username, title, user[], book[], numUser, numBook
* Return: the rating of the book
*/

int getRating(string username, string title, User user[], Book book[], int numUser, int numBook){
    //Declared variables
    int value = -3;
    int userIndex, bookIndex;

    bool checkUser = false;
    bool checkBook = false;

    //Finding if the username is a match
    for (int i = 0; i < numUser; i++){
        if (lower(user[i].getUsername()) == lower(username)){ //If the name is found
            userIndex = i;
            checkUser = true;
        }
    }

    //Finding if the book is a match
    for (int j = 0; j < numBook; j++){
        if (lower(book[j].getTitle()) == lower(title)){ //If the title is found
            bookIndex = j;
            checkBook = true;
        }
    }

    //Getting the rating if there is a match for book and user
    if (checkUser == true && checkBook == true){
        value = user[userIndex].getRatingAt(bookIndex);

    //No match
    }else{
        value = -3;
    }
return value;
}

/*
* This function makes a whole string lowercase
* Parameters: str
* Return: newstr
*/

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


//This function determines if the username matches a user in the array and calculated the average rating
//Parameter: username (string), users (array of objects), number of users stored (int), number of books stored (int)
//Return: an integer based upon whether the user is found and if they have rated books

int getUserStats(string username, User user[], int numUser, int numBook){
    double rating;
    double sum = 0;
    double averageRating;
    int count = 0;
    bool userFound = false;
    int userIndex = -1;

    //Case 1 if the user is found
    for (int i = 0; i < numUser; i++){
        if (user[i].getUsername() == username){
            userFound = true;
            userIndex = i;
        }
    }

    //Finding the average rating
    for (int j = 0; j < numBook; j++){
                rating = user[userIndex].getRatingAt(j); //Getting the rating
                
                    if (rating != 0){
                        count++; //Incrementing count
                    }
                
                    sum = sum + rating; //Adding the rating to the sum
    }

    //Case 2
    if (userFound == true){

            if (count == 0){ //If the index is equal to 0
                cout << username << " has not rated any books." << endl; //Output statement
                return 0;
            
            }else if (count != 0){ //If it does not equal 0
                
                averageRating = sum/count;
                cout << username << " rated" << " " << count << " books" << endl; //Output statements
                cout << username << "'s average rating was " << fixed << setprecision(2) << averageRating << endl;
                return 1;
            
            }
            }else if (userFound == false){ //If the user does not exist
                cout << username << " does not exist." << endl;
                return -3;
        }
    return 0;
}
