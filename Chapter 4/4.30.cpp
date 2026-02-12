#include <iostream>
using namespace std;

void isPalindrome( string );
void bucketSort(int [], int );

int main()
{
    int array[] = {472, 15, 903, 66, 201, 18, 343, 194, 61, 804};
    int arraySize = sizeof(array) /sizeof(array[0]);

    bucketSort(array, arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void bucketSort(int array[], int arrSize)
{
    int bucket[10][1000];
    int bucketCount[10] = {0};

    int max = array[0];

    for (int i = 0; i < arrSize; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int divisor = 1; max / divisor > 0; divisor *= 10)
    {
        for (int i = 0; i < 10; i++)
        {
            bucketCount[i] = 0;
        }

        for (int i = 0; i < arrSize; i++)
        {
            int digit = (array[i] / divisor) % 10;
            bucket[digit][bucketCount[digit]] = array[i];
            bucketCount[digit]++;
        }

        int index = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int  j = 0; j < bucketCount[i]; j++)
            {
                array[index++] = bucket[i][j];
            }
        }
    }
}

