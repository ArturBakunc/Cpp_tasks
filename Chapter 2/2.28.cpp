#include <iostream>
using namespace std;

int main()
{
    int sideOfSquare;

    cout << "Enter side of square: ";
    cin >> sideOfSquare;

    for (int i = 0; i < sideOfSquare; i++)
    {
        if (i == 0 || i == sideOfSquare - 1)
        {
            for (int j = 0; j < sideOfSquare; j++)
            {
                cout << "*";
            }
            
            cout << endl;
        }
        
        else
        {
            cout << "*";
            
            for (int j = 0; j < sideOfSquare - 2; j++)
            {
                cout << " ";
            }
            
            cout << "*";
            cout << endl;
        }
    }

    return 0;
}