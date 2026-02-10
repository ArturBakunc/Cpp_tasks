#include <iostream>
#include <cmath>
using namespace std;

int even(int);  // Function declaration

int main()
{
    const int NUMBER_TO_END = -1;
    int number;

    while (true)
    {
        cout << "Enter an integer ( " << NUMBER_TO_END << " to end): ";
        cin >> number;

        if (number == NUMBER_TO_END)
        {
            break;
        }
        
        if (even(number))
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

int even(int num)
{
    if (num % 2 == 0)
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}