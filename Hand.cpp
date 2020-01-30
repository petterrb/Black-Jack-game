#include "std_lib_facilities.h"
#include "Hand.h"

void Hand::drawCard(CardDeck deck) {
    Card cardToAdd {deck.drawCard()};
    h.push_back(cardToAdd);
    nAces = defAces();
    valueLevels = defValueLevels();
}


int Hand::defAces() {
    int nAcesTemp {0};
    int handLen {int(h.size())};
    for (int i = 0; i < handLen; ++i) {
        if (h[i].getRank() == Rank{14}) {
            nAcesTemp++;
        }
    }
    return nAcesTemp;
}


vector<int> Hand::defValueLevels() {
    vector<int> valueLevelsTemp {};
    int maxValue {0};
    int handLen {int(h.size())};
    for (int i = 0; i < handLen; ++i) {
        maxValue += h[i].getValue();
    }

    for (int i = 0; i <= nAces; ++i) {
        valueLevelsTemp.push_back(maxValue - i*10);
    }
    return valueLevelsTemp;
}


bool Hand::valueIsBelow(int n) {
    bool isBelow {false};
    int valueLevelsLen {int(valueLevels.size())};
    for (int i = 0; i < valueLevelsLen; ++i) {
        if (valueLevels[i] < n) {
            isBelow = true;
            break;
        }
    }
    return isBelow;
}


bool Hand::hardAbove21() {
    bool isAbove21 {true};
    int valueLevelsLen {int(valueLevels.size())};
    for (int i = 0; i < valueLevelsLen; ++i) {
        if (valueLevels[i] < 22) {
            isAbove21 = false;
        }
    }

    return isAbove21;
}


bool Hand::isRealBlackJack() {
    bool isReal {false};
    int hLen {int(h.size())};
    if (highestValue() == 21 && hLen == 2) {
        isReal = true;
    }
    return isReal;
}


int Hand::highestValue() {
    int highest {0};
    int valueLevelsLen {int(valueLevels.size())};
    for (int i = 0; i < valueLevelsLen; ++i) {
        if (valueLevels[i] > highest) {
            highest = valueLevels[i];
        }
    }
    return highest;
}



int Hand::getnAces() {
    return nAces;
}


vector<int> Hand::getValueLevels() {
    return valueLevels;
}


vector<Card> Hand::getHand() {
    return h;
}