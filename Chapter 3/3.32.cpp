#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int x; 
    int y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "GCD is: " << gcd(x, y) << endl;

    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
