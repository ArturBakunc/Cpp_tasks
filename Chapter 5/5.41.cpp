#include <iostream>
#include <cstring>
using namespace std;

int calculateLength(char []);
int calculateLengthWithPointer(const char *);

int main()
{
    const int SIZE = 50;

    char sentence[SIZE];

    cout << "Enter the sentence: ";
    cin.getline(sentence, SIZE);

    cout << "The size of the sentence using array indexing is: " << calculateLength(sentence) << endl;
    
    char *pointer = sentence;
    
    cout << "The size of the sentence using pointer arithmetic is: " << calculateLengthWithPointer(sentence) << endl;


}

int calculateLength(char sentence[])
{
    int length = 0;

    while (sentence[length] != '\0')
    {
        length++;
    }

    return length;
}

int calculateLengthWithPointer(const char *sentence)
{
    int length = 0;

    while(*sentence != '\0')
    {
        length++;
        sentence++;
    }

    return length;
}