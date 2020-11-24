// Blackjack.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#pragma once
#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include <memory>

int main()
{
   
    
    //Dealer player("TEST");
    //Human player2("Test2");
    //std::unique_ptr<Dealer> player = std::make_unique<Dealer>();
    //std::unique_ptr<Human> player2 = std::make_unique<Human>();

    Player* player = new Dealer("test");
    Player* player2 = new Human("test2");

    Deck deck;
    deck.init_deck();
    deck.print_deck();
    
    
   
    

    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            //card1 = deck.get_card();
            player->take_card(std::move(deck.get_card()));
            
            player2->take_card(std::move(deck.get_card()));
        }
        player->show_hand();
        player2->show_hand();
        deck.print_deck();
       
        std::cout << player->move() << std::endl;
        std::cout << player2->move() << std::endl;
       


    }
    
    delete player;
    delete player2;


    

    
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
