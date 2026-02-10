#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void reversedNumber( int );

int main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;

    reversedNumber(number);

    return 0;
}

void reversedNumber( int a )
{
    int first = a / 1000;
    int second = a / 100 % 10;
    int third = a / 10 % 10;
    int fourth = a % 10;

    cout << a << " reversed is " << fourth << third << second << first << endl; 
}