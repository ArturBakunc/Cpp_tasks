#include <iostream>
using namespace std;

int main() 
{
    int seats[10] = {0}; // 0 = empty, 1 = occupied
    int choice;
    bool running = true;

    while (running) 
    {
        cout << "Please type 1 for First Class\n";
        cout << "Please type 2 for Economy\n";
        cin >> choice;

        bool seatAssigned = false;

        if (choice == 1) //first class
        { 
            for (int i = 0; i < 5; i++) 
            {
                if (seats[i] == 0) 
                {
                    seats[i] = 1;
                    cout << "Boarding Pass:\n";
                    cout << "Seat Number: " << i + 1 << "\n";
                    cout << "Section: First Class\n\n";
                    seatAssigned = true;
                    break;
                }
            }

            if (!seatAssigned) 
            {
                cout << "First Class is full. Accept Economy? (1 = Yes, 0 = No): ";
                int answer;
                cin >> answer;

                if (answer == 1) 
                {
                    for (int i = 5; i < 10; i++) 
                    {
                        if (seats[i] == 0) 
                        {
                            seats[i] = 1;
                            cout << "Boarding Pass:\n";
                            cout << "Seat Number: " << i + 1 << "\n";
                            cout << "Section: Economy\n\n";
                            seatAssigned = true;
                            break;
                        }
                    }
                } 
                else 
                {
                    cout << "Next flight leaves in 3 hours.\n\n";
                }
            }
        }

        else if (choice == 2) // Economy
        {    
            for (int i = 5; i < 10; i++) 
            {
                if (seats[i] == 0) 
                {
                    seats[i] = 1;
                    cout << "Boarding Pass:\n";
                    cout << "Seat Number: " << i + 1 << "\n";
                    cout << "Section: Economy\n\n";
                    seatAssigned = true;
                    break;
                }
            }

            if (!seatAssigned) 
            {
                cout << "Economy is full. Accept First Class? (1 = Yes, 0 = No): ";
                int answer;
                cin >> answer;

                if (answer == 1) 
                {
                    for (int i = 0; i < 5; i++) 
                    {
                        if (seats[i] == 0) 
                        {
                            seats[i] = 1;
                            cout << "Boarding Pass:\n";
                            cout << "Seat Number: " << i + 1 << "\n";
                            cout << "Section: First Class\n\n";
                            seatAssigned = true;
                            break;
                        }
                    }
                } 
                else 
                {
                    cout << "Next flight leaves in 3 hours.\n\n";
                }
            }
        }

        else 
        {
            cout << "Invalid choice.\n\n";
        }

        // Check if all seats are full
        bool full = true;
        for (int i = 0; i < 10; i++) 
        {
            if (seats[i] == 0) 
            {
                full = false;
                break;
            }
        }

        if (full) 
        {
            cout << "All seats are booked.\n";
            running = false;
        }
    }

    return 0;
}
