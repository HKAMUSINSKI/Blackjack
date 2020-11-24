#pragma once
#include "Card.h"
#include<vector>
#include <memory>
#include <iostream>
#include <string>


class Player
{
	std::vector < std::unique_ptr <Card> > hand;
	bool playing = true; 
	int hand_power = 0;
	int number_ACE = 0;
	std::string name = "NN";

protected:
	 
	void count_hand();
	
public: 
	
	Player(std::string name) : name(name) {};
	~Player() = default;

	void take_card(std::unique_ptr <Card> card);
	bool is_playing();
	int power_hand();
	void end_game();
	void show_hand();
	//virtual char move();


};

