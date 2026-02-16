#include <iostream>
#include <cstring>
using namespace std;

int isStringsEqual(const char*, const char *, int );

int main()
{
    const int MAX_LENGTH = 100;
    int numberToCompare;

    char word1[MAX_LENGTH];
    char word2[MAX_LENGTH];

    char *string1 = word1;
    char *string2 = word1;

    cout << "Enter the first word: ";
    cin >> string1;

    cout << "Enter the second word: ";
    cin >> string2;

    cout << "Enter the number of characters to compare: ";
    cin >> numberToCompare;

    int result = isStringsEqual(string1, string2, numberToCompare);

    if (result == 0)
    {
        cout << "The strings are equal." << endl;
    }
    else if (result < 0)
    {
        cout << "String 1 is greater than String 2." << endl;;
    }
    else
    {
        cout << "String 1 is less than String 2." << endl;;
    }

    return 0;
}

int isStringsEqual(const char *string1, const char *string2, int numberToCompare)
{
    return strncmp(string1, string2, numberToCompare);
}