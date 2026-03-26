#include <iostream>
using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 3;
const int MAX_SQUARE = 9;

class TicTacToe
{
private:
    int table[ROW_SIZE][COL_SIZE];

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
    
    bool check(int player)
    {
        // ROWS + COLUMNS
        for (int i = 0; i < ROW_SIZE; i++)
        {
            int countRow = 0;
            int countColumn = 0;

            for (int j = 0; j < COL_SIZE; j++)
            {
                if (table[i][j] == player)
                {
                    countRow++;
                }

                if (table[j][i] == player)
                {
                    countColumn++;
                }
            }

            if (countRow == ROW_SIZE || countColumn == ROW_SIZE)
            {
                return true;
            }
        }

        // DIAGONALS
        int diagonalCount = 0;
        int reverseDiagonalCount = 0;

        for (int i = 0; i < ROW_SIZE; i++)
        {
            if (table[i][i] == player)
            {
                diagonalCount++;
            }

            if (table[i][COL_SIZE - 1 - i] == player)
            {
                reverseDiagonalCount++;
            }
        }

        if (diagonalCount == ROW_SIZE || reverseDiagonalCount == ROW_SIZE)
        {
            return true;
        }

        return false;
    }
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

        if (i % 2 == 0)
        {
            if (table.check(1))
            {
                table.print();
                cout << "X won\n";
                return 0;
            }
        }
        else
        {
            if (table.check(2))
            {
                table.print();
                cout << "O won\n";
                return 0;
            }
        }
    }

    table.print();
    cout << "Game ended in a draw.\n";

    return 0;
}