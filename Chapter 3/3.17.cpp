#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int number1;
    int number2;
    int number3;

    srand(time(0)); // Seed for random number generation

    number1 = 2 + 2 * (rand() % 5);
    cout << "Random integer from the set [2, 4, 6, 8, 10]: " << number1 << endl;

    number2 = 3 + 2 * (rand() % 5);
    cout << "Random integer from the set [3, 5, 7, 9, 11]: " << number2 << endl;

    number3 = 6 + 4 * (rand() % 5);
    cout << "Random integer from the set [6, 10, 14, 18, 22]: " << number3 << endl;
   
    return 0;
}