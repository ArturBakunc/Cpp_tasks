// The factorial function is used frequently in probability problems. Using the definition of fac
// torial in Exercise 2. 38, write a program that uses for structures to evaluate the factorials of the inte
// gers from 1 to 5. Print the results in tabular format. What difficulty might prevent you from 
// calculating the factorial of 20?

#include <iostream>
using namespace std;

int fact( int );

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << "The factorial of " << i << " is " << fact(i) << endl; 
    }

    return 0;
}

int fact(int number)
{
    int factorialResult = 1;
    int tempNumber = number;

    if (number == 0 || number == 1)
    {
        factorialResult = 1;
    }
    else
    {
        while (number != 1)
        {
            factorialResult *= number;
            number--;
        }
    }

    return factorialResult;
}
