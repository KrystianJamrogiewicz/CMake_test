#pragma once   // Zapobiega wielokrotnemu załączaniu tego samego pliku nagłówkowego podczas kompilacji
#include <string>   // Dołącza standardową bibliotekę łańcuchów znaków (std::string)


// Deklaracja funkcji greet, która przyjmuje stałą referencję do napisu i zwraca napis (definicja jest w pliku cpp)
std::string greet(const std::string& name);
