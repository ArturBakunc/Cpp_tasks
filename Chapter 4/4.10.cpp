#include <iostream>
using namespace std;

int main()
{
    const int FIXED_SALARY = 200;
    const double COMMISSION_RATE = 0.09;
    const int NUMBER_TO_END = -1; 

    int sales;
    int salary;
    int counters[9] = { 0 };

    cout << "Enter the sales (" << NUMBER_TO_END << " to end): ";
    
    while (true)
    {
        cin >> sales;
    
        if (sales == NUMBER_TO_END)
        {
            break;
        }
        else
        {
            salary = FIXED_SALARY + sales * COMMISSION_RATE;
        }
        
        if (salary >= 1000)
        {
            counters[8]++;
        }
        else
        {
            counters[(salary - FIXED_SALARY) / 100]++;
        }
    }

    cout << "\nSalary Ranges:\n";
    cout << "$200-299 : " << counters[0] << endl;
    cout << "$300-399 : " << counters[1] << endl;
    cout << "$400-499 : " << counters[2] << endl;
    cout << "$500-599 : " << counters[3] << endl;
    cout << "$600-699 : " << counters[4] << endl;
    cout << "$700-799 : " << counters[5] << endl;
    cout << "$800-899 : " << counters[6] << endl;
    cout << "$900-999 : " << counters[7] << endl;
    cout << "$1000+   : " << counters[8] << endl;

    return 0;
}