#include <iostream>
using namespace std;

int main()
{
    int iterations; 
    double number;

    cout << "Enter number of iterations: ";
    cin >> iterations;
    
    double totalSum = 0;

    for (int i = 0; i < iterations; i++)
    {
        cout << "Enter number: ";
        cin >> number;
        
        totalSum += number;
    }
    
    cout << "Total sum is " << totalSum << endl;

    return 0;
}