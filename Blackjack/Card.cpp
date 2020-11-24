#pragma once
#include "Card.h"


std::string Card::getName()
{
	return name;
}

int Card::getValue()
{
	return value;
}

void Card::setValue(unsigned int _value)
{
	if (name.compare(0,3,"Ace")==0) 
		value = _value;
}
