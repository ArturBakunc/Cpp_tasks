#include <iostream>
#include <cmath>
using namespace std;

int secondsAfter12( int, int, int );

int main()
{
    int hour;
    int minutes;
    int seconds;

    cout << "Enter the hour, minutes, seconds: ";
    cin >> hour >> minutes >> seconds;
    
    int finalSeconds = secondsAfter12(hour, minutes, seconds);

    cout << "The last time the clock struck 12 was " << finalSeconds << " seconds ago" << endl;

    return 0;
}

int secondsAfter12(int a, int b, int c)
{
    int const MAX_HOURS = 24;
    int const MAX_MINUTES = 60;
    int const MAX_SECONDS = 60;
    int const MEDIUM_HOURS = 12;
    int const SECONDS_IN_HOUR = 3600;
    int const SECONDS_IN_MINUTE = 60;
    int seconds = 0;

    if (a >= MAX_HOURS)
    {
        cout << "Incorrect hour! " << endl;
        return false;
    }
    else if (a >= MEDIUM_HOURS)
    {
        a = a - MEDIUM_HOURS;
    }
    seconds += a * SECONDS_IN_HOUR;

    if (b >= MAX_MINUTES)
    {
        cout << "Incorrect minute! " << endl;
        return false;
    }
    else
    {
        seconds += b * SECONDS_IN_MINUTE;
    }

    if (c >= MAX_SECONDS)
    {
        cout << "Incorrect seconds! " << endl;
        return false;
    }
    else
    {
        seconds += c;
    }

    return seconds;
}