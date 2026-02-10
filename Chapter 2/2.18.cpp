#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sales;
    int salary;
    double const PERCENT = 0.09;
    int const BONUS = 200;
    const int NUMBER_TO_END = -1;

    cout << "Enter sales in dollars (" << NUMBER_TO_END << " to end): ";
    cin >> sales;

    while (sales != NUMBER_TO_END)
    {
        double salary = sales * PERCENT + BONUS;

        cout << "Salary is " << salary << endl;

        cout << "Enter sales in dollars (" << NUMBER_TO_END << " to end): ";
        cin >> sales;
    }

    return 0;
}