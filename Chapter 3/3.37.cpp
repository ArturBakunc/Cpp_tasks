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
    
    int correct = 0;
    int incorrect = 0;
    int totalAttempts = 0;

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

        totalAttempts++;

        while (answer != number1 * number2)
        {
            incorrect++;

            if (totalAttempts == 10)
                break;

            int bad = rand() % 4;

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

            totalAttempts++;
        }

        if (answer == number1 * number2)
        {
            correct++;

            int good = rand() % 4;

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

        if (totalAttempts == 10)
        {
            const int PASSING_PERCENTAGE = 75;
            double gradePercentage = static_cast<double>(correct) / totalAttempts * 100;

            if (gradePercentage < PASSING_PERCENTAGE) // less than 75% correct
            {
                cout << endl;
                cout << "Please ask your instructor for extra help." << endl;
            }
            else
            {
                cout << endl;
                cout << "Everything is ok, Go on." << endl;
            }

            return;
        }
    }
}
