#include <iostream>
using namespace std;

class SavingsAccount
{
private:
    double savingsBalance;                  
    static double annualInterestRate;      

public:
    SavingsAccount(double initialBalance) 
    {
        savingsBalance = initialBalance;
    }

    void CalculateMonthlyInterest() 
    {
        const double PERCENT_DIVISOR = 100.0;
        const int MONTHS_IN_YEAR = 12;

        double monthlyInterest = savingsBalance * (annualInterestRate / PERCENT_DIVISOR) / MONTHS_IN_YEAR;
    }

    static void ModifyInterestRate(double newRate) 
    {
        annualInterestRate = newRate;
    }

    double GetBalance() const 
    {
        return savingsBalance;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main() 
{
    SavingsAccount saver1(2000.0);
    SavingsAccount saver2(3000.0);

    SavingsAccount::ModifyInterestRate(3.0);

    saver1.CalculateMonthlyInterest();
    saver2.CalculateMonthlyInterest();

    cout << "Balances after 3% interest:" << endl;
    cout << "Saver1: $" << saver1.GetBalance() << endl;
    cout << "Saver2: $" << saver2.GetBalance() << endl;

    SavingsAccount::ModifyInterestRate(4.0);

    saver1.CalculateMonthlyInterest();
    saver2.CalculateMonthlyInterest();

    cout << "\nBalances after 4% interest:" << endl;
    cout << "Saver1: $" << saver1.GetBalance() << endl;
    cout << "Saver2: $" << saver2.GetBalance() << endl;

    return 0;
}