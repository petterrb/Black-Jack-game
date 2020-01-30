#ifndef __CARDDECK_H_INCLUDED__
#define __CARDDECK_H_INCLUDED__

#include "std_lib_facilities.h"
#include "Card.h"


class CardDeck {
    public:
        CardDeck();
        void swap(int ind1, int ind2);
        void print();
        void printShort();
        void shuffle(int n);
        Card drawCard();
    private:
        vector<Card> cards;
};


#endif