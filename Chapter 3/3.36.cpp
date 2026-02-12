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
        int number1 = rand() % 10;
        int number2 = rand() % 10;

        cout << "How much is " << number1 << " times " << number2 << "? (Enter " << NUMBER_TO_END << " to quit): ";
        cin >> answer;

        if (answer == NUMBER_TO_END)
        {
            break;
        }

        while (answer != number1 * number2)
        {
            int bad = rand() % 4; // random number 0-3 for different incorrect answer messages

            switch (bad) 
            {
                case 0:
                {
                    cout << "No. Please try again." << endl;
                    break;
                }
                case 1:
                {
                    cout << "Wrong. Try once more." << endl;
                    break;
                }
                case 2:
                {
                    cout << "Don't give up!" << endl;
                    break;
                }
                case 3:
                {
                    cout << "No. Keep trying." << endl;
                    break;
                }
            }

            cout << "How much is " << number1 << " times " << number2 << "? (Enter " << NUMBER_TO_END << " to quit): ";
            cin >> answer;

            if (answer == NUMBER_TO_END)
            {
                return;
            }
        }

        int good = rand() % 4; // random number 0-3 for different congratulations messages 

        switch (good)
        {
            case 0:
            {
                cout << "Very good!" << endl;
                break;
            }
            case 1:
            {
                cout << "Excellent!" << endl;
                break;
            }
            case 2:
            {
                cout << "Nice work!" << endl;
                break;
            }
            case 3:
            {
                cout << "Keep up the good work!" << endl;
                break;
            }
        }
    }
}
