// CSCI 1300 Fall 2020
// Author: Tyler Huynh 
// Recitation: 306 - Sourav Chakraborty
// HW 8 - Question # 2

#include <iostream>
#include <vector>

using namespace std;

vector <int> shuffle(vector <int> vec1, vector <int> vec2){
    
    //Declared variables
    vector <int> nVec;
    int newSize = nVec.size();
    int vec1Size = vec1.size();
    int vec2Size = vec2.size();
    int sizeDiff = 0;

    if (vec1Size == 0 && vec2Size == 0){
        return nVec;
    
    }else if (vec1Size > vec2Size){
        sizeDiff = vec1Size - vec2Size; //Finding the difference in size

        for (int i = 0; i < vec2Size; i++){ //Alternating between them
            nVec.push_back(vec1.at(i));
            nVec.push_back(vec2.at(i));
        }

        for (int j = nVec.size() / 2; j < vec1.size(); j++){
            nVec.push_back(vec1.at(j));
        }
    
    }else if (vec2Size > vec1Size){
        sizeDiff = vec2Size - vec1Size;

         for (int i = 0; i < vec1Size; i++){ //Alternating between them
            nVec.push_back(vec2.at(i));
            nVec.push_back(vec1.at(i));
        } for (int j = nVec.size() / 2; j < vec2.size(); j++){
            nVec.push_back(vec2.at(j));
        }
    }else if(vec2Size == vec1Size){
        for (int i = 0; i < vec2Size; i++){ //Alternating between them
            nVec.push_back(vec1.at(i));
            nVec.push_back(vec2.at(i));
        }
    }
return nVec;
}

    int main(){

        //Test case 1 (if both vectors are empty)
        vector <int> vec1{};
        vector <int> vec2{};
        vector <int> vec3 = shuffle (vec1, vec2); //Calling the shuffle function

        for (int i = 0; i < vec3.size(); i++){
            cout << vec3[i] << " ";
        }
        cout << endl;

        //Test case 2 (both vectors are of the same size)
        vector <int> vec4 {1, 2, 3, 4, 5};
        vector <int> vec5 {6, 7, 8, 9, 10};
        vector <int> vec6 = shuffle (vec4, vec5);

        for (int i = 0; i < vec6.size(); i++){
            cout << vec6[i] << " ";
        }
        cout << endl;

        //Test case 3 (if both vectors are different sizes)
        vector <int> vec7 {1, 2, 3};
        vector <int> vec8 {4, 5, 6, 7};
        vector <int> vec9 = shuffle (vec7, vec8);

        for (int i = 0; i < vec9.size(); i++){
            cout << vec9[i] << " ";
        }
        cout << endl;

        //Test case 3 (if both vectors are different sizes)
        vector <int> vec10 {1, 2, 3, 4, 5, 6, 7, 8,};
        vector <int> vec11 {1, 2, 3, 4};
        vector <int> vec12 = shuffle (vec10, vec11);

        for (int i = 0; i < vec12.size(); i++){
            cout << vec12[i] << " ";
        }
        cout << endl;
    }