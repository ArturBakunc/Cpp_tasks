#include <iostream>
using namespace std;

int secondsAfter12( int, int, int );

int main()
{
    int hour;
    int minutes;
    int seconds;

    cout << "Enter the hour, minutes, seconds: ";
    cin >> hour >> minutes >> seconds;
    
    int totalSeconds = secondsAfter12(hour, minutes, seconds);

    cout << "The last time the clock struck 12 was " << totalSeconds << " seconds ago" << endl;

    return 0;
}

int secondsAfter12(int hour, int minutes, int seconds)
{
    int const MAX_HOURS = 24;
    int const MAX_MINUTES = 60;
    int const MAX_SECONDS = 60;
    int const MEDIUM_HOURS = 12;
    int const SECONDS_IN_HOUR = 3600;
    int const SECONDS_IN_MINUTE = 60;
    int totalSeconds = 0;

    if (hour >= MAX_HOURS)
    {
        cout << "Incorrect hour! " << endl;
        return false;
    }
    else if (hour >= MEDIUM_HOURS)
    {
        hour = hour - MEDIUM_HOURS;
    }
    totalSeconds += hour * SECONDS_IN_HOUR;

    if (minutes >= MAX_MINUTES)
    {
        cout << "Incorrect minute! " << endl;
        return false;
    }
    else
    {
        totalSeconds += minutes * SECONDS_IN_MINUTE;
    }

    if (seconds >= MAX_SECONDS)
    {
        cout << "Incorrect seconds! " << endl;
        return false;
    }
    else
    {
        totalSeconds += seconds;
    }

    return totalSeconds;
}