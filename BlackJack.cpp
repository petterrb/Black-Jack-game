#include "BlackJack.h"
#include "std_lib_facilities.h"

BlackJack::BlackJack() {
    int shuffleAmount {100};
    deck.shuffle(shuffleAmount);
    playerHand.drawCard(deck);
    dealerHand.drawCard(deck);
    playerHand.drawCard(deck);
    dealerHand.drawCard(deck);
}


bool BlackJack::drawQuery() {
    bool isDrawing {false};
    string playerInput {""};
    string messageToPlayer {"Do you want to draw another card?"};

    while (playerInput != "y" && playerInput != "n") {
        cout << messageToPlayer << endl;
        cin >> playerInput;
        if (playerInput != "y" && playerInput != "n") {
            cout << "Invalid input." << endl;
            cout << messageToPlayer << endl;
        }
    }

    if (playerInput == "y") {
        isDrawing = true;
    }

    return isDrawing;
}


void BlackJack::playGame() {
    printDealerCards();
}

void BlackJack::dealerDraws() {
    while (dealerHand.valueIsBelow(17)) {
        dealerHand.drawCard(deck);
    }
}


void BlackJack::printDealerCards() {
    cout << "The dealer's first card is the ";
    dealerHand.getHand()[0].toString();
}