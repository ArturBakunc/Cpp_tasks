#include <iostream>
using namespace std;

int main()
{
    const int MAX_COUNT = 10;
    int count = 1;

    while (count <= MAX_COUNT)
    {
        if (count % 2) 
        {
            cout <<  "****" ;
        }
        else
        {
                cout << "++++";   
        }
        ++count;  
    }
    
    return 0;
}