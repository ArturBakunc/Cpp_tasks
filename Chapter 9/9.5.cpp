#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
    
public:
    Point(int xValue = 0, int yValue = 0)
    {
        x = xValue;
        y = yValue;
    }
    
    void setX(int xValue)
    {
        x = xValue;
    }

    void setY(int yValue)
    {
        y = yValue;
    }

    int getX() const
    {
        return x;
    }
    
    int getY() const
    {
        return y;
    }
    
    void print() const
    {
        cout << "(" << x << ", " << y << ")";
    }
};

class Square : public Point
{
private:
    double side;

public:
    Square(int xValue = 0, int yValue = 0, double sideValue = 0.0) : Point(xValue, yValue)
    {
        setSide(sideValue);
    }

    void setSide(double sideValue)
    {
        if (sideValue < 0)
        {
            side = 0;
        }
        else
        {
            side = sideValue;
        }
    }

    double getSide() const
    {
        return side;
    }

    double getArea() const
    {
        double area = side * side;

        return area;
    }

    void print() const
    {
        Point::print();

        cout << " Side = " << side;
    }
};

class Cube : public Square
{
public:
    Cube(int xValue = 0, int yValue = 0,  double sideValue = 0.0) : Square(xValue, yValue, sideValue)
    {

    }

    double getArea() const
    {
        double area = 6 * Square::getArea();

        return area;
    }

    double getVolume() const
    {
        double volume = getSide() * getSide() * getSide();

        return volume;
    }

    void print() const
    {
        Square::print();

        cout << " (Cube)";
    }
};

int main()
{
    Cube figure(1, 2, 3);

    figure.print();

    cout << "\nSurface Area = " << figure.getArea();
    cout << "\nVolume = " << figure.getVolume() << endl;

    return 0;
}