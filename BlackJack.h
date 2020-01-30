#ifndef __BLACKJACK_H_INCLUDED__
#define __BLACKJACK_H_INCLUDED__

#include "CardDeck.h"
#include "Card.h"
#include "Hand.h"

class BlackJack {
    public:
        BlackJack();
        bool drawQuery();
        void playGame();
        void dealerDraws();
        void printDealerCards();
        void printPlayerCards();
    private:
        Hand playerHand;
        Hand dealerHand;
        CardDeck deck;
};

#endif