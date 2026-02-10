#include <iostream>
using namespace std;

int power( int, int );

int main()
{
    int base; 
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << base << " raised to " << exponent << " is " << power(base, exponent) << endl;
    
    return 0;
}

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1); // Recursive step
    }
}
