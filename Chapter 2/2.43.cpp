// Write a program that uses a for structure to find the smallest of several integers. Assume 
// that the first value read specifies the number of values remaining and that the first number is not one 
// of the integers to compare. 

#include <iostream>
using namespace std;

int main()
{
    int numberOfIntegers;
    double smallest; 
    double number;
    
    cout << "Enter the number of integers to compare: ";
    cin >> numberOfIntegers;
    
    cout << "Enter number: ";
    cin >> smallest;

    for (int i = 1; i < numberOfIntegers; i++)
    {
         cout << "Enter number: ";
         cin >> number;
    
         if (number < smallest)
         {
             smallest = number;
         }
    }

    cout << "The smallest number is " << smallest << endl;

    return 0;
}