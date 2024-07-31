CC=g++
CFLAGS=-std=c++11
DEPS= fd\Date.h 
OBJ = fd\Date.o  main.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)