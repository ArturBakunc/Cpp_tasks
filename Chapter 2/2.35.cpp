#include <iostream>
using namespace std;

int main()
{
    double side1;
    double side2;
    double side3;

    cout << "Enter side1: ";
    cin >> side1;
    
    cout << "Enter side2: ";
    cin >> side2;
    
    cout << "Enter side3: ";
    cin >> side3;
    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) // the triangle inequality theorem
    {
        cout << side1 << ", " << side2 << ", and " << side3 << " can be sides of a triangle. ";
    }

    else
    {
        cout << side1 << ", " << side2 << ", and " << side3 << " can't be sides of a triangle. "; 
    }
    
    return 0;
}