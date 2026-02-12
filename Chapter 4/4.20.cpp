#include <iostream>
using namespace std;

bool assignSeat(int seats[], int start, int end, int sectionCode);
bool isFull(int seats[], int size);
void printBoardingPass(int seatNumber, int sectionCode);

const int TOTAL_SEATS = 10;
const int FIRST_CLASS_SEATS_START = 0;
const int FIRST_CLASS_SEATS_END = 5;
const int ECONOMY_SEATS_START = 5;
const int ECONOMY_SEATS_END = 10;
const int FIRST_CLASS_CODE = 1;
const int ECONOMY_CODE = 2;

int main() 
{
    int seats[TOTAL_SEATS] = { 0 };
    int choice;
    bool running = true;

    while (running) 
    {
        cout << "Please type 1 for First Class\n";
        cout << "Please type 2 for Economy\n";
        cin >> choice;

        bool seatAssigned = false;

        if (choice == 1)
        {
            seatAssigned = assignSeat(seats, FIRST_CLASS_SEATS_START, FIRST_CLASS_SEATS_END, FIRST_CLASS_CODE);

            if (!seatAssigned)
            {
                cout << "First Class is full. Accept Economy? (1 = Yes, 0 = No): ";
                int answer;
                cin >> answer;

                if (answer == 1)
                {
                    assignSeat(seats, ECONOMY_SEATS_START, ECONOMY_SEATS_END, ECONOMY_CODE);
                }
                else
                {
                    cout << "Next flight leaves in 3 hours.\n\n";
                }
            }
        }
        else if (choice == 2)
        {
            seatAssigned = assignSeat(seats, ECONOMY_SEATS_START, ECONOMY_SEATS_END, ECONOMY_CODE);

            if (!seatAssigned)
            {
                cout << "Economy is full. Accept First Class? (1 = Yes, 0 = No): ";
                int answer;
                cin >> answer;

                if (answer == 1)
                {
                    assignSeat(seats, FIRST_CLASS_SEATS_START, FIRST_CLASS_SEATS_END, FIRST_CLASS_CODE);
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

        if (isFull(seats, TOTAL_SEATS))
        {
            cout << "All seats are booked.\n";
            running = false;
        }
    }

    return 0;
}

bool assignSeat(int seats[], int start, int end, int sectionCode)
{
    for (int i = start; i < end; i++)
    {
        if (seats[i] == 0)
        {
            seats[i] = 1; 
            printBoardingPass(i + 1, sectionCode);
            return true;
        }
    }

    return false;
}

void printBoardingPass(int seatNumber, int sectionCode)
{
    cout << "Boarding Pass:\n";
    cout << "Seat Number: " << seatNumber << "\n";

    if (sectionCode == FIRST_CLASS_CODE)
    {
        cout << "Section: First Class\n\n";
    }
    else if (sectionCode == ECONOMY_CODE)
    {
        cout << "Section: Economy\n\n";
    }
}

bool isFull(int seats[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (seats[i] == 0)
        {
            return false;
        }
    }

    return true;
}
