#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );


int main()
{
    double number;
    
    cout << "Enter first number: ";
    cin >> number;

    double n1 = roundToInteger( number );
    double n2 = roundToTenths( number );
    double n3 = roundToHundredths( number );
    double n4 = roundToThousandths( number );

    cout << "The original number is: " << number << ", after rounding to integer: " << n1 << endl;
    cout << "The original number is: " << number << ", after rounding to tenths: " << n2 << endl;
    cout << "The original number is: " << number << ", after rounding to hundredths: " << n3 << endl;
    cout << "The original number is: " << number << ", after rounding to thousandths: " << n4 << endl;

    return 0;
}

double roundToInteger(double number)
{
    int y = floor(number + 0.5);

    return y;
}

double roundToTenths(double number)
{
    double y = floor(number * 10 + 0.5) / 10;

    return y;
}

double roundToHundredths(double number)
{
    double y = floor(number * 100 + 0.5) / 100;

    return y;
}

double roundToThousandths(double number)
{
    double y = floor(number * 1000 + 0.5) / 1000;

    return y;
}

