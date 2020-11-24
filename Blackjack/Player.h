#pragma once
#include "Card.h"
#include<vector>
#include <memory>
#include <iostream>
#include <string>

#include <conio.h>


class Player
{
	

protected:
	 
	void count_hand();
	std::vector < std::unique_ptr <Card> > hand;
	bool playing = true;
	int hand_power = 0;
	int number_ACE = 0;
	std::string name = "NN";
	
public: 
	
	Player() = default;
	Player(std::string _name) { name = _name; };
	Player(const Player& player) { name = player.name; };
	~Player() = default;
	

	void take_card(std::unique_ptr <Card> card);
	bool is_playing();
	int power_hand();
	void end_game();
	void show_hand();
	virtual char move() =0; // do przes³oniecia 

};

class Dealer : public Player

{
public:
	Dealer(std::string _name) { name = _name;};
	Dealer() {};
	~Dealer() = default;
	char move() override;

};


class Human : public Player
{
public:
	Human(std::string _name) { name = _name; };
	Human() {};
	~Human() = default;
	char move() override;

};

