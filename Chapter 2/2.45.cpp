// The factorial function is used frequently in probability problems. Using the definition of fac
// torial in Exercise 2. 38, write a program that uses for structures to evaluate the factorials of the inte
// gers from 1 to 5. Print the results in tabular format. What difficulty might prevent you from 
// calculating the factorial of 20?

#include <iostream>
using namespace std;

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

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << "The factorial of " << i << " is " << fact(i) << endl; 
    }

    return 0;
}