#include <iostream>
#include <string>
using namespace std;

void isPalindrome( string );

int main()
{
    string text;

    cout << "Enter the text to check if it is palindrome: ";
    getline(cin, text);

    isPalindrome(text);

    return 0;
}

void isPalindrome(string text)
{
    int size = text.length();
    int count = 0;

    for (int i = 0; i < (size / 2); i++)  
    {
        if (text[i] == text[size - i - 1])  
        {
            count++;
        }
    }

    if (count == size / 2) 
    {
        cout << text << " is a palindrome.\n";
    }
    else
    {
        cout << text << " is not a palindrome.\n";
    }
}