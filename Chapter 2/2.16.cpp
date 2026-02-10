#include <iostream>
using namespace std;

int main()
{
    float gallonUsed;
    float mileDriven;
    float gallonCount = 0;
    float mileCount = 0;
    const int NUMBER_TO_END = -1;

    cout << "Enter the number of gallons used (" << NUMBER_TO_END << " to end): ";
    cin >> gallonUsed;
    
    while (gallonUsed != NUMBER_TO_END)
    {
        cout << "Enter the miles driven: ";
        cin >> mileDriven;

        float result = mileDriven / gallonUsed;
        
        cout << "The miles / gallon for this tank was " << result << endl;
        gallonCount += gallonUsed;
        mileCount += mileDriven;

        cout << "Enter the number of gallons used (" << NUMBER_TO_END << " to end): ";
        cin >> gallonUsed;
    }

    if (gallonCount != 0)
    {
        float average = mileCount / gallonCount;
        cout << "The overall average miles/gallon was " << average << endl;
    }

    return 0;
}

