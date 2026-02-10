#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int const MIN_INTEREST_RATE_PERCENT = 5;
    int const MAX_INTEREST_RATE_PERCENT = 10;
    double principal = 1000.0;
    double amount;

    cout << fixed << setprecision(2);

    for (int i = MIN_INTEREST_RATE_PERCENT; i <= MAX_INTEREST_RATE_PERCENT; i++)
    {
        double rate = i / 100.0; // convert percentage to decimal

        cout << "\nInterest Rate: " << i << "%\n";
        cout << "Year" << setw(21) << "Amount on deposit" << endl;

        for (int year = 1; year <= 10; year++)
        {
            amount = principal * pow(1.0 + rate, year);

            cout << setw(4) << year
                 << setw(21) << amount << endl;
        }
    }

    return 0;
}
