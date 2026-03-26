// Create a class Hugelnteger that uses a 40-element array of digits to store integers as large 
// as 40 digits each. Provide member functions input, output, add and substract. For comparing 
// Hugelnteger objects, provide functions isEqualTo, isNotEqualTo, isGreater
// Than, isLessThan, isGreaterThanOrEqualTo and isLessThanOrEqualTo--each of 
// these is a "predicate" function that simply returns true if the relationship holds between the two 
// huge integers and returns false if the relationship does not hold. Also, provide a predicate function 
// iszero.

#include <iostream>
#include <string>
using namespace std;

class HugeInteger
{
private:
    static const int SIZE = 40;
    int digits[SIZE];

public:
    HugeInteger()
    {
        for (int i = 0; i < SIZE; i++)
        {
            digits[i] = 0;
        }
    }

    void input()
    {
        string number;
        cin >> number;
    
        // reset array
        for (int i = 0; i < SIZE; i++)
        {
            digits[i] = 0;
        }
    
        int numberLength = number.length();
        int startIndex = SIZE - numberLength;
    
        for (int i = 0; i < numberLength; i++)
        {
            digits[startIndex + i] = number[i] - '0';
        }
    }

    void output() const
    {
        bool leadingZero = true;

        for (int i = 0; i < SIZE; i++)
        {
            if (leadingZero && digits[i] == 0)
            {
                continue;
            }

            leadingZero = false;
            cout << digits[i];
        }

        if (leadingZero)
        {
            cout << 0;
        }
    }

    HugeInteger add(const HugeInteger& other)
    {
        HugeInteger result;

        int carry = 0;

        for (int i = SIZE - 1; i >= 0; i--)
        {
            int sum = this->digits[i] + other.digits[i] + carry;

            result.digits[i] = sum % 10;
            carry = sum / 10;
        }

        return result;
    }

    HugeInteger subtract(const HugeInteger& other)
    {
        HugeInteger result;

        int borrow = 0;

        for (int i = SIZE - 1; i >= 0; i--)
        {
            int current = this->digits[i] - borrow;
            int diff = current - other.digits[i];

            if (diff < 0)
            {
                diff = diff + 10;
                borrow = 1;
            }
            else
            {
                borrow = 0;
            }

            result.digits[i] = diff;
        }

        return result;
    }

    bool isEqualTo(const HugeInteger& other) const
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (this->digits[i] != other.digits[i])
            {
                return false;
            }
        }

        return true;
    }

        bool isNotEqualTo(const HugeInteger& other) const
    {
        return !isEqualTo(other);
    }

    bool isGreaterThan(const HugeInteger& other) const
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (this->digits[i] > other.digits[i])
            {
                return true;
            }
            else if (this->digits[i] < other.digits[i])
            {
                return false;
            }
        }

        return false;
    }

    bool isLessThan(const HugeInteger& other) const
    {
        return other.isGreaterThan(*this);
    }

    bool isGreaterThanOrEqualTo(const HugeInteger& other) const
    {
        return isGreaterThan(other) || isEqualTo(other);
    }

    bool isLessThanOrEqualTo(const HugeInteger& other) const
    {
        return isLessThan(other) || isEqualTo(other);
    }

    bool isZero() const
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (digits[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    HugeInteger number1;
    HugeInteger number2;

    cout << "Enter first number: ";
    number1.input();

    cout << "Enter second number: ";
    number2.input();

    cout << "\nNumber 1: ";
    number1.output();

    cout << "\nNumber 2: ";
    number2.output();

    cout << endl;

    cout << "\nComparisons" << endl;

    if (number1.isEqualTo(number2))
    {
        cout << "Numbers are equal" << endl;
    }

    if (number1.isNotEqualTo(number2))
    {
        cout << "Numbers are not equal" << endl;
    }

    if (number1.isGreaterThan(number2))
    {
        cout << "Number 1 is greater" << endl;
    }

    if (number1.isLessThan(number2))
    {
        cout << "Number 1 is less" << endl;
    }

    if (number1.isGreaterThanOrEqualTo(number2))
    {
        cout << "Number 1 is greater or equal" << endl;
    }

    if (number1.isLessThanOrEqualTo(number2))
    {
        cout << "Number 1 is less or equal" << endl;
    }

    cout << "\nArithmetic" << endl;

    cout << "Addition: ";
    HugeInteger sum = number1.add(number2);
    sum.output();

    cout << endl;

    if (number1.isGreaterThanOrEqualTo(number2))
    {
        cout << "Subtraction (num1 - num2): ";
        HugeInteger diff = number1.subtract(number2);
        diff.output();
    }
    else
    {
        cout << "Subtraction (num2 - num1): ";
        HugeInteger diff = number2.subtract(number1);
        diff.output();
    }

    cout << endl;

    return 0;
}