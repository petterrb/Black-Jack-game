#ifndef __HAND_H_INCLUDED__
#define __HAND_H_INCLUDED__
#include "std_lib_facilities.h"
#include "CardDeck.h"
#include "Card.h"

class Hand {
    public:
        Hand()
            :valueLevels{defValueLevels()}, nAces{defAces()} {}
        
        void drawCard(CardDeck deck);
        int getnAces(); // might not be useful
        vector<int> getValueLevels();
        vector<Card> getHand();
        bool valueIsBelow(int n);   // any value level is <n.
        bool hardAbove21();         // all value levels are above 21
        bool isRealBlackJack();
        int highestValue();
        
    private:
        vector<Card> h;
        vector<int> valueLevels;
        int nAces;

        int defAces();
        vector<int> defValueLevels();
};


#endif