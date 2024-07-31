
CC=g++
CFLAGS=-std=c++11
DEPS= Blackjack.h Player_bj.h
OBJ = Blackjack.o Player_bj.o test.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)