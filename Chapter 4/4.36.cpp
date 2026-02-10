#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    if (size == 0)
    {
        return;

    }  

    cout << array[0] << " ";

    printArray(array + 1, size - 1);
}

int main()
{
    int array[] = {472, 15, 903, 68, 241, 7, 389, 120, 56, 804};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "The array elements are: ";
    printArray(array, size);
    cout << endl;

    return 0;
}
