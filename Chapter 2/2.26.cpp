#include <iostream>
using namespace std;

int main()
{   
    int number1; 
    int number2;

    cout << "Enter number1: ";
    cin >> number1;
    
    cout << "Enter number2: ";
    cin >> number2;

    if (number1 < 10)
    {
        if (number2 > 10)
        {
            cout << "****" << endl;
        }
    
        else
        {
            cout << "####" << endl;
        }
    }
    
    cout << "$$$$" << endl;

    return 0;
}