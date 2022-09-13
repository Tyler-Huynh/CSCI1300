/*
Program to read file data and add as student details
Split each student data from file
Display details
*/
#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

//Create a student struct
struct Student {
   string student_name;
   double SAT;
   double GPA;
   int interest;
   double highschoolQuality;
   double sem1, sem2, sem3, sem4;
   double per;
   string selectionCriteria;
};
//Function prototypes
void calculatePer(Student& student);
void selection(Student& student);
int main()
{
   //Variable declaration part
   string filename,line;
   //Get file name
   cout << "Enter the file name:\n";
   cin >> filename;
   //File path
   ifstream in(filename);
   //Open error check
   if (!in) {
       cout << "Could not open file.\n";
       exit(0);
   }
   //Header read
   getline(in, line);
   //Loop until end of the file
   while (getline(in,line)) {
       stringstream ss(line);
       string word;
       int i = 0;
       Student student;
       //Split each wod and create student
       while (getline(ss, word, ',')) {
           if (i == 0) {
               student.student_name = word;
               i++;
           }
           else if (i == 1) {
               student.SAT = stod(word);
               i++;
           }
           else if (i == 2) {
               student.GPA = stod(word);
               i++;
           }
           else if (i == 3) {
               student.interest= stod(word);
               i++;
           }
           else if (i == 4) {
               student.highschoolQuality = stod(word);
               i++;
           }
           else if (i == 5) {
               student.sem1 = stod(word);
               i++;
           }
           else if (i == 6) {
               student.sem2 = stod(word);
               i++;
           }
           else if (i == 7) {
               student.sem3 = stod(word);
               i++;
           }
           else if (i == 8) {
               student.sem4 = stod(word);
               i++;
               //Calculate each student score
               calculatePer(student);
               //Create selection criteria
               selection(student);
               //Display details
               if (student.selectionCriteria != "") {
                   cout << student.student_name << "," << student.per << "," << student.selectionCriteria << endl;
               }
               else {
                   cout << student.student_name << "," << student.per << endl;
               }
           }
       }
   }
   //Close file
   in.close();
   return 0;
}

/*
Functio take a student
Find percentage scored
*/
void calculatePer(Student& student) {
   double gpa = student.GPA * 2;
   double sat = student.SAT / 160;
   double marks = ((student.sem1 + student.sem2 + student.sem3 + student.sem4) / 4)*.1;
   double curriculam = (student.highschoolQuality + marks) / 2;
   double per = gpa * .4 + sat * .3 + student.interest*.1 + curriculam * .2;
   student.per = per;
}
/*
Functio take a student
Find selection criteria details
*/
void selection(Student& student) {
   //Eligible with score
   if (student.per >= 6) {
       student.selectionCriteria = "score";
   }
   else if (student.per >= 5) {
       //Eligible with first algorithm
       if (((student.GPA * 2) > ((student.SAT / 160) + 2)) || student.interest == 0) {
           student.selectionCriteria = "outlier";
       }
       //Eligible with second algorithm
       else if (student.sem1 > student.sem2 > student.sem3 > student.sem4) {
           student.selectionCriteria = "grade improvement";
       }
   }
   //Not eligible
   else {
       student.selectionCriteria = "";
   }
}