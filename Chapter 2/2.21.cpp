#include <iostream>
using namespace std;

int main()
{
    int n = 1;

    cout << "N\t10*N\t100*N\t1000*N" << endl;
    
    while (n <= 5)
    {
        cout << n << "\t" << 10 * n << "\t" << 100 * n << "\t" << 1000 * n << endl;
        
        n++;
    }

    return 0;
}
