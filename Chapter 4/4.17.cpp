#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    const int arrSize = 13;
    int arr[arrSize] = {0};
    int sum;
    
    for (int i = 0; i < 36000; i++)
    {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        
        sum = dice1 + dice2;
        arr[sum]++;
    }

    cout << "Number\t" << "Frequency" << endl;;
    for (int j = 2; j < arrSize; j++)
    {
        cout << j << "\t" << arr[j] << endl;
    } 

    return 0;
}