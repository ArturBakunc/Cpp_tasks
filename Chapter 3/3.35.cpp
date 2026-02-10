#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void multiplicationGenerator();

int main()
{
    multiplicationGenerator();

    return 0;
}

void multiplicationGenerator()
{
    srand(time(0));

    while (true)
    {
        int answer;
        int a = rand() % 10;
        int b = rand() % 10;

        cout << "How much is " << a << " times " << b << "? (Enter -1 to quit): ";
        cin >> answer;

        if (answer == -1)
        {
            break;
        }
        
        while (answer != a * b)
        {
            cout << "No. Please try again." << endl;
            cout << "How much is " << a << " times " << b << "? (Enter -1 to quit): ";
            cin >> answer;

            if (answer == -1)
            {
                return;
            }
        }

        cout << "Well done!" << endl << endl;
    }
}

