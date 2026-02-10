#include <iostream>
using namespace std;

int main()
{
    const int MAX_ROWS = 10;

    // Case a
    cout << "Case a" << endl; 
    for (int i = 1; i <= MAX_ROWS; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    // Case b
    cout << "Case b" << endl;
    for (int i = MAX_ROWS; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    cout << endl;

    // Case c
    cout << "Case c" << endl;
    for (int i = 1; i <= MAX_ROWS; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= MAX_ROWS + 1 - i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    // Case d
    cout << "Case d" << endl;
    for (int i = 1; i <= MAX_ROWS; i++)
    {
        for (int j = MAX_ROWS; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    return 0;
}