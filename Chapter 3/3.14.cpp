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

    double roundedToInteger = roundToInteger( number );
    double roundedToTenths = roundToTenths( number );
    double roundedToHundredths = roundToHundredths( number );
    double roundedToThousandths = roundToThousandths( number );

    cout << "The original number is: " << number << ", after rounding to integer: " << roundedToInteger << endl;
    cout << "The original number is: " << number << ", after rounding to tenths: " << roundedToTenths << endl;
    cout << "The original number is: " << number << ", after rounding to hundredths: " << roundedToHundredths << endl;
    cout << "The original number is: " << number << ", after rounding to thousandths: " << roundedToThousandths << endl;

    return 0;
}

double roundToInteger(double number)
{
    int roundedToInteger = floor(number + 0.5);

    return roundedToInteger;
}

double roundToTenths(double number)
{
    double roundedToTenths = floor(number * 10 + 0.5) / 10;

    return roundedToTenths;
}

double roundToHundredths(double number)
{
    double roundedToHundredths = floor(number * 100 + 0.5) / 100;

    return roundedToHundredths;
}

double roundToThousandths(double number)
{
    double roundedToThousandths = floor(number * 1000 + 0.5) / 1000;

    return roundedToThousandths;
}

