#include <iostream>
using namespace std;

unsigned long long factorial(int n, int level = 0)
{
    // indentation
    for (int i = 0; i < level; i++)
    {
        cout << "  ";
    }

    cout << "factorial(" << n << ") called" << endl;

    if (n <= 1)
    {
        for (int i = 0; i < level; i++)
        {
            cout << "  ";
        }
        cout << "return 1" << endl;
        return 1;
    }

    int result = n * factorial(n - 1, level + 1);

    for (int i = 0; i < level; i++)
    {
        cout << "  ";
    }

    cout << "return " << result << endl;

    return result;
}

int main()
{
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    cout << "Factorial of " << n << ":\n" << endl;
    
    factorial(n);
    
    return 0;
}
