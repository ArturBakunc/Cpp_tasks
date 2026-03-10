#include <iostream>
using namespace std;

// class Rational
// {
// public:
//     Rational(double upperPart, double lowerPart = 1)
//     { 
//         numerator = upperPart;
//         denominator = lowerPart;
//     }

//     Rational add(Rational number)
//     {
//         double newNumerator = numerator * number.denominator + denominator * number.numerator;
//         double newDenominator = denominator * number.denominator;

//         return Rational(newNumerator, newDenominator);
//     }

//     Rational substract(Rational number)
//     {
//         double newNumerator = numerator * number.denominator - denominator * number.numerator;
//         double newDenominator = denominator * number.denominator;

//         return Rational(newNumerator, newDenominator);
//     }

//     Rational multiply(Rational number)
//     {
//         double newNumerator = numerator * number.numerator;
//         double newDenominator = denominator * number.denominator;

//         return Rational(newNumerator, newDenominator);
//     }

//     Rational devide(Rational number)
//     {
//         double newNumerator = numerator * number.denominator;
//         double newDenominator = denominator * number.numerator;

//         return Rational(newNumerator, newDenominator);
//     }

//     void print()
//     {
//         cout << numerator << "/" << denominator;
//     }

//     void printFloating()
//     {
//         cout << numerator / denominator << endl;    
//     }

// private:
//     int numerator;
//     int denominator;

//     void reduce()
//     {
//         int gcd = 1;
        
//         for (int i = 1; i <= numerator && i <= denominator; i++)
//         {
//             if (numerator % i == 0 && denominator % i == 0)
//             {
//                 gcd = i;
//             }
//         }

//         numerator /= gcd;
//         denominator /= gcd;
//     }
// };

// int main()
// {
//     Rational number1(5, 7);
//     Rational number2(3, 7);

//     Rational sum = number1.add(number2);
//     cout << "Sum: "; 
//     sum.print();

//     Rational difference = number1.substract(number2);
//     cout << "Difference: "; 
//     difference.print();

//     Rational multiply = number1.multiply(number2);
//     cout << "Multiply: "; 
//     multiply.print();
    
    
//     Rational division = number1.devide(number2);
//     cout << "Division: "; 
//     division.print();
    
//     number1.print();

//     cout << endl;
    
//     number1.printFloating();

//     return 0;
// }

int main()
{
    cout << "Hello\n";
    return 0;
}