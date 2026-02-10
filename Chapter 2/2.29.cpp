#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter a 5-digit number: ";
    cin >> number;

    // Extract each digit
    int digit1 = number / 10000;           // first digit
    int digit2 = (number / 1000) % 10;     // second digit
    int digit4 = (number / 10) % 10;       // fourth digit
    int digit5 = number % 10;              // fifth digit

    // Check palindrome
    if (digit1 == digit5 && digit2 == digit4)
    {
        cout << number << " is palindrome." << endl;
    }
    else
    {
        cout << number << " is not palindrome." << endl;
    }

    return 0;
}
