#ifndef __CARD_H_INCLUDED__
#define __CARD_H_INCLUDED__
#include "std_lib_facilities.h"

enum class Suit {
    clubs, diamonds, hearts, spades
};

enum class Rank {
    two = 2, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace
};


class Card {
    public:
        Card(Suit suit, Rank rank)
            :s{suit}, r{rank}, v{initCardValue()} {}

        Suit getSuit();
        Rank getRank();
        int  getValue();

        void toString();
        void toStringShort();

    private:
        Suit s;
        Rank r;
        int  v;
        int  initCardValue();
};

#endif