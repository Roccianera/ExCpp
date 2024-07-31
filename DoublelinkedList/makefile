CC=g++
CFLAGS=-std=c++11
DEPS=  DNode.h DList.h DList.cpp
OBJ = main.o 

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)