#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int [][13]);
void deal( const int [] [ 13 ] , const char *[] , const char *[] ) ; 
bool containsPair(const int fullDeck[][13]);

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

    shuffle(deck);
    deal(deck, face, suit);

    if (containsPair(deck))
    {
        cout << "\nThe deck contains at least one pair of the same rank.\n";
    }
    else
    {
        cout << "\nNo pairs found.\n";
    }
        
    return 0;
}

void shuffle(int fullDeck[][13])
{
    const int WHOLE_DECK = 52;

    int row;
    int column;

    for (int card = 1; card <= WHOLE_DECK; card++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } 
        while (fullDeck[row] [column] != 0 );
        
        fullDeck[row][column] = card;
    }
}

void deal( const int fullDeck[][13], const char *faceNames[], const char *suitNames[] )
{
    const int WHOLE_DECK = 52;
    const int NUMBER_OF_SUITS = 4;
    const int RANKS = 13;

    for (int card = 1; card <= WHOLE_DECK; card++)
    {
        for (int row = 0; row < NUMBER_OF_SUITS; row++)
        {
            for (int column = 0; column < RANKS; column++)
            {
                if (fullDeck[row][column] == card)
                {
                    cout << setw(5) << faceNames[column] << " of " 
                         << setw(8) << suitNames[row] << (card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}

bool containsPair(const int fullDeck[][13])
{
    const int NUMBER_OF_SUITS = 4;
    const int RANKS = 13;
    
    int rankCount[13] = {0};

    for (int row = 0; row < NUMBER_OF_SUITS; row++)
    {
        for (int col = 0; col < RANKS; col++)
        {
            if (fullDeck[row][col] != 0)
            {
                rankCount[col]++;
                if(rankCount[col] == 2)
                {
                    return true;
                }
            }
        }
    }
    return false;
}