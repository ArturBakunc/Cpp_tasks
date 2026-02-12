#include <iostream>
using namespace std;

int gcd ( int, int );

int main()
{
    int number1;
    int number2;
    
    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    cout << "GCD of " << number1 << " and " << number2 << " is: " << gcd(number1, number2) << endl;

    return 0;
}

int gcd(int number1, int number2)
{
    if (number2 == 0)
    {
        return number1;
    }
    else
    {
        return gcd(number2, number1 % number2); // euclidean algorithm
    }
}