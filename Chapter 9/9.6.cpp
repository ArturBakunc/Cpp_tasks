// Write an inheritance hierarchy for class Quadrilateral, Trapezoid, Parallelogram, Rectangle 
// and Square. Use Quadrilateral as the base class of the hierarchy. Make 
// the hierarchy as deep (i.e., as many levels) as possible. The private data of Quadrilateral 
// should be the x-y coordinate pairs for the four endpoints of the Quadrilateral. 

#include <iostream>
using namespace std;

class Quadrilateral
{
private:
    int x1;
    int y1;

    int x2;
    int y2;
    
    int x3;
    int y3;
    
    int x4;
    int y4;

public:
    Quadrilateral()
    {
        x1 = 0;
        y1 = 0;
        
        x2 = 0;
        y2 = 0;
        
        x3 = 0;
        y3 = 0;

        x4 = 0;
        y4 = 0;
    }

    void print()
    {
        cout << "(" << x1 << ", " << y1 << ") ";
        cout << "(" << x2 << ", " << y2 << ") ";
        cout << "(" << x3 << ", " << y3 << ") ";
        cout << "(" << x4 << ", " << y4 << ")";
    }
};

class Trapezoid : Quadrilateral {
    Trapezoid() {
        Quadrilateral();
    }
};

class Parallelogram : Quadrilateral {};

class Rectangle : Parallelogram {};

class Square : Rectangle {};