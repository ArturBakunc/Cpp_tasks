#include <iostream>
using namespace std;

int gcd( int, int );

int main()
{
    int number1; 
    int number2;

    cout << "Enter two integers to calculate their GCD: ";
    cin >> number1 >> number2;

    cout << "GCD is: " << gcd(number1, number2) << endl;

    return 0;
}

int gcd(int number1, int number2)
{
    while (number2 != 0)
    {
        int remainder = number1 % number2;
        number1 = number2;
        number2 = remainder;
    }

    return number1;
}
