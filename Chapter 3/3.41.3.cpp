#include <iostream>
using namespace std;

double fibonacci( int );

int main() 
{
    int fibonacciPosition;
    
    cout << "Enter Fibonacci position: ";
    cin >> fibonacciPosition;
    
    cout << "Fibonacci(" << fibonacciPosition << ") = " << fibonacci(fibonacciPosition) << endl;

    return 0;
}

double fibonacci(int position) 
{
    if (position == 0) 
    {
        return 0;
    }
    
    if (position == 1) 
    {
        return 1;
    }
    
    double previous = 0;
    double current = 1;
    double next;

    for (int i = 2; i <= position; i++) 
    {
        next = previous + current;
        previous = current;
        current = next;
    }

    return current;
}