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

int qualityPoints ( int a )
{
    int point;

    if (a >= 90 && a <= 100)
    {
        point = 4;
    }
    else if( a >= 80 && a <= 89)
    {
        point = 3;
    }
    else if( a >= 70 && a <= 79 )
    {
        point = 2;
    }
    else if( a >= 60 && a <= 69 )
    {
        point = 1;
    }
    else if ( a < 60 )
    {
        point = 0;
    }

    return point;
}

