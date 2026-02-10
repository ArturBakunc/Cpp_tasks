#include <iostream>
using namespace std;

int main()
{
    int hours;
    double hourlyRate; 
    double salary;
    int const WEEKLY_HOURS = 40;
    double const OVERTIME_MULTIPLIER = 1.5;
    const int NUMBER_TO_END = -1;
    
    cout << "Enter hours worked (" << NUMBER_TO_END << " to end): ";
    cin >> hours;

    while (hours != NUMBER_TO_END)
    {
        cout << "Enter hourly rate of the worker ($00.00): ";
        cin >> hourlyRate;

        if (hours <= WEEKLY_HOURS)
        {
            salary = hours * hourlyRate;
        }
            
        else
        {
            double overtimeHours = hours - WEEKLY_HOURS;
            double overtimeSalary = overtimeHours * (hourlyRate * OVERTIME_MULTIPLIER);
            salary = WEEKLY_HOURS * hourlyRate + overtimeSalary;
        }
  
        cout << "Salary is $" << salary << endl;

        cout << endl;

        cout << "Enter hours worked (" << NUMBER_TO_END << " to end): ";
        cin >> hours;
    }

    return 0;
}