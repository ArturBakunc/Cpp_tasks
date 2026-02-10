#include <iostream>
using namespace std;

int main()
{
    double grade;
    int counter = 0;
    int passCounter = 0;
    int failCounter = 0;
    const int MAX_GRADES = 10;
    const int PASS_GRADE = 1;
    const int FAIL_GRADE = 2;

    while (counter < MAX_GRADES)
    {
        cout << "Enter grade (1 = pass, 2 = fail): ";
        cin >> grade;

        if (grade == PASS_GRADE)
        {
            passCounter++;
            counter++;
        }

        else if (grade == FAIL_GRADE)
        {
            failCounter++;
            counter++;
        }
        
        else
        {
            cout << "Invalid grade, enter the correct grade. " << endl;
        }
    }

    cout << "Passed: " << passCounter << endl;
    cout << "Failed: " << failCounter << endl;

    if (passCounter > failCounter)
    {
        cout << "Raise tuition!" << endl;
    }

    else
    {
        cout << "Don't Raise tuition, work well!";
    }

    return 0;
}