#pragma once

#include <stdio.h>
#include <string>
#include <string>



class card
{

public:
	card(std::string number, std::string suit);
	~card();


public:
	std::string getSuit();
	std::string getNumber();
	int getIntValue(card card1);
	void suit_equality(card card1, card card2);
	void equalTo(card card1, card card2);
	void greaterThan(card card1, card card2);
	void lesserThan(card card1, card card2);


protected:
	std::string number, suit;
};

