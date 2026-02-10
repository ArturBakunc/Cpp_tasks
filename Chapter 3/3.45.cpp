#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y); // euclidean algorithm
    }
}

int main()
{
    cout << gcd(48, 18);

    return 0;
}
