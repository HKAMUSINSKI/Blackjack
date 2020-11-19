// Blackjack.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#pragma once
#include <iostream>
#include "Card.h"
#include "Deck.h"

int main()
{
    Card as("AS czerwony", 1);
    Card dama("DAMA czerwony", 2);
    
    Deck deck;
    deck.init_deck();
    deck.print_deck();
    std::unique_ptr<Card> card1 = deck.get_card();
    std::cout << std::endl << card1->getName() << std::endl;
    std::unique_ptr<Card> card2 = deck.get_card();
    std::cout << std::endl << card2->getName() << std::endl;
    card2 = deck.get_card();
    std::cout << std::endl << card2->getName() << std::endl;
    deck.print_deck();
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
