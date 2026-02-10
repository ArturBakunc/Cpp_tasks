#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void isPrime ( int );

int main()
{
    // Part a check if the number is prime
    // int number;

    // cout << "Enter the number: ";
    // cin >> number;

    // isPrime(number);

    for (int i = 2; i < 10000; i++)
    {
        isPrime(i);
    }

    return 0;
}

void isPrime (int a)
{
    int count = 0;

    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            count += i;
        }
    }

    if (count == 0)
    {
        cout << a << " is a prime number. " << endl;
    }
}