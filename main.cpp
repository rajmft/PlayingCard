#include <stdio.h>
#include <iostream>
#include <string>

#include "card.h"


int main(int argc, char** argv) {

	//Card Creation
	card card1("8", "Hearts");
	card card2("2", "Spades");
	card card3("Jack", "Diamonds");
	card card4("King", "Spades");
	card card5("8", "Clubs");

	//Print
	std::cout << "CARDS:";
	std::cout << "\n" << card1.getNumber() << " of " << card1.getSuit();
	std::cout << "\n" << card2.getNumber() << " of " << card2.getSuit();
	std::cout << "\n" << card3.getNumber() << " of " << card3.getSuit();
	std::cout << "\n" << card4.getNumber() << " of " << card4.getSuit();
	std::cout << "\n" << card5.getNumber() << " of " << card5.getSuit();

	//Suit Equality
	std::cout << "\n\nSUIT EQUALITY TEST:";
	card1.suit_equality(card2, card4);
	card1.suit_equality(card3, card5);	

	//Value Equality
	std::cout << "\n\nVALUE EQUALITY TEST:";
	card1.equalTo(card1, card5);
	card1.equalTo(card4, card3);

	//Lesser
	card1.lesserThan(card2, card3);
	card1.lesserThan(card3, card1);

	//Greater
	card1.greaterThan(card4, card3);
	card1.greaterThan(card3, card4);

	return 0;
};