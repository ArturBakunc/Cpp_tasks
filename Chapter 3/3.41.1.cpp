#include <iostream>
using namespace std;

// Non-recursive Fibonacci function

int fibonacci( int );

int main() 
{
    int fibonacciPosition;
    
    cout << "Enter fibonacci position: ";
    cin >> fibonacciPosition;
    
    cout << "Fibonacci(" << fibonacciPosition << ") = " << fibonacci(fibonacciPosition) << endl;

    return 0;
}

int fibonacci(int position) 
{
    if (position == 0) 
    {
        return 0;
    }

    if (position == 1) 
    {
        return 1;
    }

    int previousNumber = 0;
    int currentNumber = 1;
    int nextNumber;

    for (int i = 2; i <= position; i++) 
    {
        nextNumber = previousNumber + currentNumber;
        previousNumber = currentNumber;
        currentNumber = nextNumber;
    }

    return currentNumber;
}

