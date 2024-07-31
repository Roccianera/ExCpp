
CC=g++
CFLAGS=-std=c++11
DEPS= CARD.h Blackjack.h Player.h
OBJ = CARD.o Blackjack.o Player.o main.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)