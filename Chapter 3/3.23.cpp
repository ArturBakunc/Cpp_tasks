#include <iostream>
#include <cmath>
using namespace std;

void asteriskSquare( int, char );

int main()
{
    int sideOfSquare;
    char characterToPrint;

    cout << "Enter the side: ";
    cin >> sideOfSquare;

    cout << "Enter a character to fill the square: ";
    cin >> characterToPrint;

    asteriskSquare(sideOfSquare, characterToPrint);

    return 0;
}

void asteriskSquare(int sideOfSquare, char characterToPrint)
{
    for (int i = 0; i < sideOfSquare; i++)
    {
        for (int j = 0; j < sideOfSquare; j++)
        {
            cout << characterToPrint;
        }
        cout << endl;
    }
}
