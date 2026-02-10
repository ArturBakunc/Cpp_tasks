// 2.20 finding the lagest 

#include <iostream>
using namespace std;

int main()
{
    int number; 
    int counter = 1; 
    int largest;
    const int MAX_NUMBERS = 11;
    
    cout << "Enter number 1: ";
    cin >> largest;

    while (counter < MAX_NUMBERS)
    {
        cout << "Enter number " << counter + 1 << ": ";
        cin >> number;

        if (number > largest)
        {
            largest = number;
        }
            
        counter++;
    }

    cout << "The largest number is " << largest << endl;
    
    return 0;
}
