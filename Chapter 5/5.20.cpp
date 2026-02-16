#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffleAndDeal( int [] [ 13 ] , const char *[] , const char *[] ) ; 

int main()
{
    const int NUMBER_OF_SUITS = 4;
    const int RANKS = 13;

    const char *suit[NUMBER_OF_SUITS] = {"Hearts", "Diamonds" , "Clubs", "Spades" } ; 

    const char *face[RANKS] = {"Ace", "Deuce", "Three", "Four", 
                                "Five", "Six", "Seven", "Eight", 
                                "Nine", "Ten", "Jack", "Queen", "King" } ;
    
    int deck[NUMBER_OF_SUITS][RANKS] = {0};

    srand(time(0));

    shuffleAndDeal(deck, face, suit);
        
    return 0;
}

void shuffleAndDeal( int fullDeck[][13], const char *faceNames[], const char *suitNames[] )
{
    const int WHOLE_DECK = 52;
    const int NUMBER_OF_SUITS = 4;
    const int RANKS = 13;

    int row;
    int column;

    for (int card = 1; card <= WHOLE_DECK; card++)
    {
        do
        {
            row = rand() % NUMBER_OF_SUITS;
            column = rand() % RANKS;
        } 
        while (fullDeck[row][column] != 0 );
        
        fullDeck[row][column] = card;

        cout << setw(5) << faceNames[column] << " of " 
        << setw(8) << suitNames[row] << (card % 2 == 0 ? '\n' : '\t');
    }
}

