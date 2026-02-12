#include <iostream>
#include <cmath>
using namespace std;

int randomNumberFromSet( int, int, int );

int main()
{   
    srand(time(0));
    
    int randomNumber;
    int firstNumber;
    int step;
    int numberOfElementsInSet;

    cout << "Enter the first number in the set: ";
    cin >> firstNumber;

    cout << "Enter the step of the set: ";
    cin >> step;

    cout << "Enter the number of elements in the set: ";
    cin >> numberOfElementsInSet;

    randomNumber = randomNumberFromSet(firstNumber, step, numberOfElementsInSet);

    cout << "The random number from the set is " << randomNumber;

    return 0;
}

int randomNumberFromSet(int firstNumber, int step, int numberOfElementsInSet)
{
    return firstNumber + step * (rand() % numberOfElementsInSet);
}