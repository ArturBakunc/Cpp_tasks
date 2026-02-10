#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 8;
   
    int chessBoard[SIZE][SIZE] = {0};
    int horisontal[8] = {2, 1, -1, -2, -2, -1, 1, 2}; 
    int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1}; 

    int currentRow = 0;
    int currentCol = 0;
    int moveCount = 1;
    
    chessBoard[currentRow][currentCol] = moveCount;

    bool moved;

    while (true)
    {
        moved = false;

        for (int i = 0; i < 8; i++)
        {
            int newRow = currentRow + vertical[i];
            int newCol = currentCol + horisontal[i];
            
            if (newCol >= 0 && newCol < SIZE && newRow >= 0 && newRow < SIZE && chessBoard[newRow][newCol] == 0)
            {
                currentRow = newRow;
                currentCol = newCol;
                moveCount++;
                chessBoard[currentRow][currentCol] = moveCount;
                moved = true;
                break;
            }
        }

        if (!moved)
        {
            break;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << setw(3) << chessBoard[i][j] << " ";  
        }
        cout << endl;
    }

    cout << "The total number of moves is " << moveCount;

    return 0;
}