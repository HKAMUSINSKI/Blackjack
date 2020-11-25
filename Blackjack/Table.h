#pragma once
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include <windows.h>



class Table
{
protected:

	Dealer dealer;
	Deck deck;
	std::vector < std::unique_ptr <Player> > player;

	void first_round();

public:
	Table() = default;
	~Table() = default;


	// Table settings 
	void add_player(int type, std::string name);
	void remove_player(int type);
	void show_players();

	//game 

	void run();
};

