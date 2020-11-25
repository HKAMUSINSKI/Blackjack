// Blackjack.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#pragma once
#include <iostream>
#include "Table.h"
#include <memory>

int main()
{
   
    
    //Dealer player("TEST");
    //Human player2("Test2");
    //std::unique_ptr<Dealer> player = std::make_unique<Dealer>();
    //std::unique_ptr<Human> player2 = std::make_unique<Human>();

    
    
    Dealer dealer("croupier");

    
    
    Table table;
        
    table.add_player(0, "AI Player1");
    table.add_player(0, "AI Player2");
    table.add_player(0, "AI Player3");
    table.add_player(0, "AI Player4");
    table.add_player(0, "AI Player5");
    table.add_player(1, "Human player 1");
    table.add_player(1, "Human player 2");
    table.add_player(1, "Human player 3");
    
    table.show_players();
    table.remove_player(3);
    table.show_players();

    std::cout<<"First round";
    table.run();
    std::cout<<"Second round";
    table.run();
   
    
    


    

    
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
