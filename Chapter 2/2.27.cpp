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

    cout << "A case" << endl;
    if (number2 == 8)
    {
        if (number1 == 5)
        {
            cout << "@@@@@" << endl;
        }
    
        else
        {
            cout << "#####" << endl;
        }
    
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }

    cout << "B case" << endl;
    if (number2 == 8)
    {
        if (number1 == 5)
        {
            cout << "@@@@@" << endl;
        }
    
        else
        {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }
    }

    cout << "C case" << endl;
    if (number2 == 8)
    {
        if (number1 == 5)
        {
            cout << "@@@@@" << endl;
        }
    
        else
        {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    
        cout << "&&&&&" << endl;
    }

    cout << "D case" << endl;
    if (number2 == 7)
    {
        if (number1 == 5)
        {
            cout << "@@@@@" << endl;
        }
    }
    
    else
    {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }

    return 0;
}
