#include "std_lib_facilities.h"
#include "Card.h"
#include "utilities.h"
#include "CardDeck.h"
#include "BlackJack.h"
int main() {
	seedRand();
	bool playAgain {true};
	while (playAgain) {
		BlackJack game;
		game.playGame();
		playAgain = playAgainQuery();
	}
	
	keep_window_open();
	return 0;
}