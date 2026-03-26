#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(double realPart = 0, double imaginaryPart = 0)
    {
        this->realPart = realPart;
        this->imaginaryPart = imaginaryPart;
    }

    Complex add(Complex number)
    {
        double realPart = this->realPart  + number.realPart;
        double imaginaryPart =  this->imaginaryPart + number.imaginaryPart;

        return Complex(realPart, imaginaryPart);
    }

    Complex subtract(Complex number)
    {
        double realPart = this->realPart - number.realPart;
        double imaginaryPart = this->imaginaryPart - number.imaginaryPart;

        return Complex(realPart, imaginaryPart);
    }

    void print()
    {
        cout << this->realPart << " + " << this->imaginaryPart << "i" << endl;
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