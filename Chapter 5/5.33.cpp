#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cctype>

using namespace std;

int getRandomNumber();

int main()
{
    srand(time(0));

    const int WORDS = 5;
    const int SENTENCE_SIZE = 100;
    const int MAX_SENTENCES = 20;

    const char *article[WORDS] = { "the", "a", "one", "some", "any" };
    const char *noun[WORDS] = { "boy", "girl", "dog", "town", "car" };
    const char *verb[WORDS] = { "drove", "jumped", "ran", "walked", "skipped" };
    const char *preposition[WORDS] = { "to", "from", "over", "under", "on" };

    for (int i = 0; i < MAX_SENTENCES; i++)
    {
        char sentence[SENTENCE_SIZE] = "";

        strcat(sentence, article[getRandomNumber()]);
        strcat(sentence, " ");
        strcat(sentence, noun[getRandomNumber()]);
        strcat(sentence, " ");
        strcat(sentence, verb[getRandomNumber()]);
        strcat(sentence, " ");
        strcat(sentence, preposition[getRandomNumber()]);
        strcat(sentence, " ");
        strcat(sentence, article[getRandomNumber()]);
        strcat(sentence, " ");
        strcat(sentence, noun[getRandomNumber()]);
        strcat(sentence, ".");

        sentence[0] = toupper(sentence[0]);

        cout << sentence << endl;
    }

    return 0;
}

int getRandomNumber()
{
    return rand() % 5;
}