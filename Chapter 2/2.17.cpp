#include <iostream>
using namespace std;

int main()
{
    int accountNumber;
    float beginningBalance; 
    float totalCharges; 
    float totalCredits; 
    float creditLimit;
    const int NUMBER_TO_END = -1;

    cout << "Enter account number (" << NUMBER_TO_END << " to end): ";
    cin >> accountNumber;
    
    while (accountNumber != NUMBER_TO_END)
    {
        cout << "Enter beggining balance: ";
        cin >> beginningBalance;

        cout << "Enter totoal charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;
        
        cout << "Enter credit limit: ";
        cin >> creditLimit;
        
        float newBalance = beginningBalance + totalCharges - totalCredits;
        
        if (newBalance > creditLimit)
        {
            cout << "Account: " << accountNumber << endl;
            cout << "Credit limit: " << creditLimit << endl;
            cout << "Balance: " << newBalance << endl;
            cout << "Credit limit Exceeded." << endl;
        }
        
        cout << "\n";

        cout << "Enter account number (" << NUMBER_TO_END << " to end): ";
        cin >> accountNumber;
    }

    return 0;
}
