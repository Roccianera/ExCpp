
CC=g++
CFLAGS=-std=c++11
DEPS= Matrix.h
OBJ = Matrix.o test.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)