#include <iostream>
using namespace std;

int recursiveMinimum( int [], int );

int main()
{
    int array[] = {472, 15, 903, 68, 241, 7, 389, 120, 56, 804};
    int size = sizeof(array) / sizeof(array[0]);

    int minValue = recursiveMinimum(array, size);

    cout << "The minimum value in the array is: " << minValue << endl;

    return 0;
}

int recursiveMinimum(int array[], int size)
{
    
    if (size == 1)
    {
        return array[0];
    }
    
    int minOfRest = recursiveMinimum(array + 1, size - 1);

    if (array[0] < minOfRest)
    {
        return array[0];
    }    
    else
    {
        return minOfRest;
    }
}
