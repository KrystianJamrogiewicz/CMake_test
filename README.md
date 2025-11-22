# CMake_Test

1. Stworzyć plik "CMakeLists.txt":

	cmake_minimum_required(VERSION 3.10)
	project(HelloWorld)
	add_executable(hello main.cpp)

2. Stworzyć folder "build" i wejść do niego
	
	mkdie build
	cd build
	
3. Użyć komendy: cmake.. lub jeśli nie ma zainstalowanego nmake to: cmake -G "MinGW Makefiles" ..
	
	Na bazie "CMakeLists.txt" stworzy to pliki umożliwiające budowę pliku .exe

4. Użyć komendy: cmake --build .

	Wykona się kompilacja i utworzony zostanie plik wykonawczy: hello.exe na bazie pliku: main.cpp
	
5. Aby otworzyć plik .exe wpisasć komende: .\hello.exe
	