// Write function distance that calculates the distance between two points (xl, y1) and (x2, 
// y2). All numbers and return values should be of type double. 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1;
    double y1;

    cout << "Enter the cordinates for the 1st point: ";
    cin >> x1 >> y1;
    
    double x2;   
    double y2;
    
    cout << "Enter the cordinates for the 2nd point: ";
    cin >> x2 >> y2;

    double distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

    cout << "The distance is between A and B is " << distance;
    
    return 0;
}