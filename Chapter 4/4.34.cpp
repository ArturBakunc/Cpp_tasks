// Recursive binary search

#include <iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }          
    
    int mid = start + (end - start) / 2;

    if (array[mid] == key)
    {
        return mid;
    }      
    else if (array[mid] > key)
    {
        return binarySearch(array, start, mid - 1, key);
    }
    else
    {
        return binarySearch(array, mid + 1, end, key);
    }
}

int main()
{
    int array[] = {7, 15, 56, 68, 120, 241, 389, 472, 804, 903}; // sorted array
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1)
    {
        cout << "Key found at index " << result << endl;
    }
    else
    {
        cout << "Key not found.\n";
    }

    return 0;
}
