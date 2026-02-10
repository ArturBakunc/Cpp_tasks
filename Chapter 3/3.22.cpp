#include <iostream>
#include <cmath>
using namespace std;

void asteriskSquare( int );

int main()
{
    int side;

    cout << "Enter the side: ";
    cin >> side;

    asteriskSquare(side);

    return 0;
}

void asteriskSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}