// Create a class Rectangle with attributes length and width, each of which defaults to 
// 1 . Provide member functions that calculate the perimeter and the area of the rectangle. Also, 
// provide set and get functions for the length and width attributes. The set functions should verify 
// that length and width are each floating-point numbers larger than 0.0 and less than 20.0. 

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle(double side1 = 1, double side2 = 1)
    {
        setLength(length);
        setWidth(width);
    }

    void setLength(double len)
    {
        if (len > 0 && len < 20)
        {
            length = len;
        }
    }

    void setWidth(double wid)
    {
        if (wid > 0 && wid < 20)
        {
            width = wid;
        }
    }

    double getLength()
    {
        return length;
    }

    double getWidth()
    {
        return width;
    }
    
    double perimeter()
    {
        return (2 * (length + width));
    }

    double area()
    {
        return length * width;
    }

private:
    double length = 1;
    double width = 1;
};

int main()
{
    Rectangle figure1;

    figure1.setLength(10);
    figure1.setWidth(15);

    cout << "Area: " << figure1.area() << endl;

    cout << "Perimeter: " << figure1.perimeter() << endl;

    return 0;
}