#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int getLastIndex(char letter, string word)
{
    int count = -2;
    if (word == "")
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == letter)
            {
                count = i;
            }
        }
    }
    return count;
}