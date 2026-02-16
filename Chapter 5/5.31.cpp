#include <iostream>
#include <cstring>
using namespace std;

int isStringsEqual(const char*, const char *);

int main()
{
    const int MAX_LENGTH = 100;

    char array1[MAX_LENGTH];
    char array2[MAX_LENGTH];

    char *string1 = array1;
    char *string2 = array2;

    cout << "Enter the first string: ";
    cin >> string1;

    cout << "Enter the second string: ";
    cin >> string2;

    int result = isStringsEqual(string1, string2);

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

int isStringsEqual(const char *string1, const char *string2)
{
    return strcmp(string1, string2);
}