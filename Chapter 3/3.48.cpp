// Write function distance that calculates the distance between two points (xl, y1) and 
// (x2, y2). All numbers and return values should be of type double. 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double coordinate1_x;
    double coordinate1_y;

    cout << "Enter the coordinates for the 1st point: ";
    cin >> coordinate1_x >> coordinate1_y;
    
    double coordinate2_x;   
    double coordinate2_y;
    
    cout << "Enter the coordinates for the 2nd point: ";
    cin >> coordinate2_x >> coordinate2_y;

    double distance = sqrt((coordinate1_x - coordinate2_x)*(coordinate1_x - coordinate2_x) + 
                           (coordinate1_y - coordinate2_y)*(coordinate1_y - coordinate2_y));

    cout << "The distance is between A and B is " << distance;
    
    return 0;
}