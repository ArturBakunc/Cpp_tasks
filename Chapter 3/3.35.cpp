#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void multiplicationGenerator();

int main()
{
    multiplicationGenerator();

    return 0;
}

void multiplicationGenerator()
{
    srand(time(0));

    const int NUMBER_TO_END = -1;

    while (true)
    {
        int answer;
        int number1 = rand() % 10; // one-digit random number
        int number2 = rand() % 10; // one-digit random number

        cout << "How much is " << number1 << " times " << number2 << "? (Enter " << NUMBER_TO_END << " to quit): ";
        cin >> answer;

        if (answer == NUMBER_TO_END)
        {
            break;
        }
        
        while (answer != number1 * number2)
        {
            cout << "No. Please try again." << endl;
            
            cout << "How much is " << number1 << " times " << number2 << "? (Enter " << NUMBER_TO_END << " to quit): ";
            cin >> answer;

            if (answer == NUMBER_TO_END)
            {
                return;
            }
        }

        cout << "Well done!" << endl << endl;
    }
}

