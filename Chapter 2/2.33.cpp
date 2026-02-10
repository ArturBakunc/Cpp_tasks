#include <iostream>
using namespace std;

int main()
{
    double radius;
    const double pi = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    double diameter = 2 * radius;
    double circumference = 2 * pi * radius;
    double area = 2 * pi * radius * radius; 

    cout << "The diameter is " << diameter << endl;
    cout << "The circumference is " << circumference << endl;
    cout << "The area is " << area << endl;
    
    return 0;
}