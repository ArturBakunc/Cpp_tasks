#include <iostream>
#include <cmath>
using namespace std;

int rounder(double);

int main() 
{
    double number1;
    double number2;
    double number3;
    
    cout << "Enter first number: ";
    cin >> number1; 

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter third number: ";
    cin >> number3;

    int n1 = rounder(number1);
    int n2 = rounder(number2);
    int n3 = rounder(number3);

    cout << "The original number is: " << number1 << ", after rounding: " << n1 << endl;
    cout << "The original number is: " << number2 << ", after rounding: " << n2 << endl;
    cout << "The original number is: " << number3 << ", after rounding: " << n3 << endl;

    return 0;
}

int rounder(double num)
{
    int y = floor(num + 0.5);

    return y;
}