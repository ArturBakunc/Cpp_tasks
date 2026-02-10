// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;

// bool isSafe(int board[8][8], int row, int col)
// {
//     for (int i = 0; i < 8; i++)
//     {
//         if (board[row][i] == 1 || board[i][col] == 1)
//         {
//             return false;
//         }
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             if (board[i][j] == 1 && abs(row - i) == abs(col - i))
//             {
//                 return false;
//             }
//         }
//     }
// }

// int squareCounter(int board[8][8], int row, int col)
// {
//     int count = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             if (abs(row - i) == abs(col - j))
//             {
//                 count++;
//                 board[i][j] = count + 14;
//                 cout << board[i][j];
//             }
//         }
//     }
// }

// int main()
// {
//     const int SIZE = 8;
    
//     int chessBoard[SIZE][SIZE] = { 0 };
           
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             squareCounter(chessBoard[][],)
//         }
//     }
// }