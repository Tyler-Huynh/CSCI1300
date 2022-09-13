#include "Book.h"
#include "Book.cpp"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//Class for book
class Book{
    private: //Declaring the members of the class
    string title;
    string author;
    string genre;

    public:
    Book();
    Book(string title, string author, string genre);
    string getTitle(); //Returning title as the string
    void setTitle(string title); //Setting the title to the user input 

    string getAuthor(); //Returning author as the string
    void setAuthor(string author); //Setting the title to the user input

    string getGenre(); //Returning the genre as the string
    void setGenre(string genre); //Setting the genre to the user input
    
};

//Book.cpp
Book :: Book(){ //If the title, author, and genre are equal to an empty string
    title = "";
    author = "";
    genre = "";
}

Book :: Book(string title_1, string author_1, string genre_1){ //Parameterized constrcutors
    title = title_1;
    author = author_1;
    genre = genre_1;
}

string Book :: getTitle(){ //Returning title as the string
    return title;
}

void Book :: setTitle(string title_1){ //Setting the title to the user input 
   title = title_1; //Setting the title equal to the parameterized constructor 
}

string Book :: getAuthor(){ //Returning author as the string
    return author;
}

void Book :: setAuthor(string author_1){ //Setting the title to the user input
    author = author_1; //Setting the author equal to the parameterized constructor 
}

string Book :: getGenre(){ //Returning the genre as the string
    return genre;
}

void Book :: setGenre(string genre_1){ //Setting the genre to the user input
    genre = genre_1; //Setting the genre equal to the parameterized constructor 
}

//Called functions
int split(string str, char sep, string arr[], int size);
int readBooks(string file, Book book[], int numBookStore, int bookArrSize);
void printAllBooks(Book book[], int numBook);

int main(){
    bool quit = false;

    //Declared variables
        int choice;
        Book book[50];
        int readBook;
        string myfile;

    while (quit==false){

    //Output for user
        cout << "======Main Menu=====" << endl;
        cout << "1. Read books" << endl;
        cout << "2. Print all books" << endl;
        cout << "3. Quit" << endl;
        
    //User input
        cin >> choice;
        
            switch (choice){
                case 1: 
                    cout << "Enter a book file name:" << endl;
                    cin >> myfile;
                    
                    readBook = readBooks(myfile, book, readBook, 50);

                    if (readBook == -1){
                        cout << "No books saved to the database." << endl;
                    
                    }else if (readBook == -2){
                        cout << "Database is already full. No books were added." << endl;
                    
                    }else if (readBook == 50){
                        cout << "Database is full. Some books may have not been added." << endl;
                    
                    }else{
                        cout << "Total books in the database: " << readBook << endl;
                    }
                    break;
                
                case 2:
                    printAllBooks(book, readBook);
                    break;

                case 3:
                    quit = true;
                    cout << "Good bye!" << endl;
                    break;
                
                default:
                    cout << "Invalid input." << endl;
                    break;
            }                
    }
return 0;
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