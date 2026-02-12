#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;

    // (a) Integer quotient
    cout << "Enter number1 and number2: ";
    cin >> number1 >> number2;

    cout << "Quotient: " << number1 / number2 << endl;

    // (b) Integer remainder
    cout << "Remainder: " << number1 % number2 << endl;
    
    // (c) Print digits
    int number3;

    cout << "Enter number (1 - 32767): ";
    cin >> number3;
    
    printDigits(number3);

    return 0;
}

void printDigits(int number)
{
    int divisor = 1;

    // Find highest power of 10
    while (number / divisor >= 10)
    {
        divisor *= 10;
    }

    while (divisor > 0)
    {
        int digit = number / divisor;   // (a) quotient
        cout << digit;

        number = number % divisor;      // (b) remainder
        divisor /= 10;

        if (divisor > 0)
        {
            cout << "  ";
        }
    }
}