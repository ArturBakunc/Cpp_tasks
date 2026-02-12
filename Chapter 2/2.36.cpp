#include <iostream>
using namespace std;

int main()
{
    double side1;
    double side2; 
    double side3;

    cout << "Enter side1 of a triangle: ";
    cin >> side1;
    
    cout << "Enter side2 of a triangle: ";
    cin >> side2;
    
    cout << "Enter side3 of a triangle: ";
    cin >> side3;

    if (side1*side1 + side2*side2 == side3*side3) // Pythagorean theorem
    {
        cout << "This is a right angle triangle.";
    }
    
    else
    {
        cout << "This is not a right angle triangle.";
    }

    return 0;
}