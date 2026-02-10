#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double hypotenuse(double, double);

int main()
{
    double side1_1; 
    double side2_1;
    double side1_2; 
    double side2_2;
    double side1_3; 
    double side2_3;

    // Get sides for triangle 1
    cout << "Triangle 1:" << endl;

    cout << "Enter side 1: ";
    cin >> side1_1;

    cout << "Enter side 2: ";
    cin >> side2_1;

    // Get sides for triangle 2
    cout << "Triangle 2:" << endl;
    
    cout << "Enter side 1: ";
    cin >> side1_2;
    
    cout << "Enter side 2: ";
    cin >> side2_2;

    // Get sides for triangle 3
    cout << "Triangle 3:" << endl;
    
    cout << "Enter side 1: ";
    cin >> side1_3;
    
    cout << "Enter side 2: ";
    cin >> side2_3;

    // Calculate hypotenuses
    double result1 = hypotenuse(side1_1, side2_1);
    double result2 = hypotenuse(side1_2, side2_2);
    double result3 = hypotenuse(side1_3, side2_3);
    
    // Display results
    cout << fixed << setprecision(2);
    cout << "Triangle \t Side1 \t\t Side2 \t\t Hypotenuse" << endl;
    cout << "1\t\t" <<  side1_1 << "\t\t" <<  side2_1 << "\t\t" <<  result1 << endl;
    cout << "2\t\t" <<  side1_2 << "\t\t" <<  side2_2 << "\t\t" <<  result2 << endl;
    cout << "3\t\t" <<  side1_3 << "\t\t" <<  side2_3 << "\t\t" <<  result3 << endl;
    
    return 0;
}

double hypotenuse(double a, double b)
{
    double c;

    c = sqrt((a * a) + (b * b));
     
    return c;
}