#include <iostream>
using namespace std;

int flip();

int main()
{
    int heads = 0;
    int tails = 0;

    srand(time(0)); // seed random number generator

    for (int i = 1; i <= 100; i++)
    {
        int result = flip();

        if (result == 1)
        {
            cout << "Heads" << endl;
            heads++;
        }
        else
        {
            cout << "Tails" << endl;
            tails++;
        }
    }

    cout << "\nTotal Heads: " << heads << endl;
    cout << "Total Tails: " << tails << endl;

    return 0;
}

int flip()
{
    return rand() % 2; // 0 = Tails, 1 = Heads
}
