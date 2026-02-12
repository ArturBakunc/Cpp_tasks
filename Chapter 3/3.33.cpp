#include <iostream>
using namespace std;

int qualityPoints ( int );

int main()
{
    int grade;
    
    cout << "Enter your grade (0-100): ";
    cin >> grade;

    cout << "Your point is " << qualityPoints(grade);

    return 0;
}

int qualityPoints ( int grade )
{
    int point;

    if (grade >= 90 && grade <= 100)
    {
        point = 4;
    }
    else if( grade >= 80 && grade <= 89)
    {
        point = 3;
    }
    else if( grade >= 70 && grade <= 79 )
    {
        point = 2;
    }
    else if( grade >= 60 && grade <= 69 )
    {
        point = 1;
    }
    else if ( grade < 60 )
    {
        point = 0;
    }

    return point;
}

