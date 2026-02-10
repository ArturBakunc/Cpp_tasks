#include <iostream>
using namespace std;

int main()
{
    int code;

    cout << "Enter 4-digit integer: ";
    cin >> code;
    
    int first = code / 1000; //first digit
    int second = (code / 100) % 10; // second digit
    int third = (code / 10) % 10; // third digit
    int forth = code % 10; // forth digit

    first = (first + 7) % 10; // encrypting each digit by adding 7 and getting remainder after division by 10
    second = (second + 7) % 10; // encrypting each digit by adding 7 and getting remainder after division by 10
    third = (third + 7) % 10; // encrypting each digit by adding 7 and getting remainder after division by 10
    forth = (forth + 7) % 10; // encrypting each digit by adding 7 and getting remainder after division by 10

    cout << "The actual code is " << code << endl;
    cout << "The encryped code is " << third << forth << first << second << endl;
    
    cout << endl;

    int encryped;
    
    cout << "Enter the encryped code: ";
    cin >> encryped;
    
    first = encryped / 1000;
    second = (encryped / 100) % 10; 
    third = (encryped / 10) % 10;
    forth = encryped % 10;

    if (first == 7 || first == 8 || first == 9) //7, 8, 9 case for first digit
    {
        first = first - 7;
    }
    
    else //0, 1, 2, 3, 4, 5, 6 case for first digit
    {
        first = first + 10 - 7;
    }
    
    if (second == 7 || second == 8 || second == 9) //7, 8, 9 case for second digit
    {
        second = second - 7;
    }
    
    else //0, 1, 2, 3, 4, 5, 6 case for second digit
    {
        second = second + 10 - 7;
    }

    if (third == 7 || third == 8 || third == 9) //7, 8, 9 case for third digit
    {
        third = third - 7;
    }
    
    else //0, 1, 2, 3, 4, 5, 6 case for third digit
    {
        third = third + 10 - 7;
    }
    
    if (forth == 7 || forth == 8 || forth == 9) //7, 8, 9 case for forth digit
    {
        forth = forth - 7;
    }   
    
    else //0, 1, 2, 3, 4, 5, 6 case for forth digit
    {
        forth = forth + 10 - 7;
    }

    cout << "The encryped code is " << encryped << endl;
    cout << "The actual code is " << third << forth << first << second << endl;

    return 0;
}