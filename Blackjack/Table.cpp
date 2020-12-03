#include "Table.h"


void Table::add_player(int type, std::string name)
{
	if (type == 0) player.push_back(std::make_unique<Dealer>(name));
	if (type == 1) player.push_back(std::make_unique<Human>(name));

}

void Table::remove_player(int type)
{
	player.erase(player.begin() + type);
}

void Table::show_players()
{
	std::cout << "******************************************" << std::endl;
	std::cout << "*********************Players*****************" << std::endl;

	
	for (unsigned int i = 0; i < player.size(); i++)
		{

		std::cout << " - " << i << " is -> "<< player[i]->get_name() << std::endl;

	}
	
	
	std::cout << std::endl;
	std::cout << "*****************End of players***************" << std::endl;
}

void Table::run()
{
	dealer.take_card(std::move(deck.get_card()));
	std::cout << "First dealer card is " << dealer.first_card() << std::endl;
	dealer.take_card(std::move(deck.get_card()));

	for (const auto& i : player)
	{
		char choice = 'h';
		system("cls");
		std::cout << "Now turn " << i->get_name() << std::endl;
		 i->take_card(std::move(deck.get_card()));
		 i->take_card(std::move(deck.get_card()));
	 
		 if (i->power_hand() == 21)
		 {
			 std::cout << "Blackjack" << std::endl;
			 choice = 's';
		 }
		 
		 while (choice != 's')
		{

			std::cout << std::endl;
			std::cout << "Remember first dealer card is " << dealer.first_card() << std::endl;
			std::cout << std::endl;

			i->show_hand();
			choice = i->move();
			if (choice == 'h')
			{
				std::cout << "Player hit " << std::endl;
				i->take_card(std::move(deck.get_card()));

			}
			else std::cout << "Player stand " << std::endl;
			if ((i->power_hand() > 21))
			{
				std::cout << "Busted: " <<i->power_hand() <<std::endl;
				choice = 's';
				Sleep(1000);
			}
			system("cls");

		}
	}
	//////////////
	//dealer turn
	char choice = 'h';
	do
	{
		choice = dealer.move();
		if (choice == 'h') dealer.take_card(std::move(deck.get_card()));
	} while (choice != 's');

	dealer.show_hand();
	///////////////

	
	for (const auto& i : player)
	{

		if ((i->power_hand() == 21) and i->is_playing() == true)
		{
			std::cout << i->get_name() << " won by Blackjack" << std::endl;
			
		}
		else
		{
			if ((i->power_hand() > 21))
			{
				std::cout << i->get_name() << " Busted " << std::endl;

			}
			else
			{
				if ((dealer.power_hand() > 21))
				{
					std::cout << " Busted " << dealer.power_hand() << "  " << i->get_name() << " won"<<std::endl;

				}
				else
				{
					std::cout << " Dealer power: " << dealer.power_hand();
					std::cout << " Yours power: " << i->power_hand();
					std::cout << " Result is that: ";
					if (i->power_hand() > dealer.power_hand())
						std::cout << i->get_name()<< " won " <<std::endl;
					else 
						std::cout << i->get_name() << " lost " << std::endl;
				}
			}
		}
		i->end_game();
	}
	
	dealer.end_game();

	std::cout << "Press any key" << std::endl;
	_getch();

}



