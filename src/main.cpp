#include <iostream>     // Załącza bibliotekę do wejścia/wyjścia (std::cout, std::cin)
#include "greeter.hpp"  // Załącza nagłówek z deklaracją funkcji greet() w katalogu include (katalog został zdefiniowany w pliku CMakeLists.txt)

int main() {    // Definicja funkcji głównej, czyli punktu startowego programu

    std::cout << greet("World") << std::endl;   // Wywołuje funkcję greet z argumentem "World" i wypisuje wynik na konsolę
    std::cin.get(); // Czeka na naciśnięcie klawisza przez użytkownika (zapobiega natychmiastowemu zamknięciu konsoli)
    
    return 0;   // Zwraca 0 - oznacza, że program zakończył się sukcesem
}
