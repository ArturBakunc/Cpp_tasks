#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int NUMBER_TO_END = -1;

    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int grade; 
    
    cout << "Enter the letter grades." << endl 
         << "Enter the EOF character to end input." << endl;
        cin >> grade;

    while (grade != NUMBER_TO_END)
    {
        switch (grade)
        {
            case 'A':
            case 'a':
            {
                ++aCount;
                break;
            }

            case 'B':
            case 'b':
            {
                ++bCount;
                break;
            }

            case 'C':
            case 'c':
            {
                ++cCount;
                break;
            }

            case 'D':
            case 'd':
            {
                ++dCount;
                break;
            }

            case 'F':
            case 'f':
            {
                ++fCount;
                break;
            }
                
            default:
            {
                cout << "Incorrect letter grade entered. "
                     << "Enter a new grade: " << endl;
                cin >> grade;
                break;    
            }
        }
    }
    
    int total = aCount * 4 + bCount * 3 + cCount * 2 + dCount * 1 + fCount * 0;
    int count = aCount + bCount + cCount + dCount + fCount;
    double average = static_cast<double>(total) / count;

    cout << "\n\nTotals for each letter grade are:"
         << "\nA: " << aCount
         << "\nB: " << bCount
         << "\nC: " << cCount
         << "\nD: " << dCount
         << "\nF: " << fCount
         << endl;
    
    cout << "The average of the class is " << average << endl;
    
    return 0;
}