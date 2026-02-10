#include <iostream>
using namespace std;

void stringReverse(char string[])
{
    if (string[0] == '\0')  
        return;

    stringReverse(string + 1); 

    cout << string[0];  
}

int main()
{
    char text[] = "Hello, world!";

    cout << "Original string: " << text << endl;
    cout << "Reversed string: ";

    stringReverse(text);
    
    cout << endl;

    return 0;
}
