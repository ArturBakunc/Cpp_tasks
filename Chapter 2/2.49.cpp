#include <iostream>
using namespace std;

int main()
{
    double total = 0;
    
    for (int day = 1; day <= 7; day++)
    {
        cout << "\nDay " << day << " sales (enter 0 as product number to finish):\n";

        int number;
        
        while (true)
        {
            cout << "Enter product number (1-5, 0 to quit): ";
            cin >> number;

            if (number == 0) 
            {
                break;
            }
                
            int quantity;
            double price = 0;

            switch(number)
            {
                case 1: 
                {
                    price = 2.98; 
                    break;
                }
                case 2: 
                {
                    price = 4.50; 
                    break;
                }
                case 3: 
                {
                    price = 9.98; 
                    break;
                }
                case 4: 
                {
                    price = 4.49; 
                    break;
                }
                case 5: 
                {
                    price = 6.87; 
                    break;
                }
                default:
                {
                    cout << "Invalid product number.\n";
                    continue; 
                }
            }

            cout << "Enter quantity sold: ";
            cin >> quantity;

            total += quantity * price;
        }
    }

    cout << "\nTotal retail value for the week: $" << total << endl;

    return 0;
}
