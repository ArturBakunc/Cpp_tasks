//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

int main()
{
    int sideLength;
    
    cout << "Enter side length: ";
    cin >> sideLength;

    for (int i = 0; i < sideLength; i++) // upper part
    {
        for (int j = 1; j < sideLength - i; j++) // spaces
        {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i + 1; k++) // stars
        {
            cout << "*";
        }
        
        cout << endl;
    }

    for (int i = sideLength - 2; i >= 0; i--) // lower part
    {
        for (int j = sideLength - 1; j > i; j--) // spaces
        {
            cout << " ";
        }
        
        for (int k = 0; k < 2 * i + 1; k++) // stars
        {
            cout << "*";
        } 
        
        cout << endl;
    }

    return 0;
}