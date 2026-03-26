#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual double volume() = 0;
    virtual ~Shape() 
    {
    }
};

class TwoDimensionalShape : public Shape
{
public:
    double volume() override
    {
        return 0;
    }
};

class ThreeDimensionalShape : public Shape
{
public:
    double area() override
    {
        return 0;
    }
};

class Rectangle : public TwoDimensionalShape
{
private:
    double length;
    double width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    double area() override
    {
        return length * width;
    }
};

class Circle : public TwoDimensionalShape
{
private:
    double radius;
    double pi = 3.14;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    double area() override
    {
        return pi * radius * radius;
    }
};

class Cube : public ThreeDimensionalShape
{
private:
    double side;

public:
    Cube(double side)
    {
        this->side = side;
    }

    double volume() override
    {
        return side * side * side;
    }
};

class Cylinder : public ThreeDimensionalShape
{
private:
    double radius;
    double height;
    double pi = 3.14;

public:
    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double volume() override
    {
        return pi * radius * radius * height;
    }
};

class Cone : public ThreeDimensionalShape
{
private:
    double radius;
    double height;
    double pi = 3.14;

public:
    Cone(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double volume() override
    {
        return (pi * radius * radius * height) / 3;
    }
};

int main()
{
    Circle circleShape(5);
    Rectangle rectangleShape(4, 6);

    Cube cubeShape(3);
    Cylinder cylinderShape(2, 5);
    Cone coneShape(3, 4);

    Shape* shape1 = &circleShape;
    Shape* shape2 = &rectangleShape;
    Shape* shape3 = &cubeShape;
    Shape* shape4 = &cylinderShape;
    Shape* shape5 = &coneShape;

    Shape* shapeList[] = { shape1, shape2, shape3, shape4, shape5 };

    for (int index = 0; index < 5; index++)
    {
        if (shapeList[index]->volume() == 0)
        {
            cout << "2D Shape\n";
            cout << "Area: " << shapeList[index]->area() << endl;
        }
        else
        {
            cout << "3D Shape\n";
            cout << "Area: " << shapeList[index]->area() << endl;
            cout << "Volume: " << shapeList[index]->volume() << endl;
        }

        cout << "-------------------\n";
    }

    return 0;
}