// CSCI 1300 Fall 2020
// Author: Tyler Huynh
// Recitation: 306 - Sourav Chakraborty
// Project #1 - Question # 6

#include <iostream>
#include <string> 

using namespace std;

/*
* This function takes the input from the user and determines the similarityScore between the two seqeunces
* Parameters: sequence1 and 2 and user input
* Return: similarityScore
*/

double calcSimScore (string sequence1, string sequence2){
    float hammingDistance = 0;
    float similarityScore = 0;
    int sequence1_length = sequence1.length();
    int sequence2_length = sequence2.length();

    if (sequence1_length ==0 && sequence2_length ==0){ //If there user inputs two empty strings
        return 0;
    
    }else if (sequence1_length == sequence2_length){ //If user inputs two strings of the same length
        
        for (int i=0; i<=sequence1.length(); i++){
            if (sequence1[i] == sequence2[i]){
                hammingDistance = hammingDistance; //Match
            
            } else if (sequence1[i] != sequence2[i]){ //No match
                hammingDistance++;
            }
        }     
        similarityScore = (sequence1_length - hammingDistance)/sequence1_length; //If the two sequences the user inputs are different lengths    
    
    }else if (sequence1_length != sequence2_length){ 
        similarityScore = 0; //No similarity score is present
    }
return similarityScore; //Return similarityScore
}

/*
* This function takes the input from the user and finds the bestSimScore from a genome in a sequence
* Parameters: genome and sequence and user input
* Return: findBestSimScore, max(variable)
*/

float findBestSimScore (string genome, string sequence){ //Start of function with delcared variables in the beginning
    double gen = genome.length(); 
    double seq = sequence.length();

    int count, max = 0; //Delcared "count" a variable to find the number of matching sequences
                        //Delcared "max=0" a variable to hold the max number of a matching sequence
    
    double similarityScore;
    double findBestSimScore = 0;


    if (gen == 0 || seq == 0){ //If the lengths of both genome and sequence are zero
        return 0;
   
    }else if (gen < seq){ //If the sequence is longer than the genome
        return 0;
    }

    if (gen >= seq){ //Calculation of the best similarity score
        for (int i=0; i<=gen - seq; i++){ // 
            count = 0; //Set count variable to zero
            similarityScore = calcSimScore(genome.substr(i,seq), sequence);

            for (int j=0; j< seq; j++){ //Use of nested for loop in order to compare genome strings
                if (genome[i+j] == sequence[j]){
                    count++;
                }
            }
    if (count > max){ //Check if the highest count is greater than the max
        max = count; //The highest count value to the max variable
        }
    }     
} 
return max/double(seq); //Return double of the highest similarity score by dividing the max by the length of the sequence
return findBestSimScore; //Return of findBestSimScore
}

/*
* This function takes the input from the user and determines the bestSimScore between genome1, 2, and 3 and a sequence
* Parameters: genome1, 2, and 3 and user input
* Return: none
*/

void findMatchedGenome(string genome1, string genome2, string genome3, string seq){
    
    float genome1score = findBestSimScore(genome1,seq); //Delcared variables
    float genome2score = findBestSimScore(genome2,seq);
    float genome3score = findBestSimScore(genome3,seq);

    if (genome1 == "" || genome2 == "" || genome3 == "" || seq == ""){ //If user inputs an empty string
         cout << "Genomes or sequence is empty." << endl;
    }else if (genome1.length() != genome2.length() || genome1.length() != genome3.length()){ //Sequence if the user enters unequal genome lengths
        cout << "Lengths of genomes are different." << endl;
   
    }else if (genome2.length() != genome3.length() || genome2.length() != genome3.length()){ 
        cout << "lengths of genomes are different." << endl;
    
    }else if (genome3.length() != genome2.length() || genome3.length() != genome1.length()){
        cout << "Lengths of genomes are different." << endl;

    genome1score = findBestSimScore(genome1,seq);
    genome2score = findBestSimScore(genome2,seq);
    genome3score = findBestSimScore(genome3,seq);

    }else if (genome1score > genome2score && genome1score > genome3score){ //Genome 1 is best
         cout << "Genome 1 is the best match." <<endl;
    
    }else if (genome2score > genome1score && genome2score > genome3score){ //Genome 2 is best
        cout << "Genome 2 is the best match." << endl;
    
    }else if (genome3score > genome1score && genome3score > genome2score){ //Genome 3 is best
        cout << "Genome 3 is the best match." << endl;
    
    }else if (genome1score == genome2score && genome1score > genome3score){ //Genome 1 and 2 is best
        cout << "Genome 1 is the best match." <<endl;
        cout << "Genome 2 is the best match." <<endl;
    
    }else if (genome1score == genome3score && genome1score > genome2score){ //Genome 1 and 3 is best
        cout << "Genome 1 is the best match." <<endl;
        cout << "Genome 3 is the best match." <<endl;
    
    }else if (genome2score == genome3score && genome2score > genome1score){ //Genome 2 and 3 is best
        cout << "Genome 2 is the best match." <<endl;
        cout << "Genome 3 is the best match." <<endl;
    
    }else if (genome1score == genome2score || genome2score == genome3score){ //All genomes are best
        cout << "Genome 1 is the best match." <<endl;
        cout << "Genome 2 is the best match." <<endl;
        cout << "Genome 3 is the best match." << endl;
    }
}

int main(){ //Main function with declared variables
    string genome1;
    string genome2;
    string genome3;
    string seq;

    cin >> genome1; //User input for genome 1-3
    cin >> genome2;
    cin >> genome3;

    findMatchedGenome(genome1, genome2, genome3, seq);
}