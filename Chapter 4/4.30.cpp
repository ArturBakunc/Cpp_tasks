#include <iostream>
using namespace std;

void isPalindrome( string );

int main()
{
    int arr[] = {472, 15, 903, 66, 201, 18, 343, 194, 61, 804};
    int n = sizeof(arr) /sizeof(arr[0]);

    buckerSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void buckerSort(int arr[], int n)
{
    int bucket[10][1000];
    int bucketCount[10] = {0};

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int divisor = 1; max / divisor > 0; divisor *= 10)
    {
        for (int i = 0; i < 10; i++)
        {
            bucketCount[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            int digit = (arr[i] / divisor) % 10;
            bucket[digit][bucketCount[digit]] = arr[i];
            bucketCount[digit]++;
        }

        int index = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int  j = 0; j < bucketCount[i]; j++)
            {
                arr[index++] = bucket[i][j];
            }
        }
    }
}

