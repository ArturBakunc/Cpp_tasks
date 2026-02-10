#include <iostream>
using namespace std;

int main()
{
    double pi = 0.0;
    int sign = 1;

    for (int i = 1; i < 150; i += 2)
    {
        pi += sign * (4.0 / i);
        sign = -sign;  // alternate + and -
    }

    cout << pi << endl;

    return 0;
}