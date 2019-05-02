// BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"

using namespace std;

int main()
{
	srand((int)time(NULL));

	Player objDealer;
	Player objPlayer;
	Deck objDeck = Deck(4);

	//cout << objCard.toString() << endl;
	objDealer.setPlayerName("Dealer");
	cout << objDealer.toString() << endl;
	cout << objPlayer.toString() << endl;

	//objPlayer.inputPlayerBet();

	objDeck.shuffle();

	for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
		objDealer.addCard(objDeck.getCard());
		objPlayer.addCard(objDeck.getCard());
	}

	//Should add some logic to prevent adding more cards that needed
	while (objDealer.getHandPointValue() <= 16) {
		objDealer.addCard(objDeck.getCard());
	}

	cout << objDealer.toString() << endl;
	cout << objPlayer.toString() << endl;

	if (objDeck.shouldShuffle()) {
		objDeck.shuffle();
	}

	if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {
		// TODO: Add logic for game win conditions.
	}

	return 0;
}
