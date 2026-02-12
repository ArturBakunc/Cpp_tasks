#include <iostream>
using namespace std;

int main()
{
    double pi = 4;
    
    for (int i = 3; i < 150; i+=4)
    {
        pi -= static_cast<double>(4)/i;
    }
    
    for (int i = 5; i < 150; i+=4)
    {
        pi += static_cast<double>(4)/i;
    }

    cout << pi << endl;
    
    return 0;
}

