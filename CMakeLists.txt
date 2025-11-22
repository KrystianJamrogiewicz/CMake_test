cmake_minimum_required(VERSION 3.10)    # Określa minimalną wersję CMake wymaganą do tego projektu
project(HelloWorldExtended)    # Definiuje nazwę projektu

set(CMAKE_CXX_STANDARD 20)      # Ustawia standard C++ na wersję 20
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # Wymusza użycie tego standardu (jeśli kompilator nie wspiera C++20, konfiguracja się nie powiedzie)


################### WAŻNE ########################
include_directories(include)    # Dodaje katalog include do ścieżek szukania plików nagłówkowych

add_executable(hello src/main.cpp src/greeter.cpp)      # Tworzy plik wykonywalny 'hello' z podanych plików źródłowych
