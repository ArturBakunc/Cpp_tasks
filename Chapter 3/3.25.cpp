#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    // (a) Integer quotient
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Quotient: " << a / b << endl;

    // (b) Integer remainder
    cout << "Remainder: " << a % b << endl;
    
    // (c) Print digits
    int n;
    cout << "Enter number (1 - 32767): ";
    cin >> n;
    printDigits(n);

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