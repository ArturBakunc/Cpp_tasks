#include <iostream>
#include <iomanip>
using namespace std;

void reversedNumber( int );

int main()
{
    int number;

    cout << "Enter the number to print it's reversed: ";
    cin >> number;

    reversedNumber(number);

    return 0;
}

void reversedNumber( int number )
{
    int firstDigit = number / 1000;
    int secondDigit = number / 100 % 10;
    int thirdDigit = number / 10 % 10;
    int fourthDigit = number % 10;

    cout << number << " reversed is " << fourthDigit << thirdDigit << secondDigit << firstDigit << endl; 
}