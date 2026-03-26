#include <iostream>
using namespace std;

class Shape
{
public:
    int x; 
    int y;
    char fill;

    Shape(int x, int y, char fill)
    {
        this->x = x;
        this->y = y;
        this->fill = fill;
    }

    virtual void draw() = 0;
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int x, int y, int radius, char fill) : Shape(x, y, fill)
    {
        this->radius = radius;
    }

    void draw() override
    {
        cout << "Circle at (" << x << "," << y << ") radius "
             << radius << " fill " << fill << endl;
    }
};

class Rectangle : public Shape
{
private:
    int width;
    int height;

public:
    Rectangle(int x, int y, int width, int height, char fill)
        : Shape(x, y, fill)
    {
        this->width = width;
        this->height = height;
    }

    void draw() override
    {
        cout << "Rectangle at (" << x << "," << y << ") "
             << width << "x" << height
             << " fill " << fill << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int x, int y, int side, char fill)
        : Rectangle(x, y, side, side, fill)
    {
    }
};

class Triangle : public Shape
{
private:
    int base;
    int height;

public:
    Triangle(int x, int y, int base, int height, char fill)
        : Shape(x, y, fill)
    {
        this->base = base;
        this->height = height;
    }

    void draw() override
    {
        cout << "Triangle at (" << x << "," << y << ") "
             << "base " << base << " height " << height
             << " fill " << fill << endl;
    }
};

int main()
{
    Shape* shapes[100];
    int count = 0;

    int choice;

    do
    {
        cout << "\n1. Circle\n2. Rectangle\n3. Square\n4. Triangle\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int x;
            int y;
            int radius;
            char fill;

            cout << "Enter x, y, radius and fill: ";
            cin >> x >> y >> radius >> fill;

            shapes[count++] = new Circle(x, y, radius, fill);
        }
        else if (choice == 2)
        {
            int x;
            int y;
            int width;
            int height;
            char fill;

            cout << "Enter x, y, width, height and fill: ";
            cin >> x >> y >> width >> height >> fill;

            shapes[count++] = new Rectangle(x, y, width, height, fill);
        }
        else if (choice == 3)
        {
            int x;
            int y;
            int side;
            char fill;

            cout << "Enter x, y, side and fill: ";
            cin >> x >> y >> side >> fill;

            shapes[count++] = new Square(x, y, side, fill);
        }
        else if (choice == 4)
        {
            int x;
            int y;
            int base;
            int height;
            char fill;

            cout << "Enter x, y, base, height and fill: ";
            cin >> x >> y >> base >> height >> fill;

            shapes[count++] = new Triangle(x, y, base, height, fill);
        }

        // SCREEN MANAGER (redraw every time)
        cout << "\n--- SCREEN ---\n";
        for (int i = 0; i < count; i++)
        {
            shapes[i]->draw();
        }

    } 
    while (choice != 0);

    return 0;
}