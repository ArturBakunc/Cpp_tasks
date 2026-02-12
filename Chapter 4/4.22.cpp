#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int rowSize = 5;
    const int colSize = 4;
    const int MIN_PRODUCT_NUMBER = 1;
    const int MAX_PRODUCT_NUMBER = 5;
    const int MIN_SALESPERSON_NUMBER = 1;
    const int MAX_SALESPERSON_NUMBER = 4;
    const int NUMBER_TO_END = -1;

    double shop[rowSize][colSize] = { 0 };

    while (true)
    {
        int salespersonNumber;
        int productNumber;
        double sales;

        cout << "Enter the salesperson number (" << NUMBER_TO_END << " to end): ";
        cin >> salespersonNumber;

        if (salespersonNumber == NUMBER_TO_END)
        {
            break;
        }

        if (salespersonNumber < MIN_SALESPERSON_NUMBER || salespersonNumber > MAX_SALESPERSON_NUMBER)
        {
            cout << "Incorrect badge number: Try again. " << endl;
            continue;
        }

        cout << "Enter the product number (" << NUMBER_TO_END << " to end): ";
        cin >> productNumber;

        if (productNumber == NUMBER_TO_END)
        {
            break;
        }
        
        if (productNumber < MIN_PRODUCT_NUMBER || productNumber > MAX_PRODUCT_NUMBER)
        {
            cout << "Incorrect product number: Try again. " << endl;
            continue;
        }

        cout << "Enter the sales of the product: ";
        cin >> sales;

        shop[productNumber - 1][salespersonNumber - 1] += sales;
    }

    double total = 0;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            total += shop[i][j];
        } 
    }

    cout << setw(38) <<"Salesperson\n";
    cout << "Product"
     << setw(10) << "1"
     << setw(10) << "2"
     << setw(10) << "3"
     << setw(10) << "4"
     << endl;


for (int i = 0; i < rowSize; i++)
{
    cout << setw(7) << i + 1;

    for (int j = 0; j < colSize; j++)
    {
        cout << setw(10) << shop[i][j];
    }
    cout << endl;
}
    cout << "The total sum of all products is " << total << "$" << endl;

    return 0;
}