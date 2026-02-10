#include <iostream>
using namespace std;

void swap(int, int);

int main()
{
    int number; 
    int count = 2; 
    int largest; 
    int largest2;
    const int MAX_NUMBERS = 5;

    cout << "Enter number 1: ";
    cin >> largest;

    cout << "Enter number 2: ";
    cin >> largest2;
    
    if (largest < largest2)
    {
        swap(largest, largest2);
    }

    while (count < MAX_NUMBERS)
    {
        cout << "Enter number " << count + 1 << ": ";
        cin >> number;
        
        count++;
        
        if (number > largest2 && number > largest)
        {
            largest2 = largest;
            largest = number;
        }
        
        else if(number > largest2 && number < largest)
        {
            largest2 = number;
        }
    }
    
    cout << "The largest is " << largest << endl;
    cout << "The 2nd largest is " << largest2 << endl;
    
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}