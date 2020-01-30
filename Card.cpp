#include "Card.h"
#include "utilities.h"

int Card::initCardValue()  {
    int cardRank {int(r)};
    int cardValue {cardRank};
    if (11 <= cardRank && cardRank <= 13) {
        cardValue = 10;
    }

    else if (cardRank == 14) {
        cardValue = 11;
    }

    return cardValue;
}

Suit Card::getSuit() {
    return s;
}


Rank Card::getRank() {
    return r;
}


void Card::toString() {
    cout << rankToString(r) << " of " << suitToString(s) << endl;
}


void Card::toStringShort() {
    cout << suitToString(s)[0] << int(r) << endl;
}