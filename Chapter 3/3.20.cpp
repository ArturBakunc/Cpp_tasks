#include <iostream>
#include <cmath>
using namespace std;

void multiple(int, int);

int main()
{
    const int NUMBER_TO_END = -1;

    while (true)
    {
        int num1;
        int num2;

        cout << "Enter the first number ( " << NUMBER_TO_END << " to end): ";
        cin >> num1;

        if (num1 == NUMBER_TO_END)
        {
            break;
        }

        cout << "Enter the second number ( " << NUMBER_TO_END << " to end): ";
        cin >> num2;

        if (num2 == NUMBER_TO_END)
        {
            break;
        }

        multiple(num1, num2);

        cout << endl;
    }

    return 0;
}

void multiple(int a, int b)
{
    if (b % a == 0)
    {
        cout << b << " is a multiple of " << a;
    }

    else
    {
        cout << b << " is not a multiple of " << a;
    }
}