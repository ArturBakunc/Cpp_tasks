#include <iostream>
#include <cmath>
using namespace std;

bool isMultiple(int, int);

int main()
{
    const int NUMBER_TO_END = -1;

    while (true)
    {
        int number1;
        int number2;

        cout << "Enter the first number (" << NUMBER_TO_END << " to end): ";
        cin >> number1;

        if (number1 == NUMBER_TO_END)
        {
            break;
        }

        cout << "Enter the second number (" << NUMBER_TO_END << " to end): ";
        cin >> number2;

        if (number2 == NUMBER_TO_END)
        {
            break;
        }

        bool isMultipleResult = isMultiple(number1, number2);

        if (isMultipleResult)
        {
            cout << number2 << " is a multiple of " << number1;
        }
        else
        {
            cout << number2 << " is not a multiple of " << number1;
        }

        cout << endl;
    }

    return 0;
}

bool isMultiple(int number, int multiple)
{
    return (multiple % number == 0);
}