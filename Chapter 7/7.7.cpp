#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

    static const int DAYS_IN_MONTH[12];
    static const string MONTH_NAMES[12];

    void setDate(int month, int day, int year)
    {
        if (month >= 1 && month <= 12)
        {
            this->month = month;
        }
        else
        {
            this->month = 1;
        }

        if (day >= 1 && day <= 31)
        {
            this->day = day;
        }
        else
        {
            this->day = 1;
        }

        this->year = year;
    }

    int resolveMonthIndex(const string& monthName)
    {
        for (int i = 0; i < 12; i++)
        {
            if (MONTH_NAMES[i] == monthName)
            {
                return i + 1;
            }
        }

        return 1;
    }

    void convertFromDayOfYear(int dayOfYear)
    {
        this->month = 1;

        while (dayOfYear > DAYS_IN_MONTH[this->month - 1])
        {
            dayOfYear = dayOfYear - DAYS_IN_MONTH[this->month - 1];
            this->month = this->month + 1;
        }

        this->day = dayOfYear;
    }

    int calculateDayOfYear() const
    {
        int totalDays = this->day;

        for (int i = 0; i < this->month - 1; i++)
        {
            totalDays = totalDays + DAYS_IN_MONTH[i];
        }

        return totalDays;
    }

public:
    Date(int month, int day, int year)
    {
        setDate(month, day, year);
    }

    Date(string monthName, int day, int year)
    {
        this->year = year;
        this->month = resolveMonthIndex(monthName);
        this->day = day;
    }

    Date(int dayOfYear, int year)
    {
        this->year = year;
        convertFromDayOfYear(dayOfYear);
    }

    void printNumeric() const
    {
        cout << month << "/" << day << "/" << (year % 100);
    }

    void printLong() const
    {
        cout << MONTH_NAMES[month - 1] << " "
             << day << ", "
             << year;
    }

    void printDayOfYear() const
    {
        cout << calculateDayOfYear() << " " << year;
    }
};

const int Date::DAYS_IN_MONTH[12] =
{
    31,28,31,30,31,30,31,31,30,31,30,31
};

const string Date::MONTH_NAMES[12] =
{
    "January","February","March","April","May","June",
    "July","August","September","October","November","December"
};

int main()
{
    Date date1(6, 14, 1992);
    Date date2("June", 14, 1992);
    Date date3(165, 1992);

    cout << "Numeric: ";
    date1.printNumeric();

    cout << "\nLong: ";
    date2.printLong();

    cout << "\nDay of Year: ";
    date3.printDayOfYear();

    cout << endl;

    return 0;
}