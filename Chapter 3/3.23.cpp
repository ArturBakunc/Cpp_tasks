#include <iostream>
#include <cmath>
using namespace std;

void asteriskSquare( int, char );

int main()
{
    int side;
    char character;

    cout << "Enter the side: ";
    cin >> side;

    cout << "Enter a character to fill the square: ";
    cin >> character;

    asteriskSquare(side, character);

    return 0;
}

void asteriskSquare(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
