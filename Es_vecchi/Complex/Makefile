
CC=g++
CFLAGS=-std=c++11
DEPS= Complex.h
OBJ = Complex.o test.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)