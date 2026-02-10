#include <iostream>
using namespace std;

void selectionSort(int [], int, int index = 0);
void swap(int &, int &);

int main()
{
    int array[] = {472, 15, 903, 68, 241, 7, 389, 120, 56, 804};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void selectionSort(int array[], int size, int index)
{   
    if (index >= size - 1)
    {
        return; 
    }

    int smallestIndex = index;

    for (int i = index + 1; i < size; i++)
    {
        if (array[i] < array[smallestIndex])
        {
            smallestIndex = i;
        }
    }

    swap(array[index], array[smallestIndex]);

    selectionSort(array, size, index + 1);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b; 
    b = temp;
}