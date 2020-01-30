#include "CardDeck.h"
#include "std_lib_facilities.h"
#include "utilities.h"

CardDeck::CardDeck() {
    for (int nSuit = 0; nSuit < 4; ++nSuit) {
        for (int nRank = 2; nRank < 15; ++nRank) {
            cards.push_back(Card{Suit{nSuit}, Rank{nRank}});
        }
    }
}


void CardDeck::swap(int ind1, int ind2) {
    Card card1 {cards[ind1]};
    Card card2 {cards[ind2]};
    cards[ind1] = card2;
    cards[ind2] = card1;
}


void CardDeck::print() {
    int cardsLen {int(cards.size())};
    for (int i = 0; i < cardsLen; ++i) {
        cards[i].toString();
    }
}


void CardDeck::printShort() {
    int cardsLen {int(cards.size())};
    for (int i = 0; i < cardsLen; ++i) {
        cards[i].toStringShort();
    }
}


void CardDeck::shuffle(int n) {
    int cardsLen {int(cards.size())};
    for (int i = 0; i < n; ++i) {
        swap(randomWithLimits(0, cardsLen-1), randomWithLimits(0, cardsLen-1));
    }
}


Card CardDeck::drawCard() {
    int cardsLen {int(cards.size())};
    Card cardToDraw {cards[cardsLen-1]};
    cards.pop_back();
    return cardToDraw;
}