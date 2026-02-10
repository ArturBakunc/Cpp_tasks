#include <iostream>
using namespace std;

int main()
{
    const int NUMBER_TO_END = 9999;
    int counter = 0;
    double number;
    double average; 
    double sum = 0;
    
    cout << "Enter numbers to calculate average (enter " << NUMBER_TO_END << "  to stop): " << endl;

    for (int i = 0; number != NUMBER_TO_END; i++)
    {
        cout << "Enter the number: ";
        cin >> number;

        if (number == NUMBER_TO_END)
        {
            break;
        }
        
        counter++;
        sum += number;
    }

    average = sum / counter;
    cout << "The average is " << average << endl;

    return 0;
}
