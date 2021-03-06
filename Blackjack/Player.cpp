#include "Player.h"

void Player::count_hand()
{
	std::string name = hand.back()->getName();
	if ((number_ACE > 1 ) and (name.compare(0, 3, "Ace") == 0))
	{	
		std::cout << "I will count this ACE as 1" <<std::endl;
	hand.back()->setValue(1);
	}
	
	hand_power +=hand.back()->getValue();
	

	if (hand_power > 21)
	{
		hand_power = 0;
		for (const auto& i : hand)
		{

			if ((i->getValue()) == 11)
			{
				i->setValue(1);
				std::cout << "From now I will count first ACE as 1" << std::endl;
			}
			hand_power += i->getValue();
		}
		

	}
	
}



void Player::take_card(std::unique_ptr<Card> card)
{
	hand.push_back(std::move(card));
	std::string name = hand.back()->getName();
	if (name.compare(0, 3, "Ace") == 0)
	{
		number_ACE++;
	}
	
	count_hand();
		
}

bool Player::is_playing()
{
	return playing;
}

int Player::power_hand()
{
	return hand_power;
}

void Player::end_game()
{
	
	playing = true;
	hand_power = 0;
	number_ACE = 0;
	hand.clear();
	hand.resize(0);
}

void Player::show_hand()
{
	std::cout << "*********************Hand: " << name << " **********************************" <<std::endl;
	
	for (const auto& i : hand)
	{

		std::cout << i->getName() << ", " << i->getValue() << std::endl;;

		
	}
	std::cout << "Power of hand: " << hand_power << std::endl;
	std::cout << std::endl;
	std::cout << "*****************End of hand***************" << std::endl;
}

std::string Player::get_name()
{
	return name;
}

///////////////////////////////////////////

char Dealer::move()
{
	
	if (power_hand() < 17) return 'h';
	else
	{
		playing = false;
		Sleep(2000);
		return 's';

	}
	
	
}

std::string Dealer::first_card()
{
	std::string name = hand.front()->getName();
	return name;
}


///////////////////////////////////////////

	char Human::move()
	{
		
		char choice;

		do
		{
			std::cout << " Your turn: press h -> hit or s -> stand" << std::endl;
			choice = _getch();
		} while ( !((choice == 's') or (choice == 'h')));

		if (choice =='s') playing = false;
		return choice;
	
	}
	