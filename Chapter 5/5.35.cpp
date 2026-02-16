#include <iostream>
#include <cstring>
using namespace std;

void printLatinWord(char *);

int main()
{
    const int SIZE = 100;

    char sentence[SIZE];

    cout << "Enter an English sentence: ";
    cin.getline(sentence, SIZE);

    char *token = strtok(sentence, " ");

    while (token != "\0")
    {
        printLatinWord(token);
        cout << " ";
        token = strtok(NULL, " ");
    }

    cout << endl;

    return 0;
}

void printLatinWord(char *word)
{
    const char LATIN_ENDING1 = 'a';
    const char LATIN_ENDING2 = 'y';

    int wordLength = strlen(word);

    char firstLetter = word[0];

    for (int i = 0; i < wordLength - 1; i++)
    {
        word[i] = word[i + 1];
    }

    word[wordLength - 1] = firstLetter;

    // word[wordLength] = 'a';
    // word[wordLength + 1] = 'y';
    // word[wordLength + 2] = '\0';

    cout << word << LATIN_ENDING1 << LATIN_ENDING2;
}