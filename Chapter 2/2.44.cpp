// Write a program that uses a for structure to calculate and print the product of the odd inte
// gers from 1 to 15.

#include <iostream>
using namespace std;

int main()
{
    int product = 1;

    for (int i = 1; i <= 15; i+=2)
    {
        product *= i;
    }
    
    cout << "The product is " << product << endl;

    return 0;
}