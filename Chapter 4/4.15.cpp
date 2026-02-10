#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_NUMBER = 100;
    const int MIN_NUMBER = 10;
    const int arraySize = 20;
    
    int number;
    int count = 0;
    int uniqueNumbers[arraySize];

    for (int i = 0; i < arraySize; )
    {
        cout << "Enter the number between 10 and 100: "; 
        cin >> number;
        
        if (number < MIN_NUMBER || number > MAX_NUMBER)
        {
            cout << "Invalid number. Try again. " << endl;
            continue;
        }

        bool dublicate = false;
        for (int j = 0; j < count; j++)
        {
            if (uniqueNumbers[j] == number)
            {
                dublicate = true;
                break;
            }
        }

        if (!dublicate)
        {
            uniqueNumbers[count] = number;
            count++;
            cout << "Unique number entered: " << number << endl;
        }
        else
        {
            cout << "Number already exists, not stored." << endl;
        }
        
        i++;
    }

    cout << "The final array is: ";
    for (int k = 0; k < count; k++)
    {
        cout << setw(4) << uniqueNumbers[k];
    }
    
    return 0;
}

