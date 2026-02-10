#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindromeRecursive(const string text, int left, int right)
{
    if (left >= right)
        return true;

    if (!isalnum(text[left]))
    {
        return isPalindromeRecursive(text, left + 1, right);
    }
    if (!isalnum(text[right]))
    {
        return isPalindromeRecursive(text, left, right - 1);
    }

    if (tolower(text[left]) != tolower(text[right]))
    {
        return false;
    }

    return isPalindromeRecursive(text, left + 1, right - 1);
}

int main()
{
    string text;

    cout << "Enter the text to check if it is palindrome: ";
    
    getline(cin, text);

    if (isPalindromeRecursive(text, 0, text.length() - 1))
    {
        cout << text << " is a palindrome.\n";
    }
    else
    {
        cout << text << " is not a palindrome.\n";
    }

    return 0;
}
