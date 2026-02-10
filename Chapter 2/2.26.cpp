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

    if (x < 10)
    {
        if (y > 10)
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