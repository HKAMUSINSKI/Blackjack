#pragma once
#include "Deck.h"

void Deck::init_deck()
{
	
	
	if (is_deck_empty() == true)
	{
		deck.push_back(std::make_unique<Card>("Ace Clubs", 11));
		deck.push_back(std::make_unique<Card>("King Clubs", 10));
		deck.push_back(std::make_unique<Card>("Queen Clubs", 10));
		deck.push_back(std::make_unique<Card>("Jack Clubs", 10));
		deck.push_back(std::make_unique<Card>("10 Clubs", 10));
		deck.push_back(std::make_unique<Card>("9 Clubs", 9));
		deck.push_back(std::make_unique<Card>("8 Clubs", 8));
		deck.push_back(std::make_unique<Card>("7 Clubs", 7));
		deck.push_back(std::make_unique<Card>("6 Clubs", 6));
		deck.push_back(std::make_unique<Card>("5 Clubs", 5));
		deck.push_back(std::make_unique<Card>("4 Clubs", 4));
		deck.push_back(std::make_unique<Card>("3 Clubs", 3));
		deck.push_back(std::make_unique<Card>("2 Clubs", 2));

		deck.push_back(std::make_unique<Card>("Ace Diamonds", 11));
		deck.push_back(std::make_unique<Card>("King Diamonds", 10));
		deck.push_back(std::make_unique<Card>("Queen Diamonds", 10));
		deck.push_back(std::make_unique<Card>("Jack Diamonds", 10));
		deck.push_back(std::make_unique<Card>("10 Diamonds", 10));
		deck.push_back(std::make_unique<Card>("9 Diamonds", 9));
		deck.push_back(std::make_unique<Card>("8 Diamonds", 8));
		deck.push_back(std::make_unique<Card>("7 Diamonds", 7));
		deck.push_back(std::make_unique<Card>("6 Diamonds", 6));
		deck.push_back(std::make_unique<Card>("5 Diamonds", 5));
		deck.push_back(std::make_unique<Card>("4 Diamonds", 4));
		deck.push_back(std::make_unique<Card>("3 Diamonds", 3));
		deck.push_back(std::make_unique<Card>("2 Diamonds", 2));

		deck.push_back(std::make_unique<Card>("Ace Hearts", 11));
		deck.push_back(std::make_unique<Card>("King Hearts", 10));
		deck.push_back(std::make_unique<Card>("Queen Hearts", 10));
		deck.push_back(std::make_unique<Card>("Jack Hearts", 10));
		deck.push_back(std::make_unique<Card>("10 Hearts", 10));
		deck.push_back(std::make_unique<Card>("9 Hearts", 9));
		deck.push_back(std::make_unique<Card>("8 Hearts", 8));
		deck.push_back(std::make_unique<Card>("7 Hearts", 7));
		deck.push_back(std::make_unique<Card>("6 Hearts", 6));
		deck.push_back(std::make_unique<Card>("5 Hearts", 5));
		deck.push_back(std::make_unique<Card>("4 Hearts", 4));
		deck.push_back(std::make_unique<Card>("3 Hearts", 3));
		deck.push_back(std::make_unique<Card>("2 Hearts", 2));

		deck.push_back(std::make_unique<Card>("Ace Spades", 11));
		deck.push_back(std::make_unique<Card>("King Spades", 10));
		deck.push_back(std::make_unique<Card>("Queen Spades", 10));
		deck.push_back(std::make_unique<Card>("Jack Spades", 10));
		deck.push_back(std::make_unique<Card>("10 Spades", 10));
		deck.push_back(std::make_unique<Card>("9 Spades", 9));
		deck.push_back(std::make_unique<Card>("8 Spades", 8));
		deck.push_back(std::make_unique<Card>("7 Spades", 7));
		deck.push_back(std::make_unique<Card>("6 Spades", 6));
		deck.push_back(std::make_unique<Card>("5 Spades", 5));
		deck.push_back(std::make_unique<Card>("4 Spades", 4));
		deck.push_back(std::make_unique<Card>("3 Spades", 3));
		deck.push_back(std::make_unique<Card>("2 Spades", 2));
		
	}
	else
	{clear_deck();
	 init_deck();
	}
	shuffler();

}

void Deck::shuffler()
{
	srand((unsigned)time(0));
	for (int i = 0; i < 52; i++)
		swap(deck[i], deck[rand() % 52]);
	//std::cout << "******Deck Shuffled!******" << std::endl;
}

std::unique_ptr<Card> Deck::get_card()
{
	if (is_deck_empty() == true) init_deck();

	std::unique_ptr<Card> _card = std::move(deck.back());
	deck.pop_back();
	return _card;
	
}

bool Deck::is_deck_empty()
{
	if (deck.size() == 0) return true;
	else return false;
}

void Deck::clear_deck()
{
	deck.clear();
	deck.resize(0);
}

void Deck::print_deck()
{
	std::cout << "******************************************" << std::endl;
	std::cout << "*********************Deck*****************" << std::endl;
	
	/*
	for (int i = 0; i < deck.size(); i++)
		{

		std::cout <<deck[i]->getName() << ", ";
		
	}
	*/
	for ( const auto& i : deck)
	{

		std::cout << i->getName() << ", ";

	}
	std::cout << std::endl;
	std::cout << "*****************End of deck***************" << std::endl;
	
}


