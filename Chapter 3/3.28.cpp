#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double findSmallest( double, double, double );

int main()
{
    double a;
    double b; 
    double c;

    cout << "Enter three double floating point number: " << endl;
    cin >> a >> b >> c;

    cout << "The smallest of the three is " << findSmallest(a, b, c) << endl; 

    return 0;
}

double findSmallest(double a, double b, double c)
{
    double smallest = a;

    if (b < smallest)
    {
        smallest = b;
    }
    if (c < smallest)
    {
        smallest = c;
    }

    return smallest;
}