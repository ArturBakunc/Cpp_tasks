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
    int correct = 0;
    int incorrect = 0;
    int totalAttempts = 0;

    srand(time(0));

    while (true)
    {
        int answer;
        int a = rand() % 10;
        int b = rand() % 10;

        cout << "How much is " << a << " times " << b << "? (Enter -1 to quit): ";
        cin >> answer;

        if (answer == -1)
        {
            break;
        }

        totalAttempts++;

        while (answer != a * b)
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

            cout << "How much is " << a << " times " << b << "? (Enter -1 to quit): ";
            cin >> answer;

            if (answer == -1)
            {
                return;
            }

            totalAttempts++;
        }

        if (answer == a * b)
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
            if (static_cast<double>(correct) / totalAttempts * 100 < 75)
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
