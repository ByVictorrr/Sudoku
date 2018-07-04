main: main.o Instructions.o Suduko.o	startMenu.o
	g++ main.o Instructions.o Suduko.o startMenu.o -o main

main.o: main.cpp
	g++ -c main.cpp

Instructions.o: Instructions.cpp
	g++ -c Instructions.cpp

Suduko.o: Suduko.cpp
	g++ -c Suduko.cpp

startMenu.o: startMenu.cpp
	g++ -c startMenu.cpp

clean:
	rm main


