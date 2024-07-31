test: test.o TicTacToe.o
	g++ -o test TicTacToe.o test.o 
test.o: TicTacToe.h test.cpp 
	g++ -Wall -pedantic -std=c++11 -c test.cpp
TicTacToe.o: TicTacToe.h TicTacToe.cpp
	g++ -Wall -pedantic -std=c++11 -c TicTacToe.cpp