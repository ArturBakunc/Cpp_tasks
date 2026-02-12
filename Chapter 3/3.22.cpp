#include <iostream>
using namespace std;

void asteriskSquare( int );

int main()
{
    int sideOfSquare;

    cout << "Enter the side: ";
    cin >> sideOfSquare;

    asteriskSquare(sideOfSquare);

    return 0;
}

void asteriskSquare(int sideOfSquare)
{
    for (int i = 0; i < sideOfSquare; i++)
    {
        for (int j = 0; j < sideOfSquare; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}