#include <iostream>
using namespace std;

int main()
{
    int binaryNumber;
    int result = 0;

    cout << "Enter the binary number: ";
    cin >> binaryNumber;
    
    int real = binaryNumber;
    int count = 0;
    int n = binaryNumber;
    
    if (n == 0)
    {
        count = 1;
    }

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    int pow = 1; 

    for (int i = 0; i < count; i++)
    {
        result = result + binaryNumber%10 * pow;
        binaryNumber /= 10;
        pow *= 2;
    }
    
    cout << real << " in decimal is " << result << endl;

    return 0;
}