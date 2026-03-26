#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
private:
    double topLeftX, topLeftY;
    double bottomLeftX, bottomLeftY;
    double bottomRightX, bottomRightY;
    double topRightX, topRightY;

public:
    Rectangle(
        double topLeftX = 1, double topLeftY = 1,
        double bottomLeftX = 1, double bottomLeftY = 4,
        double bottomRightX = 6, double bottomRightY = 4,
        double topRightX = 6, double topRightY = 1)
    {
        setCoordinates(
            topLeftX, topLeftY,
            bottomLeftX, bottomLeftY,
            bottomRightX, bottomRightY,
            topRightX, topRightY);
    }

    void setCoordinates(
        double topLeftX, double topLeftY,
        double bottomLeftX, double bottomLeftY,
        double bottomRightX, double bottomRightY,
        double topRightX, double topRightY)
    {
        if (topLeftX > 0 && topLeftY > 0 && topLeftX <= 20 && topLeftY <= 20 &&
            bottomLeftX > 0 && bottomLeftY > 0 && bottomLeftX <= 20 && bottomLeftY <= 20 &&
            bottomRightX > 0 && bottomRightY > 0 && bottomRightX <= 20 && bottomRightY <= 20 &&
            topRightX > 0 && topRightY > 0 && topRightX <= 20 && topRightY <= 20)
        {
            this->topLeftX = topLeftX;
            this->topLeftY = topLeftY;
            this->bottomLeftX = bottomLeftX;
            this->bottomLeftY = bottomLeftY;
            this->bottomRightX = bottomRightX;
            this->bottomRightY = bottomRightY;
            this->topRightX = topRightX;
            this->topRightY = topRightY;
        }
    }

    double calculateDistance(double xStart, double yStart, double xEnd, double yEnd)
    {
        return sqrt(pow(xEnd - xStart, 2) + pow(yEnd - yStart, 2));
    }

    double getLength()
    {
        double side1 = calculateDistance(topLeftX, topLeftY, bottomLeftX, bottomLeftY);
        double side2 = calculateDistance(bottomLeftX, bottomLeftY, bottomRightX, bottomRightY);
        double side3 = calculateDistance(bottomRightX, bottomRightY, topRightX, topRightY);
        double side4 = calculateDistance(topRightX, topRightY, topLeftX, topLeftY);

        return max(max(side1, side2), max(side3, side4));
    }

    double getWidth()
    {
        double side1 = calculateDistance(topLeftX, topLeftY, bottomLeftX, bottomLeftY);
        double side2 = calculateDistance(bottomLeftX, bottomLeftY, bottomRightX, bottomRightY);
        double side3 = calculateDistance(bottomRightX, bottomRightY, topRightX, topRightY);
        double side4 = calculateDistance(topRightX, topRightY, topLeftX, topLeftY);

        return min(min(side1, side2), min(side3, side4));
    }

    double getPerimeter()
    {
        return 2 * (getLength() + getWidth());
    }

    double getArea()
    {
        return getLength() * getWidth();
    }

    bool isSquare()
    {
        return getLength() == getWidth();
    }
};

int main()
{
    double topLeftX = 1, topLeftY = 1;
    double bottomLeftX = 1, bottomLeftY = 5;
    double bottomRightX = 6, bottomRightY = 5;
    double topRightX = 6, topRightY = 1;

    Rectangle rectangleObject(
        topLeftX, topLeftY,
        bottomLeftX, bottomLeftY,
        bottomRightX, bottomRightY,
        topRightX, topRightY);

    cout << "Length: " << rectangleObject.getLength() << endl;
    cout << "Width: " << rectangleObject.getWidth() << endl;
    cout << "Perimeter: " << rectangleObject.getPerimeter() << endl;
    cout << "Area: " << rectangleObject.getArea() << endl;

    if (rectangleObject.isSquare())
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is not a square" << endl;
    }

    return 0;
}