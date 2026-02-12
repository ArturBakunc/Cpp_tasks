#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() 
{
    int previousNumber = 0; 
    int currentNumber = 1; 
    int nextNumber;
    int position = 1;

    while (true) 
    {
        nextNumber = previousNumber + currentNumber;
        
        if (nextNumber < 0 || nextNumber > INT_MAX) // overflow check
            break;

        previousNumber = currentNumber;
        currentNumber = nextNumber;
        position++;
    }

    cout << "Largest int Fibonacci number: " << previousNumber << " at position = " << position << endl;

    return 0;
}
