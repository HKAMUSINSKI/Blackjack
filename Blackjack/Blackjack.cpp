// Blackjack.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#pragma once
#include <iostream>
#include "Table.h"
#include <memory>
#include <CONIO.H>

void choice_msg(char* choice)
{
    std::cout << "You have chosen: " << *choice << std::endl;
    Sleep(400);
    system("cls");
}

int main()
{
   
  
    char choice = '0';
    Table table;
   
    while (choice != '9')
    {
        system("cls");
              
        std::cout << "Hello lets play in blackjack" << std::endl;
        std::cout << "What do You want to do" << std::endl;
        std::cout << "1. Add Human player" << std::endl;
        std::cout << "2. Add AI player" << std::endl;
        std::cout << "3. See players" << std::endl;
        std::cout << "4. Remove player" << std::endl;
        std::cout << "5. Play" << std::endl;
        std::cout << "9. Exit" << std::endl;
        
        choice =_getch();
        
        choice_msg(&choice);

        std::string name;

        switch (choice)
        {
        case '1':
            std::cout << "Please give name for player" << std::endl;
            std::getline(std::cin, name);
            table.add_player(1, name);

            break;
        case '2':
            std::cout << "Please give name for player" << std::endl;
            std::getline(std::cin, name);
            table.add_player(0, name);

            break;

        case '3':
            table.show_players();
            system("pause");
            
            break;

        case '4':
            table.show_players();
            std::cout << "Which player should be removed?" << std::endl;
            int id;
            std::cin >> id;
            std::cin.ignore(10000, '\n');
            table.remove_player(id);
            
            break;

        case '5':
            table.run();
            break;

        case '9':
            std::cout << "We leave the game" << std::endl;
            Sleep(1000);
            break;

        default:
            std::cout << "There is no option, try again" << std::endl;


            break;
        }
    }

    
    

    
    
    

    
    
    
        
    
    
   
   
    
    


    

    
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
