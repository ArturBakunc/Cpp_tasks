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

    int const MIN_NUMBER = 1;
    int const MAX_NUMBER = 1000;

    int chosenNumber = rand() % MAX_NUMBER + MIN_NUMBER;
    int userGuess;
    char playAgain;
    int numberOfAttempts = 1;

    cout << "I have a number between " << MIN_NUMBER <<  " and " << MAX_NUMBER << endl; 
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

        numberOfAttempts++;
    }

    cout << "Excellent! You guessed the number!" << endl;
    cout << "\tYou guessed in " << numberOfAttempts << " tries." << endl;
    
    if (numberOfAttempts < 10)
    {
        cout << "   Either you know the secret or you got lucky!" << endl;
    }
    else if (numberOfAttempts == 10)
    {
        cout << "   You know the secret!" << endl;
    }
    else
    {
        cout << "   You should be able to do better!" << endl;
    }

    cout << endl;

    cout << "Would you like to play again? (yes or no): ";
    cin >> playAgain;
    
    switch (playAgain)
    {
        case 'yes':
        {
            guessNumber();
            break;
        }
        case 'no':
        {
            return;
        }
    }

}