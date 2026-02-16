#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int SIZE = 100;
    const int MAX_WORDS = 20;

    char sentence[SIZE];
    char *tokens[20];
    int index = 0;

    cout << "Enter the sentence to write in reversed order: ";
    cin.getline(sentence, SIZE);

    char *token = strtok(sentence, " ");
    
    while (token != NULL)
    {
        tokens[index] = token;
        token = strtok(NULL, " ");
        index++;
    }
    
    for (int i = index - 1; i >= 0; i--)
    {
        cout << tokens[i] << " ";
    }
    
    return 0;
}