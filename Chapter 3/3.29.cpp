#include <iostream>
#include <iomanip>
using namespace std;

void isPerfectNumber( int );

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        isPerfectNumber(i);
    } 

    return 0;
}
void isPerfectNumber(int number)
{
    int count = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            count += i;
        }
    }
    
    if (count == number)
    {   
        cout << number << " is a perfect number. " << endl;

        cout << "The divisors are "; 

        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
}