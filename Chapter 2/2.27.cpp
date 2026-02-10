#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    
    cout << "Enter x: ";
    cin >> x;
    
    cout << "Enter y: ";
    cin >> y;

    cout << "A case" << endl;
    if (y == 8)
    {
        if (x == 5)
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
    if (y == 8)
    {
        if (x == 5)
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
    if (y == 8)
    {
        if (x == 5)
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
    if (y == 7)
    {
        if (x == 5)
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
