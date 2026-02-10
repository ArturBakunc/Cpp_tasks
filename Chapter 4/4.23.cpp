#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 20;

    int floor[SIZE][SIZE]= {0};
    
    int row = 0;
    int col = 0;
    int direction = 0; // 0=right, 1=down, 2=left, 3=up
    bool penDown = false;
    bool running = true;
    int command;
    int steps;

    
    while (running)
    {
        cout << "1 - Pen up\n" 
             << "2 - Pen down\n"
             << "3 - Turn right\n" 
             << "4 - turn left\n"
             << "5 x - move forward x spaces\n"
             << "6 - print the 20x20 array\n"
             << "9 - End of data\n" 
             << "The turtle is in 0x0 with pen up\n";
        cout << "Enter the command to process: ";
        cin >> command;
        cout << endl;

        switch (command)
        {
            case 1: 
            {
               penDown = false;
               break; 
            }

            case 2:
            {
                penDown = true;
                break;
            }

            case 3:
            {
                direction = (direction + 1) % 4;
                break;
            }

            case 4:
            {
                direction = (direction + 3) % 4;
                break;
            }

            case 5:
            {
                cin >> steps;

                for (int i = 0; i < steps; i++)
                {
                    if (penDown)
                    {
                        floor[row][col] = 1;
                    }

                    if (direction == 0 && col < SIZE - 1)
                    {
                        col++; // right
                    }
                    else if (direction == 1 && row < SIZE - 1)
                    {
                        row++; // down
                    }
                    else if (direction == 2 && col > 0)
                    {
                        col--; // left
                    }
                    else if (direction == 3 && row > 0)
                    {
                        row--; // up
                    }
                }
                break;
            }

            case 6:
            {
                for (int i = 0; i < SIZE; i++)
                {
                    for (int j = 0; j < SIZE; j++)
                    {
                        if (floor[i][j] == 1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break;
            }

            case 9:
            {
                running = false;
                break;
            }

            default:
            {
                cout << "Invalid command, try again:  " << endl;
                break;
            }
        }
    }

    return 0;
}