#include <iostream>
#include <iomanip>
using namespace std;

double CelsiusToFahrenheit( double );
double FahrenheitToCelsius( double );

int main()
{
    double celsius;

    cout << "Enter the temperature in celsius to convert to fahrenheit: ";
    cin >> celsius;

    cout << "The " << celsius << " in fahrenheit will be " << CelsiusToFahrenheit(celsius) << endl;

    double fahrenheit;

    cout << "Enter the temperature in fahrenheit to convert to celsius: ";
    cin >> fahrenheit;

    cout << "The " << fahrenheit << " in celsius will be " << FahrenheitToCelsius(fahrenheit) << endl;

    cout << fixed << setprecision(2);
    cout << "Celsius\t\t" << "Fahrenheit" << endl;

    for (int i = 0; i <= 100; i++)
    {
        cout << i << "\t\t" << CelsiusToFahrenheit(i) << endl;
    }

    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit\t" << "Celsius" << endl;

    for (int i = 0; i <= 100; i++)
    {
        cout << i << "\t\t" << FahrenheitToCelsius(i) << endl;
    }
    
    return 0;
}

double CelsiusToFahrenheit(double temperature)
{
    int const CELSIUS_NUMBER = 32;
    
    double temperatureInFahrenheit = (temperature * 1.8) + CELSIUS_NUMBER;

    return temperatureInFahrenheit;
}

double FahrenheitToCelsius(double temperature)
{
    int const CELSIUS_NUMBER = 32;
    
    double temperatureInCelsius = (temperature - CELSIUS_NUMBER) * static_cast<double>(5) / 9;

    return temperatureInCelsius;
}
