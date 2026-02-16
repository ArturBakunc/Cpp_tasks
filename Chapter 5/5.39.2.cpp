#include <iostream>
#include <cstring>
using namespace std;

void concatenate(char *, char *);

int main()
{
    const int SIZE = 50;

    char toString[SIZE];
    char fromString[SIZE];

    char *pointer1 = toString;
    char *pointer2 = fromString;

    cout << "Enter any word: ";
    cin >> pointer1;
    
    cout << "Enter any word: ";
    cin >> pointer2;
    
    concatenate(pointer1, pointer2);

    cout << endl;
    cout << "String 1 becomes: " << pointer1 << endl;
    cout << "String 2 becomes: " << pointer2 << endl;
    
    return 0;
}

void concatenate(char *destination, char *source)
{
    strcat(destination, source);
}