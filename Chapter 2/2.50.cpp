#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int grade; 
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    cout << "Enter the letter grades." << endl 
         << "Enter the EOF character to end input." << endl;
    
    while ((grade = cin.get()) != EOF)
    {
        switch (grade)
        {
            case 'A':
            case 'a':
                ++aCount;
                break;

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;
                
            default:
                cout << "Incorrect letter grade entered. "
                     << "Enter a new grade: " << endl;
                break;    
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