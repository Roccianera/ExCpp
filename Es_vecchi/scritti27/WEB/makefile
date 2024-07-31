
CC=g++
CFLAGS=-std=c++11
DEPS= Page.h
OBJ = main.o Page.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)