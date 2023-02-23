
#include <stdio.h>
#include <string>

#include "card.h"
#include <iostream>

card::card(std::string number, std::string suit) {

	this->number = number;
	this->suit = suit;
	
}
card::~card(){

}

std::string card::getSuit()
{
	return suit;
}

std::string card::getNumber() 
{
	return number;
}

int card::getIntValue(card card1) 
{
		if (card1.getNumber() == "Ace") {
			return 14;
		}
		else if (card1.getNumber() == "King") {
			return 13;
		}
		else if (card1.getNumber() == "Queen") {
			return 12;
		}
		else if (card1.getNumber() == "Jack") {
			return 11;
		}
		else {
			return std::stoi(card1.getNumber());
		}
}


void card::suit_equality(card card1, card card2) 
{
	if (card1.getSuit() == card2.getSuit()) {
		std::cout << "\n" << card1.getNumber() << " of " << card1.getSuit() << " is equal in suit to " << card2.getNumber()<< " of " << card2.getSuit();
	}
	else {
		std::cout << "\n" << card1.getNumber() << " of " << card1.getSuit() << " is not equal in suit to " << card2.getNumber() << " of " << card2.getSuit();
	}
}

void card::equalTo(card card1, card card2)
{
	if (card1.getNumber() == card2.getNumber()) {
		std::cout << "\n" << card1.getNumber() << " of " << card1.getSuit() << " is equal in value to " << card2.getNumber()<< " of " << card2.getSuit();
	}
	else {
		std::cout << "\n" << card1.getNumber() << " of " << card1.getSuit() << " is not equal in value to " << card2.getNumber() << " of " << card2.getSuit();
	}
}

void card::lesserThan(card card1, card card2) 
{
	if(getIntValue(card1) < getIntValue(card2)){
		std::cout << "\n\n" << card1.getNumber() << " of " << card1.getSuit() << " is less than " << card2.getNumber() << " of " << card2.getSuit();
	}
	else{
		std::cout << "\n" << card1.getNumber() << " of " << card1.getSuit() << " is not less than " << card2.getNumber() << " of " << card2.getSuit();
	}
		
	
}

void card::greaterThan(card card1, card card2) 
{
	if (getIntValue(card1) > getIntValue(card2)) {
		std::cout << "\n\n" << card1.getNumber() << " of " << card1.getSuit() << " is greater than " << card2.getNumber() << " of " << card2.getSuit() << "\n";
	}
	else {
		std::cout << card1.getNumber() << " of " << card1.getSuit() << " is not greater than " << card2.getNumber() << " of " << card2.getSuit() << "\n";
	}
	
}

