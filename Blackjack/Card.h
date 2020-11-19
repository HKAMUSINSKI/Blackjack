#pragma once
#include <string>

class Card
{
	const std::string name;
	unsigned int value;
	
public: 
	Card(std::string name, unsigned int value) : name(name), value(value) {};
	std::string getName();
	int getValue();
	void setValue(unsigned int _value);
};

