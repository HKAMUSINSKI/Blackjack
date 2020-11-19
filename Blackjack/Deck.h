#pragma once
#include "Card.h"
#include<vector>
#include <memory>
#include <iostream>
#include <time.h>

class Deck
{
	std::vector < std::unique_ptr <Card> > deck;
	bool is_deck_empty();
	void clear_deck();
	
	
public:
	void init_deck();
	void shuffler();
	void print_deck();
	std::unique_ptr <Card> get_card();
};

