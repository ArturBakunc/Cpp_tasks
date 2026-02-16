// For each of the following, write C++ statements that perform the specified task. Assume that 
// unsigned integers are stored in two bytes and that the starting address of the array is at location 
// 1002500 in memory. 

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;

    // 5.9. a and b
    unsigned int values[SIZE];
    unsigned int *pointer = values;

    for (int i = 0; i < SIZE; i++)
    {
        *pointer = 2 * (i + 1);
        cout << "Value " << i + 1 << ": " << *pointer << endl;
        pointer++;
    }

    //5.9.f
    for(int i = 0; i < SIZE; i++) 
    {
        cout << *(values + i) << " ";
    }
    cout << endl;



    return 0;
}