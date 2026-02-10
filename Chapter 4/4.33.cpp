// recursive Linear Search

#include <iostream>
using namespace std;

void linearSearch(int array[], int size, int key, int index = 0)
{
    if (index >= size)
    {
        cout << "Key not found.\n";
        return;
    }

    if (array[index] == key)
    {
        cout << "The key is found at index " << index << endl;
        return;
    }

    linearSearch(array, size, key, index + 1);
}

int main()
{
    int key;
    
    int array[] = {472, 15, 903, 68, 241, 7, 389, 120, 56, 804};
    
    int size = sizeof(array) / sizeof(array[0]);
    
    cout << "Enter the key number to search: ";
    cin >> key;
    
    linearSearch(array, size, key);
    
    return 0;
}