#include <iostream>
using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 3;
const int MAX_SQUARE = 9;

class TicTacToe
{
public:
    TicTacToe()
    {
        for (int i = 0; i < ROW_SIZE; i++)
        {
            for (int j = 0; j < COL_SIZE; j++)
            {
                table[i][j] = 0;
            }
        }
    }

    void print()
    {
        cout << endl;

        for (int i = 0; i < ROW_SIZE; i++)
        {
            for (int j = 0; j < COL_SIZE; j++)
            {
                if (table[i][j] == 1)
                {
                    cout << "X ";
                }
                else if (table[i][j] == 2)
                {
                    cout << "O ";
                }
                else
                {
                    cout << ". ";
                }
            }
            cout << endl;
        }

        cout << endl;
    }

    void moveX()
    {
        int row;
        int column;

        cout << "Enter the row and column to put the X: ";
        cin >> row >> column;

        if (row < 0 || row > 2 || column < 0 || column > 2)
        {
            cout << "Invalid position.\n";
            moveX();
            return;
        }

        if (table[row][column] == 0)
        {
            table[row][column] = 1;
        }
        else
        {
            cout << "Square already taken.\n";
            moveX();
        }
    }

    void moveO()
    {
        int row;
        int column;

        cout << "Enter the row and column to put the O: ";
        cin >> row >> column;

        if (row < 0 || row > 2 || column < 0 || column > 2)
        {
            cout << "Invalid position.\n";
            moveO();
            return;
        }

        if (table[row][column] == 0)
        {
            table[row][column] = 2;
        }
        else
        {
            cout << "Square already taken.\n";
            moveO();
        }
    }

    int check()
    {
        if (table[0][0] == 1 && table[0][1] == 1 && table[0][2] == 1 || // first row
            table[1][0] == 1 && table[1][1] == 1 && table[1][2] == 1 || // second row
            table[2][0] == 1 && table[2][1] == 1 && table[2][2] == 1 || // third row
            table[0][0] == 1 && table[1][0] == 1 && table[2][0] == 1 || // first column
            table[0][1] == 1 && table[1][1] == 1 && table[2][1] == 1 || // second column
            table[0][2] == 1 && table[1][2] == 1 && table[2][2] == 1 || // third column
            table[0][0] == 1 && table[1][1] == 1 && table[2][2] == 1 || // diagonal 1
            table[2][0] == 1 && table[1][1] == 1 && table[0][2] == 1 )  // diagonal 2
        {
            cout << "X team won." << endl;
            return 0;
        }

        else if (table[0][0] == 2 && table[0][1] == 2 && table[0][2] == 2 || // first row
                 table[1][0] == 2 && table[1][1] == 2 && table[1][2] == 2 || // second row
                 table[2][0] == 2 && table[2][1] == 2 && table[2][2] == 2 || // third row 
                 table[0][0] == 2 && table[1][0] == 2 && table[2][0] == 2 || // first column
                 table[0][1] == 2 && table[1][1] == 2 && table[2][1] == 2 || // second column
                 table[0][2] == 2 && table[1][2] == 2 && table[2][2] == 2 || // third column
                 table[0][0] == 2 && table[1][1] == 2 && table[2][2] == 2 || // diagonal 1
                 table[2][0] == 2 && table[1][1] == 2 && table[0][2] == 2 )  // diagonal 2
        {
            cout << "O team won. " << endl;
            return 0;
        }
        else
        {
            return 1;
        }
    }

private:
    int table[ROW_SIZE][COL_SIZE];
};

int main()
{
    TicTacToe table;

    for (int i = 0; i < MAX_SQUARE; i++)
    {
        table.print();

        if (i % 2 == 0)
        {
            table.moveX();
        }
        else
        {
            table.moveO();
        }

        if (table.check() == 0)
        {
            table.print();
            return 0;
        }
    }

    table.print();
    cout << "Game ended in a draw.\n";

    return 0;
}