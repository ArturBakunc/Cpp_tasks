// Write statements that assign random integers to   
// the variable n in the following ranges: 
// a)  1  <=  n  <=  2 
// b)  1  <=  n  <=  100 
// c)  0  <=  n  <=  9 
// d)  1000  <=   n   <=   1112   
// e) -1   <=   n   <=   1 
// f) -3   <=   n   <=   11

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    srand(time(0)); 

    int randomNumber;
    int min; 
    int max;

    cout << "Enter the range for random number generation (min max): ";
    cin >> min >> max;

    randomNumber = randomIntegerInRange(min, max);
    cout << "Random integer in range [" << min << ", " << max << "]: " << randomNumber << endl;

    return 0;
}

int randomIntegerInRange(int min, int max)
{
    return rand() % (max - min + 1) + min;
}