#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void operationGenerator();
void difficultyLevel();
void chooseOperation();
void correctAnswerResponse();
void incorrectAnswerResponse();

// global variables;
int a;
int b;
int level;
char operand;
double answer;
double result;
const int END_NUMBER = 9999;

int main()
{
    srand(time(0));

    operationGenerator();

    return 0;
}

void operationGenerator()
{
    cout << "Enter the difficulty. 1, 2 or 3: ";
    cin >> level;

    chooseOperation();
    difficultyLevel();

    while (true)
    {
        switch (operand)
        {
            case '+':
            {
                cout << "How much is " << a << " + " << b << "? (Enter " << END_NUMBER << " to quit): ";
                result = a + b;
                break;
            }

            case '-':
            {
                cout << "How much is " << a << " - " << b << "? (Enter " << END_NUMBER << " to quit): ";
                result = a - b;
                break;
            }

            case '*':
            {
                cout << "How much is " << a << " * " << b << "? (Enter " << END_NUMBER << " to quit): ";
                result = a * b;
                break;
            }

            default:
            {
                cout << "Invalid operator." << endl;
                return;
            }
        }

        cin >> answer;

        if (answer == END_NUMBER)
        {
            break;
        }

        while (answer != result)
        {
            incorrectAnswerResponse();
            cin >> answer;

            if (answer == END_NUMBER)
            {
                return;
            }
        }

        correctAnswerResponse();
        difficultyLevel();   // generate NEW random numbers
    }
}

void difficultyLevel()
{
    a = rand() % 10;   // always 1-digit

    switch (level)
    {
        case 1:
        {
            b = rand() % 10;
            break;
        }

        case 2:
        {
            b = rand() % 90 + 10;
            break;
        }

        case 3:
        {
            b = rand() % 900 + 100;
            break;
        }

        default:
        {
            b = rand() % 10;
            break;
        }
    }
}

void chooseOperation()
{
    cout << "Enter the operation you want to practice (+, -, *): ";
    cin >> operand;
}

void incorrectAnswerResponse()
{
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
}

void correctAnswerResponse()
{
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
