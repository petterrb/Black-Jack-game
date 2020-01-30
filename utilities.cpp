#include "std_lib_facilities.h"
#include "utilities.h"
#include "Card.h"


string suitToString(Suit suit) {
    map<Suit, string> SuitStrMap {
        {Suit::clubs, "Clubs"},
        {Suit::diamonds, "Diamonds"},
        {Suit::hearts, "Hearts"},
        {Suit::spades, "Spades"}
    };

    return SuitStrMap[suit];
}

string rankToString(Rank rank) {
    map<Rank, string> RankStrMap {
        {Rank::two, "Two"},
        {Rank::three, "Three"},
        {Rank::four, "Four"},
        {Rank::five, "Five"},
        {Rank::six, "Six"},
        {Rank::seven, "Seven"},
        {Rank::eight, "Eight"},
        {Rank::nine, "Nine"},
        {Rank::ten, "Ten"},
        {Rank::jack, "Jack"},
        {Rank::queen, "Queen"},
        {Rank::king, "King"},
        {Rank::ace, "Ace"}
    };

    return RankStrMap[rank];
}

bool playAgainQuery() {
    bool isPlaying {false};
    string playerInput {""};
    string messageToPlayer {"Do you want to play again?"};

    while (playerInput != "y" && playerInput != "n") {
        cout << messageToPlayer << endl;
        cin >> playerInput;
        if (playerInput != "y" && playerInput != "n") {
            cout << "Invalid input." << endl;
            cout << messageToPlayer << endl;
        }
    }

    if (playerInput == "y") {
        isPlaying = true;
    }

    return isPlaying;
}




void seedRand() {
    srand(static_cast<unsigned int>(time(nullptr)));
}


int randomWithLimits(int lowerBound, int higherBound) {
    return rand() % (higherBound - lowerBound + 1) + lowerBound;
}