#include <iostream>
using namespace std;

unsigned long long factorial( int, int );

int main()
{
    int fibonacciPosition;

    cout << "Enter a non-negative integer: ";
    cin >> fibonacciPosition;

    cout << "Factorial of " << fibonacciPosition << ":\n" << endl;
    
    factorial(fibonacciPosition);
    
    return 0;
}

unsigned long long factorial(int position, int level = 0)
{
    for (int i = 0; i < level; i++)
    {
        cout << "  ";
    }

    cout << "factorial(" << position << ") called" << endl;

    if (position <= 1)
    {
        for (int i = 0; i < level; i++)
        {
            cout << "  ";
        }
        cout << "return 1" << endl;
        return 1;
    }

    int result = position * factorial(position - 1, level + 1);

    for (int i = 0; i < level; i++)
    {
        cout << "  ";
    }

    cout << "return " << result << endl;

    return result;
}

