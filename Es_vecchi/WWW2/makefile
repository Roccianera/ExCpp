
CC=g++
CFLAGS=-std=c++11
DEPS= Web.h
OBJ = main.o Web.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)