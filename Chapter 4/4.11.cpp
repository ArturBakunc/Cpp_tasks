#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    const int arraySize = 10;
    int numbers[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Data items in original order:\n ";

    for (int i = 0; i < arraySize; i++)
    {
        cout << setw( 4 ) << numbers[i];
    } 

    for (int i = 1; i < arraySize; i++)
    {
        int swapCount = 0;

        for (int j = 0; j < arraySize - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(numbers[j], numbers[j + 1]);
                swapCount++;
            }
        }
                
        if (swapCount == 0)
        {
            break;   
        }
    }

    cout << "\nData items in ascending order:\n ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw( 4 ) << numbers[i];
    }
    
    return 0;
}