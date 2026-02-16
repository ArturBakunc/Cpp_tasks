#include <iostream>
#include <cstring>
using namespace std;

void swap( char *&, char *&);
int isStringsEqual(const char *, const char *);
void bubbleSortForNames( char *[], int);

int main()
{
    const int SIZE = 200;
    const int MAX_WORDS = 15;
    int count = 0;

    char names[SIZE] = "Goris Kapan Yerevan Gyumri Aparan Vanadzor Tsaghkadzor Vayq Ararat Abovyan Qajaran Meghri Jermuk Ijevan Dilijan";
    char* word[MAX_WORDS];

    char *token = strtok(names, " ");

    while(token != "\0" && count < MAX_WORDS)
    {
        word[count] = token;
        token = strtok(NULL, " ");
        count++;
    }      

    bubbleSortForNames(word, count);

    cout << "Sorted names: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << word[i] << endl;
    }

    return 0;
}

void bubbleSortForNames(char *word[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (isStringsEqual(word[i], word[j]) > 0)
            {
                swap(word[i], word[j]);
            }
        }
    }        
}

int isStringsEqual(const char *string1, const char *string2)
{
    return strcmp(string1, string2);
}

void swap(char *&name1, char *&name2)
{
    char* temp = name1; 
    name1 = name2;
    name2 = temp;
}