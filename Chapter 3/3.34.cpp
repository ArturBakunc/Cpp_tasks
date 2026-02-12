#include <iostream>
using namespace std;

int flip();

int main()
{
    int heads = 0;
    int tails = 0;

    srand(time(0));

    for (int i = 1; i <= 100; i++)
    {
        int result = flip();

        if (result == 1)
        {
            heads++;
        }
        else
        {
            tails++;
        }
    }

    cout << "Total Heads: " << heads << endl;
    cout << "Total Tails: " << tails << endl;

    return 0;
}

int flip()
{
    return rand() % 2; // 0 = Tails, 1 = Heads
}
