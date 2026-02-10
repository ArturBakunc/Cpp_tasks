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
    int randomNumber;

    // a)  1  <=  n  <=  2 
    randomNumber = rand() % 2 + 1;
    cout << "Random integer in range [1, 2]: " << randomNumber << endl;

    // b)  1  <=  n  <=  100 
    randomNumber = rand() % 100 + 1;
    cout << "Random integer in range [1, 100]: " << randomNumber << endl;

    // c)  0  <=  n  <=  9 
    randomNumber = rand() % 10;
    cout << "Random integer in range [0, 9]: " << randomNumber << endl;

    // d)  1000  <=   n   <=   1112   
    randomNumber = rand() % 113 + 1000;
    cout << "Random integer in range [1000, 1112]: " << randomNumber << endl;

    // e) -1   <=   n   <=   1 
    randomNumber = rand() % 3 - 1;
    cout << "Random integer in range [-1, 1]: " << randomNumber << endl;

    // f) -3   <=   n   <=   11
    randomNumber = rand() % 15 - 3;
    cout << "Random integer in range [-3, 11]: " << randomNumber << endl;

    return 0;

}