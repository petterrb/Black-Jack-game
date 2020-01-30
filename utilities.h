#ifndef __UTILITIES_H_INCLUDED__
#define __UTILITIES_H_INCLUDED__
#include "std_lib_facilities.h"
#include "Card.h"

string suitToString(Suit suit);
string rankToString(Rank rank);

bool playAgainQuery();

void seedRand();
int randomWithLimits(int lowerBound, int higherBound);
#endif