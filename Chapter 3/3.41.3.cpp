#include <iostream>
using namespace std;

double fibonacci(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    
    if (n == 1) 
    {
        return 1;
    }
    
    double prev = 0;
    double curr = 1;
    double next;

    for (int i = 2; i <= n; i++) 
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() 
{
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
