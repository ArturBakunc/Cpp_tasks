#include <iostream>
#include <cstring>
using namespace std;

void copyStrings(char *, char *);

int main()
{
    const int SIZE = 20;

    char word1[SIZE];
    char word2[SIZE];

    char *pointer1 = word1;
    char *pointer2 = word2;

    cout << "Enter any word: ";
    cin >> pointer1;

    cout << pointer1 << endl;
    cout << pointer2 << endl; // this will pring garbage, 
                              // because in this step it is empty
    
    copyStrings(pointer2, pointer1);

    cout << endl;
    cout << pointer1 << endl;
    cout << pointer2 << endl;

    return 0;
}

void copyStrings(char *string1, char *string2)
{
    strcpy(string1, string2);
}