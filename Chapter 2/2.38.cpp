#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    int num = number;

    // Factorial
    cout << "The factorial of " << number << " is " << fact(number) << endl;
    
    double e = 1; 
    
    // Mathematical constant e
    for (int i = 1; i < 10; i++)    
    {
       e = e + 1.0 / fact(i);
    }

    cout << "The mathematical constant e = " << e << endl;

    return 0;
}

int fact(int n)
{
    int factorial = 1;
    int num = n;

    if (n == 0 || n == 1)
    {
        factorial = 1;
    }
    
    else
    {
        while (n != 1)
        {
            factorial *= n;
            n--;
        }
    }
    
    return factorial;
}
