#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int number[SIZE];


    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the number (0-30): ";
        cin >> number[i];
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            cout << "* ";
        }
    
        cout << endl;
    }

    return 0;
}
