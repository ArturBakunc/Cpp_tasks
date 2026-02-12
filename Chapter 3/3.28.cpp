#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double findSmallest( double, double, double );

int main()
{
    double number1;
    double number2; 
    double number3;

    cout << "Enter three double floating point number: " << endl;
    cin >> number1 >> number2 >> number3;

    cout << "The smallest of the three is " << findSmallest(number1, number2, number3) << endl; 

    return 0;
}

double findSmallest(double number1, double number2, double number3)
{
    double smallest = number1;

    if (number2 < smallest)
    {
        smallest = number2;
    }
    if (number3 < smallest)
    {
        smallest = number3;
    }

    return smallest;
}