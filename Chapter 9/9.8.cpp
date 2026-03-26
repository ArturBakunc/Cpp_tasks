#include <iostream>

class Shape
{
public:
    virtual double area() = 0;
    virtual double volume() = 0;

    
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
        double area = length * width;

        return area;
    }
};

class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side)
    {

    }
};

class Circle : public TwoDimensionalShape
{
private:
    double radius;
    const double pi = 3.14;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    double area() override
    {
        double area = pi * radius * radius;

        return area;
    }
};

class Triangle : public TwoDimensionalShape
{
private:
    double height;
    double base;

public:
    Triangle(double height, double base)
    {
        this->height = height;
        this->base = base;
    }

    double area() override
    {
        double area = (height * base) / 2;

        return area;
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
        double volume = side * side * side;

        return volume;
    }
};

class Cylinder : public ThreeDimensionalShape
{
private:
    double radius;
    double height;
    const double pi = 3.14;

public:
    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double volume() override
    {
        double volume = pi * radius * radius * height;

        return volume;
    }
};

class Cone : public ThreeDimensionalShape
{
private:
    double radius;
    double height;
    double const pi = 3.14;

public:
    Cone(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }

    double volume() override
    {
        double volume = (pi * radius * radius * height) / 3;
 
        return volume;
    }
}