#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void rollDice(int [], int);

int main()
{
    const int arraySize = 13; // from 0 - 12

    int array[arraySize] = { 0 };
    
    rollDice(array, arraySize);

    cout << "Number\t" << "Frequency" << endl;;
    for (int i = 2; i < arraySize; i++)
    {
        cout << i << "\t" << array[i] << endl;
    } 

    return 0;
}

void rollDice(int array[], int arraySize)
{
    srand(time(0));

    const int MAX_ITERATIONS = 36000;

    int sumOfRoll;
    int dice1;
    int dice2;

    for (int i = 0; i < MAX_ITERATIONS; i++)
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        
        sumOfRoll = dice1 + dice2;
        array[sumOfRoll]++;
    }
}