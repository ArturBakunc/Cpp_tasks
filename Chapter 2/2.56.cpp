// code 1 -- Managers (fixed weekly)
// code 2 -- Hourly workers (1.5x after 40 hours)
// code 3 -- Commission workers (250 + 5.7% of sales)
// code 4 -- Pieceworkers (fixed money for each item)

#include <iostream>
using namespace std;

int main()
{
    const int MAX_REGULAR_HOURS = 40;
    const double OVERTIME_RATE = 1.5;
    const double BASE_COMMISSION_SALARY = 250.0;
    const double COMMISSION_PERCENT = 0.057;

    int code;

    while (true)
    {
        cout << "Enter your Code (0 to quit): ";
        cin >> code;

        if (code == 0)
        {
            break;
        }

        switch (code)
        {
            case 1: // Managers
            {
                double salary;

                cout << "Enter your salary: ";
                cin >> salary;

                cout << "Your weekly salary is $" << salary << endl;

                break;
            }

            case 2: // Hourly workers
            {
                double hours;
                double hourlyWage;
                double salary;

                cout << "Enter the hours worked: ";
                cin >> hours;

                cout << "Enter your hourly wage: ";
                cin >> hourlyWage;

                if (hours <= MAX_REGULAR_HOURS)
                {
                    salary = hours * hourlyWage;
                }
                
                else
                {
                    double regularPay = MAX_REGULAR_HOURS * hourlyWage;
                    double overtimeHours = hours - MAX_REGULAR_HOURS;
                    double overtimePay = overtimeHours * hourlyWage * OVERTIME_RATE;

                    salary = regularPay + overtimePay;
                }

                cout << "Your salary is $" << salary << endl;
                
                break;
            }

            case 3: // Commission workers
            {
                double sales;
                double salary;

                cout << "Enter your sales last week: ";
                cin >> sales;

                salary = BASE_COMMISSION_SALARY + sales * COMMISSION_PERCENT;

                cout << "Your salary is $" << salary << endl;
                break;
            }

            case 4: // Pieceworkers
            {
                double pieces;
                double price;
                double salary;

                cout << "Enter the number of pieces made: ";
                cin >> pieces;

                cout << "Enter the price of each piece: ";
                cin >> price;

                salary = pieces * price;

                cout << "Your salary is $" << salary << endl;
                break;
            }

            default:
                cout << "Invalid code." << endl;
                break;
        }
    }

    return 0;
}
