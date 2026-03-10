#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double real = 0, double imag = 0)
    {
        realPart = real;
        imaginaryPart = imag;
    }

    Complex add(Complex c)
    {
        return Complex(realPart + c.realPart,
                       imaginaryPart + c.imaginaryPart);
    }

    Complex subtract(Complex c)
    {
        return Complex(realPart - c.realPart,
                       imaginaryPart - c.imaginaryPart);
    }

    void print()
    {
        cout << realPart << " + " << imaginaryPart << "i" << endl;
    }

private:
    double realPart;
    double imaginaryPart;
};

int main()
{
    Complex number1(4,5);
    Complex number2(7,8);

    Complex sum = number1.add(number2);
    Complex difference = number1.subtract(number2);

    cout << "First number: ";
    number1.print();

    cout << "Second number: ";
    number2.print();

    cout << "Sum: ";
    sum.print();

    cout << "Difference: ";
    difference.print();

    return 0;
}