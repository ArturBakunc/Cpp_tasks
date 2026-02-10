#include <iostream>
using namespace std;

int main()
{
    double a;
    double b; 
    double c;

    cout << "Enter a: ";
    cin >> a;
    
    cout << "Enter b: ";
    cin >> b;
    
    cout << "Enter c: ";
    cin >> c;

    if (a*a + b*b == c*c) // Pythagorean theorem
    {
        cout << "This is a right angle triangle.";
    }
    
    else
    {
        cout << "This is not a right angle triangle.";
    }

    return 0;
}