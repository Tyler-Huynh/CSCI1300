#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    char letter;
    cout << "Enter Letter: " << endl;
    cin >> letter;

    string A;
    string B;
    string C;
    string D;

    switch (letter)
    {
        case 'A':
            cout << "Alpha" << endl;
    break;
        case 'B':
            cout << "Bravo" << endl;
    break;
        case 'C':
            cout << "Charlie" << endl;
    break;
        case 'D':
            cout << "Delta" << endl;
    break;
        default:
            cout << "Other" << endl;
    break;
    }
return 0;
}