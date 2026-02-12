#include <iostream>
using namespace std;

bool even( int );  

int main()
{
    const int NUMBER_TO_END = -1;
    int number;

    while (true)
    {
        cout << "Enter an integer to check if it is even or odd (" << NUMBER_TO_END << " to end): ";
        cin >> number;

        if (number == NUMBER_TO_END)
        {
            break;
        }
        
        if (even( number ))
        {
            cout << number << " is even." << endl;
        }
        else
        {
            cout << number << " is odd." << endl;
        }
    }

    return 0;
}

bool even(int number)
{
    return (number % 2 == 0);
}