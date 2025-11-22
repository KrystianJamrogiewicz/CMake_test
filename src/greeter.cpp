#include "greeter.hpp"  // Dołącza deklarację funkcji greet z nagłówka, żeby można było z niej korzystać

// Definicja funkcji greet, która przyjmuje argument "name" (stałą - wyłącza możliwość edycji) jako (referencje - nie tworzy kopii, oszczedza miejsce) do napisu i zwraca napis powitalny
std::string greet(const std::string& name) {
    return "Hello " + name + "!";
}
