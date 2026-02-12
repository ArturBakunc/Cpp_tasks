// A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage 
// charges an additional $0.50 per hour for each hour or part thereof in excess of three hours. 
// The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 
// hours at a time. Write a program that calculates and prints the parking charges for each of three 
// customers who parked their cars in this garage yesterday. You should enter the hours parked for each 
// customer. Your program should print the results in a neat tabular format and should calculate and 
// print the total of yesterday's receipts. The program should use the function calculateCharges 
// to determine the charge for each customer. 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double);

int main()
{
    double parkedHours1;
    double parkedHours2;
    double parkedHours3;

    cout << "Enter the hours parked for car1: ";
    cin >> parkedHours1;
    
    cout << "Enter the hours parked for car2: ";
    cin >> parkedHours2;

    cout << "Enter the hours parked for car3: ";
    cin >> parkedHours3;

    double charge1 = calculateCharges(parkedHours1);
    double charge2 = calculateCharges(parkedHours2);
    double charge3 = calculateCharges(parkedHours3);

    double totalReceipts = charge1 + charge2 + charge3;
    double totalParkedHours = parkedHours1 + parkedHours2 + parkedHours3;

    cout << setprecision(2);
    cout << "Car\tHours Parked\tCharge" << endl;
    cout << "1\t" << parkedHours1 << "h" << "\t\t" << charge1 << "$" << endl;
    cout << "2\t" << parkedHours2 << "h" << "\t\t" << charge2 << "$" << endl;
    cout << "3\t" << parkedHours3 << "h" << "\t\t" << charge3 << "$" << endl;
    cout << "Total\t" << totalParkedHours << "h" << "\t\t" << totalReceipts << "$" << endl;

    return 0;
}

double calculateCharges(double hours)
{
    double const HOURLY_CHARGE = 0.5;
    int const MINIMUM_CHARGE = 10;
    int const MIN_HOURS = 3;
    double charge = 2;
    
    if (hours <= MIN_HOURS)
    {
        return charge;
    }
    
    if (hours > MIN_HOURS)
    {
        charge += (HOURLY_CHARGE * (ceil(hours) - MIN_HOURS));
    }
    
    if (charge > MINIMUM_CHARGE)
    {
        charge = MINIMUM_CHARGE;
    }

    return charge;
}