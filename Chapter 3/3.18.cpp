#include <iostream>
#include <cmath>
using namespace std;

int integerPower(int, int);

int main()
{
    int base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    int finalResult = integerPower(base, exponent);

    cout << base << " raised to the power of " << exponent << " is " << finalResult << endl; 

    return 0;
}

int integerPower(int a, int b)
{
    int result = 1;

    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }

    return result;
}