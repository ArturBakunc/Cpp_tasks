#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void guessNumber();

int main()
{
    guessNumber();

    return 0;
}

void guessNumber()
{
    srand(time(0));

    int chosenNumber = rand() % 1000 + 1;
    int userGuess;
    char playAgain;

    cout << "I have a number between 1 and 1000." << endl; 
    cout << "Can you guess my number?" << endl; 
    cout << "Please type your first guess: "; 
    cin >> userGuess;    

    while (userGuess != chosenNumber)
    {
        if (userGuess > chosenNumber)
        {
            cout << "Too high. Try again: " ;
            cin >> userGuess;
        }
        else
        {
            cout << "Too low. Try again: ";
            cin >> userGuess;
        }
    }

    cout << "Excellent! You guessed the number!" << endl;
    cout << "Would you like to play again? (y or n): ";
    cin >> playAgain;

    switch (playAgain)
    {
        case 'y':
        {
            guessNumber();
            break;
        }
        case 'n':
        {
            return;
        }
    }
}