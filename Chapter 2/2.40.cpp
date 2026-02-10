#include <iostream>
using namespace std;

int main()
{
    int n; 
    double number;

    cout << "Enter n: ";
    cin >> n;
    
    double totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> number;
        
        totalSum += number;
    }
    
    cout << "Total sum is " << totalSum << endl;

    return 0;
}