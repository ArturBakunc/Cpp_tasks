#include <iostream>
using namespace std;

int main()
{
    const int MAX_COUNT = 10;
    int count = 1;

    while (count <= MAX_COUNT)
    {
        cout << (count % 2 ? "****" : "+++++++") << endl;
        ++count;  
    }
    
    return 0;
}