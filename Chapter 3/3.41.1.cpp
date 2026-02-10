#include <iostream>
using namespace std;

// Non-recursive Fibonacci function

int fibonacci( int );

int main() 
{
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}

int fibonacci(int n) 
{
    if (n == 0) 
    {
        return 0;
    }

    if (n == 1) 
    {
        return 1;
    }

    int prev = 0;
    int curr = 1;
        int next;

    for (int i = 2; i <= n; i++) 
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

