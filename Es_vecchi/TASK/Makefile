
CC=g++
CFLAGS=-std=c++11
DEPS= Project.h  Task.h  Programmer.h
OBJ = main.o Task.o Project.o  Programmer.o Date\Date.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)